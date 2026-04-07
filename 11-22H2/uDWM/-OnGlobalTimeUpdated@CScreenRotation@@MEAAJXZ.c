/*
 * XREFs of ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800D7A00
 * Callers:
 *     <none>
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18004159C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800D7218 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D75BC (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D7AB4 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D80E4 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 */

__int64 __fastcall CScreenRotation::OnGlobalTimeUpdated(CScreenRotation *this)
{
  __int64 v1; // rax
  int v3; // ebx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // eax

  v1 = *((_QWORD *)this + 38);
  v3 = 0;
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    v4 = *((_DWORD *)this + 78);
    CScreenRotation::CleanupTimeline(this);
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
    if ( v4 == 1 )
    {
      v3 = CScreenRotation::PreDelayExpired(this);
      if ( v3 < 0 )
      {
        v7 = 449;
LABEL_8:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v7);
        CScreenRotation::Stop(this, 0, 0);
      }
    }
    else
    {
      v3 = CScreenRotation::MidDelayExpired(this, v5, v6);
      if ( v3 < 0 )
      {
        v7 = 455;
        goto LABEL_8;
      }
    }
  }
  return (unsigned int)v3;
}
