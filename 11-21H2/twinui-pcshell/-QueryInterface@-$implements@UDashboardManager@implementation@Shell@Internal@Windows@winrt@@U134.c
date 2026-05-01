/*
 * XREFs of ?QueryInterface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8560
 * Callers:
 *     ?QueryInterface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020FCD0 (-QueryInterface@-$implements@UDashboardManager@implementation@Shell@Internal@Window_ea_18020FCD0.c)
 *     ?QueryInterface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020FCF0 (-QueryInterface@-$implements@UDashboardManager@implementation@Shell@Internal@Window_ea_18020FCF0.c)
 *     ?QueryInterface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020FD10 (-QueryInterface@-$implements@UDashboardManager@implementation@Shell@Internal@Window_ea_18020FD10.c)
 *     ?QueryInterface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020FD30 (-QueryInterface@-$implements@UDashboardManager@implementation@Shell@Internal@Window_ea_18020FD30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::DashboardManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 56);
}
