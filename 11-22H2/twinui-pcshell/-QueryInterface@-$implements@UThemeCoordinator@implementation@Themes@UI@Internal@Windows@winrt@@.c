/*
 * XREFs of ?QueryInterface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D91F0
 * Callers:
 *     ?QueryInterface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC830 (-QueryInterface@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Wi_ea_1802AC830.c)
 *     ?QueryInterface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC850 (-QueryInterface@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Wi_ea_1802AC850.c)
 *     ?QueryInterface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC870 (-QueryInterface@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Wi_ea_1802AC870.c)
 *     ?QueryInterface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC890 (-QueryInterface@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Wi_ea_1802AC890.c)
 *     ?QueryInterface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC8B0 (-QueryInterface@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Wi_ea_1802AC8B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(
           (volatile signed __int64 *)(a1 + 64),
           a2,
           a3);
}
