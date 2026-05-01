/*
 * XREFs of ??$find@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIThemeCoordinator@Themes@UI@Internal@45@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SAPEAXPEBUThemeCoordinator@implementation@Themes@UI@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D99D0
 * Callers:
 *     ?find_interface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D6700 (-find_interface@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SAPEAXPEBUThemeCoordinator@implementation@Themes@UI@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800DA570 (--$find@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uiid_fin_ea_1800DA570.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v9; // rax

  if ( !winrt::operator==(*a2, &winrt::impl::guid_v<IImmersiveShellComponent>) )
  {
    if ( winrt::operator==(v2, &winrt::impl::guid_v<IInspectable>) )
    {
      v9 = v5 + 56;
    }
    else
    {
      if ( !winrt::operator==(v4, winrt::impl::guid_v<winrt::Windows::Internal::UI::Themes::IThemeCoordinator>) )
        return winrt::impl::interface_list<IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::impl::iid_finder>(
                 v5,
                 v6);
      v9 = v5 + 24;
    }
    return v9 & -(__int64)(v5 != 0);
  }
  return (v3 + 48) & -(__int64)(v3 != 0);
}
