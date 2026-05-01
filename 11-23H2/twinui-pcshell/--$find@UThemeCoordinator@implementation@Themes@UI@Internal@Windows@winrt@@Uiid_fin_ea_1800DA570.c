/*
 * XREFs of ??$find@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SAPEAXPEBUThemeCoordinator@implementation@Themes@UI@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800DA570
 * Callers:
 *     ??$find@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIThemeCoordinator@Themes@UI@Internal@45@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SAPEAXPEBUThemeCoordinator@implementation@Themes@UI@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D99D0 (--$find@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uiid_finder@impl@7@@-.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r9
  _QWORD *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v8; // rax

  if ( !winrt::operator==(*a2, winrt::impl::guid_v<IImmersiveMonitorNotification>) )
  {
    if ( winrt::operator==(v2, winrt::impl::guid_v<IImmersiveSessionIdleNotification>) )
    {
      v8 = v5 + 8;
    }
    else
    {
      if ( !winrt::operator==(v4, winrt::impl::guid_v<IImmersiveWindowMessageNotification>) )
        return v6;
      v8 = v5 + 16;
    }
    return v8 & -(__int64)(v5 != 0);
  }
  return v3;
}
