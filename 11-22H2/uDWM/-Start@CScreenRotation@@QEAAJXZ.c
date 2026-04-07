/*
 * XREFs of ?Start@CScreenRotation@@QEAAJXZ @ 0x1800D8070
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x18010A860 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18004159C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800D7218 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800D7E7C (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 */

__int64 __fastcall CScreenRotation::Start(CScreenRotation *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  *((_BYTE *)this + 336) = 1;
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
  v2 = CScreenRotation::SetupTimeline((__int64)this, 1);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x11Eu);
    CScreenRotation::CleanupTimeline(this);
  }
  return v3;
}
