/*
 * XREFs of ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@UEAAKXZ @ 0x1800D7290
 * Callers:
 *     ?Release@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@WBA@EAAKXZ @ 0x1802AC2B0 (-Release@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Ui.c)
 *     ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WBI@EAAKXZ @ 0x1802AC2D0 (-Release@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U134_ea_1802AC2D0.c)
 *     ?Release@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@WCA@EAAKXZ @ 0x1802AC2F0 (-Release@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@win_ea_1802AC2F0.c)
 *     ?Release@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@W7EAAKXZ @ 0x1802ACD30 (-Release@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingRelease(a1 + 48);
}
