/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DAFF0
 * Callers:
 *     ??$_Emplace@AEAMAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@MV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@U?$greater@M@std@@V?$allocator@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@@5@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEAMAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@Z @ 0x1800DAB48 (--$_Emplace@AEAMAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@MV-$ComPtr.c)
 *     _std::_Tree_std::_Tmap_traits_float_Microsoft::WRL::ComPtr_IDXGIAdapter1__std::greater_float__std::allocator_std::pair_float_const__Microsoft::WRL::ComPtr_IDXGIAdapter1______1___::_Emplace_float_&_Microsoft::WRL::ComPtr_IDXGIAdapter1__&__::_1_::dtor$0 @ 0x1800F1C44 (_std--_Tree_std--_Tmap_traits_float_Microsoft--WRL--ComPtr_IDXGIAdapter1__std--greater_float__st.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v2 + 40));
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,_LARGE_INTEGER>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,_LARGE_INTEGER>,void *>>>(a1);
}
