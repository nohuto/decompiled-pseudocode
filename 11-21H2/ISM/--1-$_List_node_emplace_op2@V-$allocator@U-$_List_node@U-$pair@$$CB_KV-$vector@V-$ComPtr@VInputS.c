/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801235AC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite______std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite__________0___::_Try_emplace_unsigned___int64_const_&__::_1_::dtor$0 @ 0x1800544D0 (_std--_Hash_std--_Umap_traits_unsigned___int64_std--vector_Microsoft--WRL--ComPtr_InputSite__std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180086B74 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v2 + 24);
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x30uLL);
  }
}
