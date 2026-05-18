/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@1@@Z @ 0x180027B48
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@1@@Z @ 0x180027B48 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX.c)
 *     ??1?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180027F84 (--1-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU-$less@W4RenderDeviceID@Engine@Sp.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@_N@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x18002980C (-clear@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@_NU-$less@W4RenderDeviceID@Engin.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@IU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180085D98 (-erase@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@IU-$less@W4RenderDeviceID@Engine.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@1@@Z @ 0x180027B48 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<Spectre::Engine::D3D11::IDeviceLostHandlerD3D11 *>>::_Erase_tree<std::allocator<std::_Tree_node<Spectre::Engine::D3D11::IDeviceLostHandlerD3D11 *,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<Spectre::Engine::D3D11::IDeviceLostHandlerD3D11 *>>::_Erase_tree<std::allocator<std::_Tree_node<Spectre::Engine::D3D11::IDeviceLostHandlerD3D11 *,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v6, 0x28uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
