/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x18002980C
 * Callers:
 *     ?NotifyModified@SharedResource@Engine@Spectre@@MEAAXXZ @ 0x1800296B0 (-NotifyModified@SharedResource@Engine@Spectre@@MEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x18002984C (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU-$less@W4RenderDeviceID@Engin.c)
 *     ?Clear@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ @ 0x1800A1110 (-Clear@FramesData@GpuProfiler@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@1@@Z @ 0x180027B48 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::clear(
        _QWORD *a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)*a1;
  std::_Tree_val<std::_Tree_simple_types<Spectre::Engine::D3D11::IDeviceLostHandlerD3D11 *>>::_Erase_tree<std::allocator<std::_Tree_node<Spectre::Engine::D3D11::IDeviceLostHandlerD3D11 *,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *(_QWORD *)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
}
