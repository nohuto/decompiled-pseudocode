/*
 * XREFs of ?UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Windows@winrt@@Uevent_token@5@@Z @ 0x1801D0B94
 * Callers:
 *     ?unsubscribe_from_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801803D0 (-unsubscribe_from_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?SettingChanged@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBAXAEBUevent_token@3@@Z @ 0x1801D0A58 (-SettingChanged@-$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSe_ea_1801D0A58.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DashboardTaskbarSettings::UnsubscribeFromDaSettingChanged(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD),
        __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, void *, _QWORD); // rcx
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *a1;
  v3 = 0LL;
  if ( v2 )
  {
    (**v2)(v2, &winrt::impl::guid_v<winrt::SystemSettings::Desktop::Taskbar::IDesktopTaskbarDaSetting>, &v3);
    if ( v3 )
      winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>::SettingChanged(
        &v3,
        &v4);
  }
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v3);
}
