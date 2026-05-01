/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18072FD88
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@1@@Z @ 0x18072FB00 (--$emplace@AEBU-$pair@$$CBUhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@@std@@@-$_Hash@V-$_Uma.c)
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_winrt::com_ptr_IVirtualDesktop__std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__winrt::com_ptr_IVirtualDesktop______0___::emplace_std::pair_winrt::hstring_const__winrt::com_ptr_IVirtualDesktop____const_&__::_1_::dtor$0 @ 0x18072FC0D (_std--_Hash_std--_Umap_traits_winrt--hstring_winrt--com_ptr_IVirtualDesktop__std--_Uhash_compare.c)
 *     ??$emplace@AEBUhstring@winrt@@AEBU?$com_ptr@UIVirtualDesktop@@@2@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@std@@@std@@@std@@_N@1@AEBUhstring@winrt@@AEBU?$com_ptr@UIVirtualDesktop@@@4@@Z @ 0x18072FC20 (--$emplace@AEBUhstring@winrt@@AEBU-$com_ptr@UIVirtualDesktop@@@2@@-$_Hash@V-$_Umap_traits@Uhstri.c)
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_winrt::com_ptr_IVirtualDesktop__std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__winrt::com_ptr_IVirtualDesktop______0___::emplace_winrt::hstring_const_&_winrt::com_ptr_IVirtualDesktop__const_&__::_1_::dtor$0 @ 0x18072FD3E (_std--_Hash_std--_Umap_traits_winrt--hstring_winrt--com_ptr_IVirtualDesktop__std--__ea_18072FD3E.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 24) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v1 + 24));
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(v1 + 16));
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 0x20uLL);
}
