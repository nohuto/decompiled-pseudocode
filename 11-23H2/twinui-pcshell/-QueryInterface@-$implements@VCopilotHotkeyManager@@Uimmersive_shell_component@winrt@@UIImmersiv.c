/*
 * XREFs of ?QueryInterface@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6E90
 * Callers:
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC250 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIP.c)
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC270 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winr_ea_1802AC270.c)
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC290 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winr_ea_1802AC290.c)
 *     ?QueryInterface@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ACD10 (-QueryInterface@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winr_ea_1802ACD10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 48);
}
