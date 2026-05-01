/*
 * XREFs of ?find_interface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D6700
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIThemeCoordinator@Themes@UI@Internal@45@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SAPEAXPEBUThemeCoordinator@implementation@Themes@UI@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D99D0 (--$find@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uiid_finder@impl@7@@-.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a2;
  if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IObjectWithSite>) )
  {
    v6 = v3 + 32;
    return v6 & -(__int64)(v3 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(v2, &winrt::impl::guid_v<IServiceProvider>) )
  {
    v6 = v3 + 40;
    return v6 & -(__int64)(v3 != 0);
  }
  return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::impl::iid_finder>(
           v3,
           &v7);
}
