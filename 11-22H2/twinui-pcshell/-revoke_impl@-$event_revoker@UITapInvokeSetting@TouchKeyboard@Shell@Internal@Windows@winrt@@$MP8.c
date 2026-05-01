/*
 * XREFs of ?revoke_impl@?$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@3@@Z @ 0x18051D638
 * Callers:
 *     ??1?$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x1801A1054 (--1-$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@-$abi.c)
 *     ?revoke@?$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAAXXZ @ 0x18051D5C0 (-revoke@-$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BFA@AA @ 0x1802A0D70 (--_9type@-$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BFA.c)
 */

void __fastcall _revoke_impl___event_revoker_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt___MP8type___abi_UITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUITapInvokeSetting_TouchKeyboard_Shell_Internal_Windows_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
     winrt::impl::abi<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,void>::type::`vcall'{80,{flat}}(*a2);
  if ( *a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
}
