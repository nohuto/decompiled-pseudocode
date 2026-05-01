/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18072796C
 * Callers:
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x180726F3C (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$vector@UWindow.c)
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_std::vector_winrt::Windows::UI::WindowId_std::allocator_winrt::Windows::UI::WindowId____std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__std::vector_winrt::Windows::UI::WindowId_std::allocator_winrt::Windows::UI::WindowId________0___::_Try_emplace_winrt::hstring_const_&__::_1_::dtor$0 @ 0x1807270BD (_std--_Hash_std--_Umap_traits_winrt--hstring_std--vector_winrt--Windows--UI--WindowId_std--alloc.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rcx
  void *v4; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(void **)(v1 + 24);
    if ( v3 )
    {
      std::_Deallocate<16,0>(v3, (*(_QWORD *)(v1 + 40) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)(v1 + 24) = 0LL;
      *(_QWORD *)(v1 + 32) = 0LL;
      *(_QWORD *)(v1 + 40) = 0LL;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(v1 + 16));
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 0x30uLL);
}
