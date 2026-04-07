/*
 * XREFs of ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x1800415F4
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18000E188 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x18000E950 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18004159C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     wil::details::lambda_call__lambda_836492bf0d708d37d167f858654aafdb___::_lambda_call__lambda_836492bf0d708d37d167f858654aafdb___ @ 0x1800AC444 (wil--details--lambda_call__lambda_836492bf0d708d37d167f858654aafdb___--_lambda_call__lambda_8364.c)
 * Callees:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180041634 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x1800417C0 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x180041804 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 */

void __fastcall CAnimationScheduler::_CleanupTransition(CAnimationScheduler *this)
{
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  if ( !*((_DWORD *)this + 10) )
  {
    CTransitionVisualController::CleanupTransition(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 24));
    CWindowPropertyTracker::StopTrackingAllWindows((CAnimationScheduler *)((char *)this + 48));
  }
}
