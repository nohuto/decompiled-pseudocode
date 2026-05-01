/*
 * XREFs of ?QueryInterface@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6C70
 * Callers:
 *     ?QueryInterface@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ACA10 (-QueryInterface@-$implements@UImeContextMenuManager@implementation@Shell@Internal@W_ea_1802ACA10.c)
 *     ?QueryInterface@?$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicationViewChangeListener@@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ACA30 (-QueryInterface@-$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApp.c)
 *     ?QueryInterface@?$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicationViewChangeListener@@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ACA50 (-QueryInterface@-$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component_ea_1802ACA50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,winrt::immersive_shell_component,IImeContextMenuExperienceManager>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 40);
}
