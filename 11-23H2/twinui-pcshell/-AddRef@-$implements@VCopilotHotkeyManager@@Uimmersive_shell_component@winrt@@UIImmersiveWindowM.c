/*
 * XREFs of ?AddRef@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@UEAAKXZ @ 0x1802505E0
 * Callers:
 *     ?AddRef@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WBA@EAAKXZ @ 0x1802AC1F0 (-AddRef@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManage.c)
 *     ?AddRef@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@WBI@EAAKXZ @ 0x1802AC210 (-AddRef@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImm_ea_1802AC210.c)
 *     ?AddRef@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WCA@EAAKXZ @ 0x1802AC230 (-AddRef@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U1345_ea_1802AC230.c)
 *     ?AddRef@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@W7EAAKXZ @ 0x1802ACCF0 (-AddRef@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImm_ea_1802ACCF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::AddRef(a1 + 48);
}
