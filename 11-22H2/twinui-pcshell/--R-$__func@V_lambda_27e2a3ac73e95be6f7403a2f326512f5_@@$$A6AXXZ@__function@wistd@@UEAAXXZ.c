/*
 * XREFs of ??R?$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEAAXXZ @ 0x18050D030
 * Callers:
 *     <none>
 * Callees:
 *     ??$as@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U123@$0A@@impl@winrt@@YA?AU?$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@1@PEAUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@Z @ 0x18050ACAC (--$as@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U123@$0A@@impl@winrt@@YA-AU-$com_p.c)
 *     ?UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ @ 0x18051BB78 (-UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ.c)
 *     ?get@?$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEBA@XZ @ 0x18051D054 (-get@-$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@winrt@@QEBA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wistd::__function::__func<_lambda_27e2a3ac73e95be6f7403a2f326512f5_,void (void)>::operator()(
        __int64 a1)
{
  volatile signed __int64 *v1; // [rsp+30h] [rbp+8h] BYREF
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *v2; // [rsp+38h] [rbp+10h] BYREF

  winrt::weak_ref<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::get(a1 + 8, &v1);
  if ( v1 )
  {
    winrt::impl::as<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,0>(
      (__int64 *)&v2,
      v1);
    SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateOrganizationSetting(v2);
    if ( v2 )
      winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v2);
  }
  if ( v1 )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v1);
}
