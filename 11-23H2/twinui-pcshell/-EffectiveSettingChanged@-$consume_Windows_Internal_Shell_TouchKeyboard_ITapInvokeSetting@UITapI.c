/*
 * XREFs of ?EffectiveSettingChanged@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@3@@Z @ 0x1801A1BC4
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A5144 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$from_com_ref@AEBUITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@?$weak_ref@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@winrt@@AEAAXAEBUITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@1@@Z @ 0x1801A1C44 (--$from_com_ref@AEBUITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@-$weak_ref@UI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::EffectiveSettingChanged(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*a1 + 72LL))(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v9;
  v10 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::from_com_ref<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting const &>(
    a2,
    a1);
  a2[1] = v7;
  return a2;
}
