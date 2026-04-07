/*
 * XREFs of ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800A7968
 * Callers:
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x1800A778C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800A7A30 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D4D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800DB27C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x1800ED6AC (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800EDD10 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboard(CAnimationScheduler *this, struct CStoryboard *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // r9d
  unsigned int v6; // r8d

  v3 = CTransitionVisualController::MorphForStoryboard(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = v3;
    v6 = 937;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180122184, 1LL, v5, v6);
    CStoryboard::Abandon(a2);
    return (unsigned int)v4;
  }
  v4 = CTransitionVisualController::RemoveTargetsForStoryboard(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
         a2,
         0,
         0x10000000u);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 940;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 6) <= 1u )
  {
    *((_DWORD *)a2 + 6) = 2;
    CStoryboard::_LogStoryboardEvent(a2);
  }
  return (unsigned int)v4;
}
