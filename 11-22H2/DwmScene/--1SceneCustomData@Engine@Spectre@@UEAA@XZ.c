/*
 * XREFs of ??1SceneCustomData@Engine@Spectre@@UEAA@XZ @ 0x18004003C
 * Callers:
 *     ??1EngineSceneData@Engine@1Spectre@@UEAA@XZ @ 0x180031EE4 (--1EngineSceneData@Engine@1Spectre@@UEAA@XZ.c)
 *     ??_GSceneCustomData@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800326B0 (--_GSceneCustomData@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA@XZ @ 0x180064110 (--1ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::ViewerEngine::ViewerSceneData::ViewerSceneData_::_1_::dtor$0 @ 0x1800E7EEA (_Spectre--Engine--ViewerEngine--ViewerSceneData--ViewerSceneData_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::SceneCustomData::~SceneCustomData(Spectre::Engine::SceneCustomData *this)
{
  *(_QWORD *)this = &Spectre::Engine::SceneCustomData::`vftable';
}
