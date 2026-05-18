/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800D8A6C
 * Callers:
 *     ?ActivateDisplay@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXIW4StereoEye@2345@@Z @ 0x1800D8EE0 (-ActivateDisplay@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXIW4StereoEy.c)
 *     ?GetOrCreateHolographicDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAAEAV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@I@Z @ 0x1800D969C (-GetOrCreateHolographicDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180027FB4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800C884C (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$alloca.c)
 */

__int64 __fastcall std::map<unsigned int,std::shared_ptr<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>>::_Try_emplace<unsigned int const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::_Find_lower_bound<unsigned int>(
    a1,
    (__int64)&v10,
    a3);
  if ( *(_BYTE *)(v11 + 25) || *a3 < *(_DWORD *)(v11 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v6 = *a1;
    v9 = (unsigned __int64)a1;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v7[8] = *a3;
    *((_QWORD *)v7 + 6) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    *(_QWORD *)v7 = v6;
    *((_QWORD *)v7 + 1) = v6;
    *((_QWORD *)v7 + 2) = v6;
    *((_WORD *)v7 + 12) = 0;
    *((_QWORD *)&v9 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>>,void *>>>((__int64)&v9);
    v9 = v10;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v9,
                      (__int64)v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
