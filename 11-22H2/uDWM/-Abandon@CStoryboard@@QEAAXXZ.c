/*
 * XREFs of ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D9D50
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000D750 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000D950 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18000DABC (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x18000DBC0 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000DF6C (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000E820 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18000ECB8 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F238 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x18000F9E0 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18004159C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x1800AC4EC (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x1800DB430 (-OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800DBDB8 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 *     _lambda_95d8fb2efa1b08d320c8654ffeeb34da_::operator() @ 0x1800EA504 (_lambda_95d8fb2efa1b08d320c8654ffeeb34da_--operator().c)
 * Callees:
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x18000FB68 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800AA8C8 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800DC334 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStoryboard::Abandon(struct _GUID *this)
{
  struct _GUID v2; // xmm0
  __int64 v3; // rax
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v5; // [rsp+30h] [rbp-28h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *(_DWORD *)this[1].Data4 != 4 )
  {
    CStoryboard::_NotifyStoryboardState((__int64)this, 2);
    CStoryboard::ScheduleStopAnimation((CStoryboard *)this);
    v2 = this[3];
    v5 = v2;
    v3 = *(_QWORD *)&v2.Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&v2.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v3 = *(_QWORD *)v5.Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( v3 )
    {
      v5 = v2;
      CAnimationClockCoordinator::OnSetAnimationClockTime(
        *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 21),
        &v5,
        1,
        0LL);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
}
