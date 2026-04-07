/*
 * XREFs of ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800D2D90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18003FA6C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800D25D4 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D295C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D2E34 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D3484 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 */

__int64 __fastcall CScreenRotation::OnGlobalTimeUpdated(CScreenRotation *this)
{
  __int64 v1; // rax
  int v2; // ebx
  int v4; // ebx
  unsigned int v5; // eax

  v1 = *((_QWORD *)this + 38);
  v2 = 0;
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    v4 = *((_DWORD *)this + 78);
    CScreenRotation::CleanupTimeline(this);
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22));
    if ( v4 == 1 )
    {
      v2 = CScreenRotation::PreDelayExpired(this);
      if ( v2 < 0 )
      {
        v5 = 452;
LABEL_8:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v5);
        CScreenRotation::Stop(this, 0, 0);
      }
    }
    else
    {
      v2 = CScreenRotation::MidDelayExpired(this);
      if ( v2 < 0 )
      {
        v5 = 458;
        goto LABEL_8;
      }
    }
  }
  return (unsigned int)v2;
}
