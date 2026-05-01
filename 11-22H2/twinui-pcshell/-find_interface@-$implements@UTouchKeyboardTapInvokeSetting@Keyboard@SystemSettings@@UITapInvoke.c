/*
 * XREFs of ?find_interface@?$implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800AB750
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8

  if ( (unsigned __int8)winrt::operator==(
                          a2,
                          &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>) )
  {
    v5 = v3 + 16;
  }
  else if ( (unsigned __int8)winrt::operator==(
                               v2,
                               &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>) )
  {
    v5 = v3 + 24;
  }
  else
  {
    if ( !(unsigned __int8)winrt::operator==(
                             v4,
                             &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>) )
      return v6;
    v5 = v3 + 32;
  }
  return v5 & -(__int64)(v3 != 0);
}
