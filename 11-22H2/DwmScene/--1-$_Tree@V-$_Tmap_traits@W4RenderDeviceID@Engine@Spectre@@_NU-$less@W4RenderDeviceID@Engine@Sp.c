/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F84
 * Callers:
 *     ??1SharedResource@Engine@Spectre@@UEAA@XZ @ 0x1800280B8 (--1SharedResource@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Material@Engine@Spectre@@UEAA@XZ @ 0x180043A44 (--1Material@Engine@Spectre@@UEAA@XZ.c)
 *     ??1?$set@PEAVILowMemoryHandlerD3D11@D3D11@Engine@Spectre@@U?$less@PEAVILowMemoryHandlerD3D11@D3D11@Engine@Spectre@@@std@@V?$allocator@PEAVILowMemoryHandlerD3D11@D3D11@Engine@Spectre@@@6@@std@@QEAA@XZ @ 0x180084510 (--1-$set@PEAVILowMemoryHandlerD3D11@D3D11@Engine@Spectre@@U-$less@PEAVILowMemoryHandlerD3D11@D3D.c)
 *     ??1ShaderPropertyBlock@Engine@Spectre@@QEAA@XZ @ 0x180084568 (--1ShaderPropertyBlock@Engine@Spectre@@QEAA@XZ.c)
 *     ??1FramesData@GpuProfiler@Engine@Spectre@@QEAA@XZ @ 0x1800A0C9C (--1FramesData@GpuProfiler@Engine@Spectre@@QEAA@XZ.c)
 *     ??1RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C4318 (--1RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@1@@Z @ 0x180027B48 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::~_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<Spectre::Engine::D3D11::IDeviceLostHandlerD3D11 *>>::_Erase_tree<std::allocator<std::_Tree_node<Spectre::Engine::D3D11::IDeviceLostHandlerD3D11 *,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
