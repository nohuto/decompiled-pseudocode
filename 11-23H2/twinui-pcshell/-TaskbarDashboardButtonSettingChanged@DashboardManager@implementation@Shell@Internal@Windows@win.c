/*
 * XREFs of ?TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180698468
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_3e6690ebfd5912eedaaffd7303d678cc___::Invoke @ 0x18023EA70 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18023EA70.c)
 * Callees:
 *     ?OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4TaskbarSettingChangedEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x180240490 (-OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfi.c)
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1806994E4 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::TaskbarDashboardButtonSettingChanged(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  bool DashboardButtonEnabled; // al
  char v3; // [rsp+38h] [rbp+10h] BYREF

  DashboardButtonEnabled = DashboardTaskbarSettings::GetDashboardButtonEnabled(this);
  winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged(
    (__int64)this,
    &v3,
    !DashboardButtonEnabled);
}
