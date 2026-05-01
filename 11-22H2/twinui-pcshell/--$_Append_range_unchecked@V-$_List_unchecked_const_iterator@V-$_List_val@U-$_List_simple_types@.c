/*
 * XREFs of ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18012BAF4
 * Callers:
 *     ??$_Assign_cast@AEAU?$pair@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18012B774 (--$_Assign_cast@AEAU-$pair@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@st.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>>,std::_Iterator_base0>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  _QWORD *v6; // r15
  _DWORD *v7; // rsi

  if ( a2 != a3 )
  {
    v4 = a2;
    v6 = a1 + 2;
    if ( a1[1] )
      goto LABEL_5;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v7[4] = *((_DWORD *)v4 + 4);
    *((_QWORD *)v7 + 3) = v4[3];
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(v7 + 6));
    a1[3] = v7;
    while ( 1 )
    {
      *v6 = v7;
      ++a1[1];
      v4 = (__int64 *)*v4;
LABEL_5:
      if ( v4 == a3 )
        break;
      v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
      v7[4] = *((_DWORD *)v4 + 4);
      *((_QWORD *)v7 + 3) = v4[3];
      winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(v7 + 6));
      *(_QWORD *)*v6 = v7;
      *((_QWORD *)v7 + 1) = *v6;
    }
  }
}
