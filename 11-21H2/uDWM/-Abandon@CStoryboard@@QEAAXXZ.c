/*
 * XREFs of ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D4D50
 * Callers:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18003FA6C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x1800A6BD4 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800A6CD0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800A6F48 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800A72C4 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x1800A778C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800A7968 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800A7A30 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x1800A7E3C (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x1800D7740 (-OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800D8150 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800D87EC (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x1800DA684 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     _lambda_95d8fb2efa1b08d320c8654ffeeb34da_::operator() @ 0x1800E9D38 (_lambda_95d8fb2efa1b08d320c8654ffeeb34da_--operator().c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A4F38 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800D8A4C (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x1800DB520 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
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
    CStoryboard::_NotifyStoryboardState(this, 2LL);
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
        *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 20),
        &v5,
        1u,
        0LL);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
}
