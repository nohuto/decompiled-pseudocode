/*
 * XREFs of ??1?$vector@VShaderOptionFilter@Engine@Spectre@@V?$allocator@VShaderOptionFilter@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18007CBFC
 * Callers:
 *     _Spectre::Engine::StandardShaderExtension::OnFrameRender_::_1_::dtor$8 @ 0x1800E9F1D (_Spectre--Engine--StandardShaderExtension--OnFrameRender_--_1_--dtor$8.c)
 *     _Spectre::Engine::BackgroundUnlitShaderExtension::OnFrameRender_::_1_::dtor$8 @ 0x1800E9F2F (_Spectre--Engine--BackgroundUnlitShaderExtension--OnFrameRender_--_1_--dtor$8.c)
 *     _Spectre::Engine::BackgroundUnlitShaderExtension::OnFrameRender_::_1_::dtor$9 @ 0x1800E9F41 (_Spectre--Engine--BackgroundUnlitShaderExtension--OnFrameRender_--_1_--dtor$9.c)
 *     _Spectre::Engine::BackgroundUnlitShaderExtension::OnFrameRender_::_1_::dtor$10 @ 0x1800E9F53 (_Spectre--Engine--BackgroundUnlitShaderExtension--OnFrameRender_--_1_--dtor$10.c)
 *     _Spectre::Engine::BackgroundUnlitShaderExtension::OnFrameRender_::_1_::dtor$11 @ 0x1800E9F65 (_Spectre--Engine--BackgroundUnlitShaderExtension--OnFrameRender_--_1_--dtor$11.c)
 *     _Spectre::Engine::ShaderPipeline::ShaderPipeline_::_1_::dtor$1 @ 0x1800EA491 (_Spectre--Engine--ShaderPipeline--ShaderPipeline_--_1_--dtor$1.c)
 *     _Spectre::Engine::ColorTransform::Generate_::_1_::dtor$1 @ 0x1800EA8C0 (_Spectre--Engine--ColorTransform--Generate_--_1_--dtor$1.c)
 *     _Spectre::Engine::DistanceFromCameraSceneNodeTraversal::GetSceneNodes_::_1_::dtor$1 @ 0x1800EAB03 (_Spectre--Engine--DistanceFromCameraSceneNodeTraversal--GetSceneNodes_--_1_--dtor$1.c)
 *     _Spectre::Engine::D3D11::TextureD3D11::CreateRendererResources2D_::_1_::dtor$0 @ 0x1800F1910 (_Spectre--Engine--D3D11--TextureD3D11--CreateRendererResources2D_--_1_--dtor$0.c)
 *     _Spectre::Engine::D3D11::TextureD3D11::GetDeviceBuffer_::_1_::dtor$12 @ 0x1800F196A (_Spectre--Engine--D3D11--TextureD3D11--GetDeviceBuffer_--_1_--dtor$12.c)
 *     _Spectre::Engine::D3D11::TextureD3D11::GetOrCreateCPUStagingTexture_::_1_::dtor$5 @ 0x1800F19B2 (_Spectre--Engine--D3D11--TextureD3D11--GetOrCreateCPUStagingTexture_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Spectre::Engine::ShaderOptionFilter>::~vector<Spectre::Engine::ShaderOptionFilter>(
        __int64 a1)
{
  std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Tidy(a1);
}
