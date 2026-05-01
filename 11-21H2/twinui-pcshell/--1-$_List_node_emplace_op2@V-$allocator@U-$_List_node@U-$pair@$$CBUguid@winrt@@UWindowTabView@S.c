/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001BEF8
 * Callers:
 *     ??$emplace@Uguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@2@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@std@@_N@1@$$QEAUguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@4@@Z @ 0x18001BDA8 (--$emplace@Uguid@winrt@@AEBUWindowTabView@Shell@UI@Internal@Windows@2@@-$_Hash@V-$_Umap_traits@U.c)
 *     _std::_Hash_std::_Umap_traits_winrt::guid_winrt::Windows::Internal::UI::Shell::WindowTabView_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__winrt::Windows::Internal::UI::Shell::WindowTabView____0___::emplace_winrt::guid_winrt::Windows::Internal::UI::Shell::WindowTabView_const_&__::_1_::dtor$0 @ 0x18021447B (_std--_Hash_std--_Umap_traits_winrt--guid_winrt--Windows--Internal--UI--Shell--Wind_ea_18021447B.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 32) )
    {
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(v2 + 32));
      v2 = *(_QWORD *)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>(v2, 40LL);
  }
}
