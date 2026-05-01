/*
 * XREFs of ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18038D934
 * Callers:
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18012D02C (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180174C24 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180194F7C (--1XamlLauncherState@@UEAA@XZ.c)
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x1801AA2A0 (--1TabletModePositioner@@UEAA@XZ.c)
 *     ??1PriorityBoostHelper@@UEAA@XZ @ 0x1801B091C (--1PriorityBoostHelper@@UEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18038CF44 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$D.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18038D008 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18038D0DC (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1804172CC (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x18041DC28 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x180429F5C (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180435284 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x18043DB7C (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x18045D870 (--1SearchAppExperienceManager@@UEAA@XZ.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x180466528 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x18047148C (--1MeetNowExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(PTP_TIMER pti)
{
  SetThreadpoolTimer(pti, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(pti, 1);
  CloseThreadpoolTimer(pti);
}
