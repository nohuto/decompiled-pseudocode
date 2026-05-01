/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18070E5C0
 * Callers:
 *     ??$emplace@AEBUhstring@winrt@@AEBU12@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@_N@1@AEBUhstring@winrt@@0@Z @ 0x18070B8AC (--$emplace@AEBUhstring@winrt@@AEBU12@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_comp.c)
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_winrt::hstring_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__winrt::hstring____0___::emplace_winrt::hstring_const_&_winrt::hstring_const_&__::_1_::dtor$0 @ 0x18070BA42 (_std--_Hash_std--_Umap_traits_winrt--hstring_winrt--hstring_std--_Uhash_compare_winrt--hstring_s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$pair@$$CBUhstring@winrt@@U12@@std@@QEAAPEAXI@Z @ 0x1806C7680 (--_G-$pair@$$CBUhstring@winrt@@U12@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::pair<winrt::hstring const,winrt::hstring>::`scalar deleting destructor'((volatile signed __int32 **)(v2 + 16));
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 0x20uLL);
}
