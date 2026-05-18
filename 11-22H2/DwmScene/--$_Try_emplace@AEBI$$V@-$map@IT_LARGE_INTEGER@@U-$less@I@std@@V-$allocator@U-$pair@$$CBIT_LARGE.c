/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800C889C
 * Callers:
 *     ?ObtainLatestFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA1B8 (-ObtainLatestFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 *     ?ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA4FC (-ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x18002F1D0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180031714 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBIT_LARGE_INTEGER@@@std@@PEAX@st.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800C884C (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned int,_LARGE_INTEGER>::_Try_emplace<unsigned int const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v6; // rdi
  unsigned __int64 size_of; // rax
  _DWORD *v8; // rbx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::_Find_lower_bound<unsigned int>(
    a1,
    (__int64)&v11,
    a3);
  if ( *(_BYTE *)(v12 + 25) || *a3 < *(_DWORD *)(v12 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v6 = *a1;
    v10 = (unsigned __int64)a1;
    size_of = std::_Get_size_of_n<48>(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v8[8] = *a3;
    *((_QWORD *)v8 + 5) = 0LL;
    *(_QWORD *)v8 = v6;
    *((_QWORD *)v8 + 1) = v6;
    *((_QWORD *)v8 + 2) = v6;
    *((_WORD *)v8 + 12) = 0;
    *((_QWORD *)&v10 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,_LARGE_INTEGER>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,_LARGE_INTEGER>,void *>>>((__int64)&v10);
    v10 = v11;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v10,
                      (__int64)v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
