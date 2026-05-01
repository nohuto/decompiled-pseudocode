/*
 * XREFs of ?IsCloaked@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800732E0
 * Callers:
 *     ?BeginInvokeAnimation@TaskViewFrame@@UEAAXXZ @ 0x18007AD20 (-BeginInvokeAnimation@TaskViewFrame@@UEAAXXZ.c)
 *     ?CreateXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18065AFA8 (-CreateXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     ?DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18065B070 (-DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     ?PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z @ 0x18065BAF0 (-PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z.c)
 *     ?FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXURect@Foundation@67@@Z @ 0x18068F09C (-FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x18068FA04 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     ?OnClosed@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x180690630 (-OnClosed@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEB.c)
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x180763A14 (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 *     ?v_DismissView@XamlAltTabViewHost@@MEAAXXZ @ 0x1807675F0 (-v_DismissView@XamlAltTabViewHost@@MEAAXXZ.c)
 *     ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x18076EC60 (-ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ.c)
 *     ?InitializeXamlIsland@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180774694 (-InitializeXamlIsland@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x180776AD0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 *     ?Cloak@TaskViewFrame@@UEAAJ_N@Z @ 0x180786530 (-Cloak@TaskViewFrame@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsCloaked(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 104LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
