/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18012B820
 * Callers:
 *     ??$_Assign_cast@AEAU?$pair@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18012B774 (--$_Assign_cast@AEAU-$pair@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@st.c)
 *     _std::list_std::pair_enum_winrt::WindowsUdk::UI::Shell::ShellView_const__winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__std::allocator_std::pair_enum_winrt::WindowsUdk::UI::Shell::ShellView_const__winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_____::_Assign_cast_std::pair_enum_winrt::WindowsUdk::UI::Shell::ShellView_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator__&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_winrt::WindowsUdk::UI::Shell::ShellView_const__winrt::WindowsUdk::UI::Shell::ShellViewCoordinator______std::_Iterator_base0____::_1_::dtor$0 @ 0x1802C194F (_std--list_std--pair_enum_winrt--WindowsUdk--UI--Shell--ShellView_const__winrt--WindowsUdk--UI--.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi

  if ( a1[1] )
  {
    *(_QWORD *)(a1[3] + 8LL) = 0LL;
    result = (_QWORD *)a1[2];
    *result = 0LL;
    v2 = (_QWORD *)a1[3];
    while ( v2 )
    {
      v3 = v2;
      v2 = (_QWORD *)*v2;
      if ( v3[3] )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(v3 + 3));
      result = (_QWORD *)std::_Deallocate<16,0>(v3, 32LL);
    }
  }
  return result;
}
