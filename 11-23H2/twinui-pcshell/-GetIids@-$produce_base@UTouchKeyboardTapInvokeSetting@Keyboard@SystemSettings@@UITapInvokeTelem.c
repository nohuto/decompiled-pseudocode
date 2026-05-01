/*
 * XREFs of ?GetIids@?$produce_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18023C280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,void>::GetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::NonDelegatingGetIids(
           (a1 - 24) & -(__int64)(a1 != 0),
           a2,
           a3);
}
