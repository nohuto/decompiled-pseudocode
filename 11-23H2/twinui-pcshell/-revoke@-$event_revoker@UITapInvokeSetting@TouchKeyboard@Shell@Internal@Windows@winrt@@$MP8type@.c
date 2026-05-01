/*
 * XREFs of ?revoke@?$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAXXZ @ 0x18051D5C0
 * Callers:
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18050C644 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?get@?$weak_ref@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18051CFFC (-get@-$weak_ref@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@3@@Z @ 0x18051D638 (-revoke_impl@-$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8.c)
 */

__int64 __fastcall _revoke___event_revoker_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt___MP8type___abi_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAAXXZ(
        __int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v1 = *a1;
  v5 = 0LL;
  *a1 = 0LL;
  v6 = v1;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v5);
  v3 = winrt::weak_ref<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::get(&v6, &v7);
  result = _revoke_impl___event_revoker_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt___MP8type___abi_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_3__Z(
             a1,
             v3);
  if ( v1 )
    result = winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v6);
  if ( v5 )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v5);
  return result;
}
