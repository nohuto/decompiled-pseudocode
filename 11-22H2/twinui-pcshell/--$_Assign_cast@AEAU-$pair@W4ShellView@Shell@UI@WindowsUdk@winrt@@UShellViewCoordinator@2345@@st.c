/*
 * XREFs of ??$_Assign_cast@AEAU?$pair@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18012B774
 * Callers:
 *     ?CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@CA?AU134567@AEBUShellAnimationCoordinator@34567@AEBV?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@@Z @ 0x18012B520 (-CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Sh.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18012B820 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUd.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18012BAF4 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall std::list<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>::_Assign_cast<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  _QWORD *v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rdi
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  _QWORD *v19; // [rsp+30h] [rbp-18h]
  __int64 v20; // [rsp+38h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = *(_QWORD **)a1;
  v8 = **(_QWORD ***)a1;
  while ( 1 )
  {
    if ( v8 == v7 )
    {
      v17 = a1;
      v18 = 0LL;
      std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>>,std::_Iterator_base0>>(
        &v17,
        a2,
        a3);
      v9 = *(_QWORD **)a1;
      v10 = v18;
      if ( v18 )
      {
        v11 = (_QWORD *)v9[1];
        v12 = v20;
        *(_QWORD *)(v20 + 8) = v11;
        *v11 = v12;
        v13 = v19;
        *v19 = v9;
        v9[1] = v13;
        *(_QWORD *)(a1 + 8) += v10;
        v18 = 0LL;
      }
      return (_UNKNOWN **)std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>(
                            &v17,
                            v9);
    }
    if ( a2 == a3 )
      break;
    *((_DWORD *)v8 + 4) = *((_DWORD *)a2 + 4);
    result = (_UNKNOWN **)winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(v8 + 3));
    v8 = (_QWORD *)*v8;
    a2 = (__int64 *)*a2;
  }
  if ( v8 != v7 )
  {
    v14 = (_QWORD *)v8[1];
    *v14 = v7;
    v7[1] = v14;
    v15 = 0LL;
    do
    {
      v16 = (_QWORD *)*v8;
      if ( v8[3] )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(v8 + 3));
      result = (_UNKNOWN **)std::_Deallocate<16,0>(v8, 32LL);
      v8 = v16;
      ++v15;
    }
    while ( v16 != v7 );
    *(_QWORD *)(a1 + 8) -= v15;
  }
  return result;
}
