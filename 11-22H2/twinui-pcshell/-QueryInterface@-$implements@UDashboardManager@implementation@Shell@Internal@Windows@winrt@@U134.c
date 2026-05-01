/*
 * XREFs of ?QueryInterface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ABFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::DashboardManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::implements<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,winrt::Windows::Internal::Shell::DiscoverabilityManager,IApplicationViewChangeListener,IWindowSnappingEvents,winrt::immersive_shell_component>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
