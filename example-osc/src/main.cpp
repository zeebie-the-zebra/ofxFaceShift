#include "ofMain.h"
#include "ofApp.h"

//#include "ofAppGlutWindow.h"

int main() {
	//ofAppGlutWindow window; ofAppGlutWindow is not needed anymore.
	
	ofSetupOpenGL(400, 100, OF_WINDOW);
	ofRunApp(new ofApp());
}
