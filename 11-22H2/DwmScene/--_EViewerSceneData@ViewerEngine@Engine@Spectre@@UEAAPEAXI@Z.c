/*
 * XREFs of ??_EViewerSceneData@ViewerEngine@Engine@Spectre@@UEAAPEAXI@Z @ 0x180064AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA@XZ @ 0x180064110 (--1ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ViewerEngine::ViewerSceneData *__fastcall Spectre::Engine::ViewerEngine::ViewerSceneData::`vector deleting destructor'(
        Spectre::Engine::ViewerEngine::ViewerSceneData *this,
        char a2)
{
  Spectre::Engine::ViewerEngine::ViewerSceneData::~ViewerSceneData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
