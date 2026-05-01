/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800FA3F4
 * Callers:
 *     ?GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUDeferral@Foundation@Windows@6@XZ @ 0x1800F4A20 (-GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA-AUDeferr.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___::Release @ 0x1800F9FB0 (winrt--impl--implements_delegate_winrt--Windows--Foundation--DeferralCompletedHandler__lambda_e6.c)
 *     _lambda_e6a671098150e4fafb7216c3a0d06112_::__lambda_e6a671098150e4fafb7216c3a0d06112_ @ 0x18039FE38 (_lambda_e6a671098150e4fafb7216c3a0d06112_--__lambda_e6a671098150e4fafb7216c3a0d06112_.c)
 *     ??1?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ @ 0x18039FE54 (--1-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::Release(v2);
}
