/*
 * XREFs of ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1802E8D84
 * Callers:
 *     ?GetWindowInformation@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUTaskGroupWindowInformation@34567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180647E94 (-GetWindowInformation@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt.c)
 *     ?PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z @ 0x18065BAF0 (-PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z.c)
 *     ?FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXURect@Foundation@67@@Z @ 0x18068F09C (-FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?GetHostWindow@XamlAltTabViewHost@@AEAA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x180763C44 (-GetHostWindow@XamlAltTabViewHost@@AEAA-AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal.c)
 *     ?PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18077509C (-PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x180776AD0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
        __int64 **a1,
        __int128 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = *v2;
  v5 = *a2;
  result = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v3 + 56))(v2, &v5);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
