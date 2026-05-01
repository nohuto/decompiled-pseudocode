/*
 * XREFs of ??R?$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK@Z @ 0x18050D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$as@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U123@$0A@@impl@winrt@@YA?AU?$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@1@PEAUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@Z @ 0x18050ACAC (--$as@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U123@$0A@@impl@winrt@@YA-AU-$com_p.c)
 *     ?UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x18051BD50 (-UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSetti.c)
 *     ?get@?$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEBA@XZ @ 0x18051D054 (-get@-$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEBA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wistd::__function::__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>::operator()(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  volatile signed __int64 *v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  result = winrt::weak_ref<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::get(a1 + 8, &v3);
  if ( v3 )
  {
    winrt::impl::as<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,0>(
      &v4,
      v3);
    v2 = v4;
    result = SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateUserSetting(v4);
    if ( v2 )
      result = winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v4);
  }
  if ( v3 )
    return winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v3);
  return result;
}
