/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800C8990
 * Callers:
 *     ?ObtainLatestFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA1B8 (-ObtainLatestFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 *     ?ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA4FC (-ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001D228 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800C884C (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned int,DXGI_FRAME_STATISTICS>::_Try_emplace<unsigned int const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v6; // rbx
  char *v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::_Find_lower_bound<unsigned int>(
    a1,
    (__int64)&v10,
    a3);
  if ( *(_BYTE *)(v11 + 25) || *a3 < *(_DWORD *)(v11 + 32) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      std::_Throw_tree_length_error();
    v6 = *a1;
    *(_QWORD *)&v9 = a1;
    v7 = (char *)operator new(0x48uLL);
    *((_DWORD *)v7 + 8) = *a3;
    *(_OWORD *)(v7 + 40) = 0LL;
    *(_OWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)v7 = v6;
    *((_QWORD *)v7 + 1) = v6;
    *((_QWORD *)v7 + 2) = v6;
    *((_WORD *)v7 + 12) = 0;
    *((_QWORD *)&v9 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,enum Spectre::Engine::ShaderOption>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,enum Spectre::Engine::ShaderOption>,void *>>>((__int64)&v9);
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
