/*
 * XREFs of ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@1@@Z @ 0x1800DAFB0
 * Callers:
 *     ??$_Emplace@AEAMAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@MV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@U?$greater@M@std@@V?$allocator@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@@5@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEAMAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@Z @ 0x1800DAB48 (--$_Emplace@AEAMAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@MV-$ComPtr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x18002F1D0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>(
        _QWORD *a1,
        __int64 a2)
{
  unsigned __int64 size_of; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  return a1;
}
