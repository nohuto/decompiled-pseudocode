/*
 * XREFs of ??1?$array@V?$shared_ptr@VAimer@Engine@Spectre@@@std@@$02@std@@QEAA@XZ @ 0x18006405C
 * Callers:
 *     _Spectre::Engine::ViewerEngine::ViewerSceneData::ViewerSceneData_::_1_::dtor$1 @ 0x1800E7EFC (_Spectre--Engine--ViewerEngine--ViewerSceneData--ViewerSceneData_--_1_--dtor$1.c)
 *     _Spectre::Engine::ViewerEngine::ViewerSceneData::ViewerSceneData_::_1_::dtor$2 @ 0x1800E7F12 (_Spectre--Engine--ViewerEngine--ViewerSceneData--ViewerSceneData_--_1_--dtor$2.c)
 *     _Spectre::Engine::StandardShaderExtension::OnFrameRender_::_1_::dtor$1 @ 0x1800E9EE7 (_Spectre--Engine--StandardShaderExtension--OnFrameRender_--_1_--dtor$1.c)
 *     _Spectre::Engine::BackgroundUnlitShaderExtension::OnFrameRender_::_1_::dtor$3 @ 0x1800EA25F (_Spectre--Engine--BackgroundUnlitShaderExtension--OnFrameRender_--_1_--dtor$3.c)
 *     _Spectre::Engine::LightGatherer::UpdateLightConstants_::_1_::dtor$0 @ 0x1800EB5AC (_Spectre--Engine--LightGatherer--UpdateLightConstants_--_1_--dtor$0.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall std::array<std::shared_ptr<Spectre::Engine::Aimer>,3>::~array<std::shared_ptr<Spectre::Engine::Aimer>,3>(
        char *a1)
{
  `eh vector destructor iterator'(
    a1,
    16LL,
    3LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::DeviceVertexLayout>::~shared_ptr<Spectre::Engine::DeviceVertexLayout>);
}
