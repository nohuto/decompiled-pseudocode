/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18012BD74
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@?$_Hash@V?$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@1@@Z @ 0x18012BBD4 (--$emplace@AEBU-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std.c)
 *     _std::_Hash_std::_Umap_traits_enum_winrt::WindowsUdk::UI::Shell::ShellView_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_std::_Uhash_compare_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::hash_enum_winrt::WindowsUdk::UI::Shell::ShellView__std::equal_to_enum_winrt::WindowsUdk::UI::Shell::ShellView____std::allocator_std::pair_enum_winrt::WindowsUdk::UI::Shell::ShellView_const__winrt::WindowsUdk::UI::Shell::ShellViewCoordinator____0___::emplace_std::pair_enum_winrt::WindowsUdk::UI::Shell::ShellView_const__winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__const_&__::_1_::dtor$0 @ 0x1802C199B (_std--_Hash_std--_Umap_traits_enum_winrt--WindowsUdk--UI--Shell--ShellView_winrt--W_ea_1802C199B.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  winrt::Windows::Foundation::IUnknown *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = (winrt::Windows::Foundation::IUnknown *)(v2 + 24);
    if ( *(_QWORD *)v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 32LL);
}
