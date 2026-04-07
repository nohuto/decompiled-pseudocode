/*
 * XREFs of ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000DF6C
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000D950 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18000DABC (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 * Callees:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18000DFFC (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E58C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000FBF0 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D9D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboard(CAnimationScheduler *this, struct CStoryboard *a2)
{
  int v3; // edi
  int v4; // r9d
  unsigned int v6; // r8d

  v3 = CTransitionVisualController::MorphForStoryboard(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
         a2);
  if ( v3 < 0 )
  {
    v4 = v3;
    v6 = 954;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801286FC, 1u, v4, v6, 0LL);
    CStoryboard::Abandon(a2);
    return (unsigned int)v3;
  }
  v3 = CTransitionVisualController::RemoveTargetsForStoryboard(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
         a2,
         0,
         0x10000000u);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 957;
    goto LABEL_8;
  }
  if ( *((_DWORD *)a2 + 6) <= 1u )
  {
    *((_DWORD *)a2 + 6) = 2;
    CStoryboard::_LogStoryboardEvent(a2);
  }
  return (unsigned int)v3;
}
