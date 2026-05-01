/*
 * XREFs of ?QueryInterface@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9590
 * Callers:
 *     ?QueryInterface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ABFD0 (-QueryInterface@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U134.c)
 *     ?QueryInterface@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ABFF0 (-QueryInterface@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@_ea_1802ABFF0.c)
 *     ?QueryInterface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC010 (-QueryInterface@-$implements@UDashboardManager@implementation@Shell@Internal@Window_ea_1802AC010.c)
 *     ?QueryInterface@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AC030 (-QueryInterface@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@_ea_1802AC030.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,winrt::Windows::Internal::Shell::DiscoverabilityManager,IApplicationViewChangeListener,IWindowSnappingEvents,winrt::immersive_shell_component>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(
           (volatile signed __int64 *)(a1 + 56),
           a2,
           a3);
}
