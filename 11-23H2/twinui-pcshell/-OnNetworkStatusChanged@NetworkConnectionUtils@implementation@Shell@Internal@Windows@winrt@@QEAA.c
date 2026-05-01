/*
 * XREFs of ?OnNetworkStatusChanged@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@@Z @ 0x180283F40
 * Callers:
 *     <none>
 * Callees:
 *     ??$?R$$T$$T@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$T0@Z @ 0x18047E564 (--$-R$$T$$T@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::OnNetworkStatusChanged(
        winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *this,
        const struct IInspectable *a2)
{
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::operator()<std::nullptr_t,std::nullptr_t>(
    (char *)this + 24,
    a2);
}
