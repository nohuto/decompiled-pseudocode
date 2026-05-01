/*
 * XREFs of ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D2E9A
 * Callers:
 *     ?UnsubscribeFromServices@InteractionTracker@SnapInteraction@@QEAAXXZ @ 0x180144DD8 (-UnsubscribeFromServices@InteractionTracker@SnapInteraction@@QEAAXXZ.c)
 *     ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1802E98D6 (-CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1802E992A (-CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180400338 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 *     ?OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x1804032D0 (-OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Window.c)
 *     ?StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180407D28 (-StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18040878C (-StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180656F78 (-StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180665658 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x18066FF94 (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 *     ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x18067A5CC (-DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z.c)
 *     ?StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180776A30 (-StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1807779D0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ?DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z @ 0x1807894FC (-DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
