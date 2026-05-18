/*
 * XREFs of ??1?$set@PEAVILowMemoryHandlerD3D11@D3D11@Engine@Spectre@@U?$less@PEAVILowMemoryHandlerD3D11@D3D11@Engine@Spectre@@@std@@V?$allocator@PEAVILowMemoryHandlerD3D11@D3D11@Engine@Spectre@@@6@@std@@QEAA@XZ @ 0x180084510
 * Callers:
 *     _Spectre::Engine::ShaderPropertyBlock::ShaderPropertyBlock_::_1_::dtor$3 @ 0x1800EA3C6 (_Spectre--Engine--ShaderPropertyBlock--ShaderPropertyBlock_--_1_--dtor$3.c)
 *     _Spectre::Engine::GpuProfiler::FramesData::FramesData_::_1_::dtor$2 @ 0x1800EB219 (_Spectre--Engine--GpuProfiler--FramesData--FramesData_--_1_--dtor$2.c)
 *     _Spectre::Engine::D3D11::RenderDeviceD3D11::RenderDeviceD3D11_::_1_::dtor$3 @ 0x1800F158F (_Spectre--Engine--D3D11--RenderDeviceD3D11--RenderDeviceD3D11_--_1_--dtor$3.c)
 *     _Spectre::Engine::D3D11::RenderDeviceD3D11::RenderDeviceD3D11_::_1_::dtor$4 @ 0x1800F15A8 (_Spectre--Engine--D3D11--RenderDeviceD3D11--RenderDeviceD3D11_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::set<Spectre::Engine::D3D11::ILowMemoryHandlerD3D11 *>::~set<Spectre::Engine::D3D11::ILowMemoryHandlerD3D11 *>(
        void **a1)
{
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>(a1);
}
