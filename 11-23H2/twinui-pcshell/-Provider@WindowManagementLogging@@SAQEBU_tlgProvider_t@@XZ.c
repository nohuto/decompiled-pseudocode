/*
 * XREFs of ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1802D2A56
 * Callers:
 *     ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180228AD0 (-StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV-$tip_test@V-$merged_data@U_tip_SnapFlyoutSho.c)
 *     ?SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect_@SnapFlyoutTelemetry@@QEBAXAEBURect@Foundation@Windows@winrt@@@Z @ 0x18022D504 (-SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect_@SnapFlyoutTelemetry@@QEBAXAEBURect@Founda.c)
 *     ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x180604C24 (-Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDe.c)
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1806623F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z @ 0x18067AF34 (-InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@P.c)
 *     ?OnFlyoutInstanceReady@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18067B910 (-OnFlyoutInstanceReady@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 *     ?OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z @ 0x18067BAA0 (-OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18067BCE0 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x18067D280 (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 *     _lambda_eed24a43ab320b602e73bc35d7541654_::operator() @ 0x18068AE5C (_lambda_eed24a43ab320b602e73bc35d7541654_--operator().c)
 *     ?EndWindowDrag@WindowDragInputProvider@@QEAAXXZ @ 0x18068B044 (-EndWindowDrag@WindowDragInputProvider@@QEAAXXZ.c)
 *     ?RegisterForCustomDockTargetMessages@WindowDragInputProvider@@AEAAXXZ @ 0x18068BEAC (-RegisterForCustomDockTargetMessages@WindowDragInputProvider@@AEAAXXZ.c)
 *     ?Hide@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18068F820 (-Hide@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?Show@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180691490 (-Show@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18069161C (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180691BA0 (-TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076488C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

const struct _tlgProvider_t *__fastcall WindowManagementLogging::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)wil::details::static_lazy<WindowManagementLogging>::get(
                                          a1,
                                          (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
}
