/*
 * XREFs of ??$as@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U123@$0A@@impl@winrt@@YA?AU?$com_ptr@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@1@PEAUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@Z @ 0x18050ACAC
 * Callers:
 *     ??R?$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEAAXXZ @ 0x18050D030 (--R-$__func@V_lambda_27e2a3ac73e95be6f7403a2f326512f5_@@$$A6AXXZ@__function@wistd@@UEAAXXZ.c)
 *     ??R?$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK@Z @ 0x18050D1A0 (--R-$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXAEBK.c)
 * Callees:
 *     ?query_interface@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180195F78 (-query_interface@-$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITap.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 *__fastcall winrt::impl::as<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,0>(
        __int64 *a1,
        volatile signed __int64 *a2)
{
  signed int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::query_interface(
           a2,
           winrt::impl::guid_v<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>,
           &v5);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
    *a1 = (v5 - 16) & -(__int64)(v5 != 0);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
