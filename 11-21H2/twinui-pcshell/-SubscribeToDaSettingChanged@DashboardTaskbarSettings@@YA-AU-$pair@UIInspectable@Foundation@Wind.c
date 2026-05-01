/*
 * XREFs of ?SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA?AU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@std@@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@@Z @ 0x1801D0AD4
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801805B0 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 *     ??0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ @ 0x1801D063C (--0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ.c)
 *     ?SettingChanged@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@3@@Z @ 0x1801D09B0 (-SettingChanged@-$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar.c)
 */

// Hidden C++ exception states: #wind=1
winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *__fastcall DashboardTaskbarSettings::SubscribeToDaSettingChanged(
        winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *this,
        _QWORD *a2)
{
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *result; // rax
  struct IUnknown v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  try
  {
    winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting::DesktopTaskbarDaSetting(&v7);
    winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>::SettingChanged(
      &v7,
      &v8,
      a2);
    winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
      this,
      (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v7);
    *((_QWORD *)this + 1) = v8;
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v7);
    result = this;
  }
  catch ( ... )
  {
    v7.lpVtbl = 0LL;
    winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
      this,
      (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v7);
    *((_QWORD *)this + 1) = 0LL;
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v7);
    return this;
  }
  return result;
}
