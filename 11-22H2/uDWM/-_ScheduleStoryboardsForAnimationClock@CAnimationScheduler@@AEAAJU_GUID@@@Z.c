/*
 * XREFs of ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000D950
 * Callers:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x18000DBC0 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000E820 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000CCB0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18000DABC (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000DB94 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000DF6C (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18000E188 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000FBF0 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002F440 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D9D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 *v6; // r8
  __int64 v7; // r9
  int v8; // r15d
  char v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  CAnimationScheduler *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  int started; // eax
  __int128 v19; // [rsp+30h] [rbp-48h]

  v3 = 0;
  v4 = 0LL;
  if ( !*((_DWORD *)this + 10) )
    return (unsigned int)v3;
  v6 = (__int64 *)*((_QWORD *)this + 2);
  v7 = *((unsigned int *)this + 10);
  do
  {
    if ( !*(_DWORD *)(*v6 + 24) && (!v4 || *(_DWORD *)(v4 + 64) < *(_DWORD *)(*v6 + 64)) )
      v4 = *v6;
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( v4 )
    v8 = *(_DWORD *)(v4 + 64);
  do
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v10);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v19 = *(_OWORD *)(v11 + 48);
    v12 = v19 - *(_QWORD *)&a2->Data1;
    if ( (_QWORD)v19 == *(_QWORD *)&a2->Data1 )
      v12 = *((_QWORD *)&v19 + 1) - *(_QWORD *)a2->Data4;
    if ( !v12 )
    {
      if ( v3 < 0 )
        goto LABEL_31;
      v13 = (CAnimationScheduler *)*(unsigned int *)(v11 + 24);
      if ( !(_DWORD)v13 || (_DWORD)v13 == 1 )
      {
        if ( *(_DWORD *)(v11 + 64) < v8 )
        {
          *(_DWORD *)(v11 + 24) = 1;
          CStoryboard::_LogStoryboardEvent((CStoryboard *)v11);
          v3 = 0;
          goto LABEL_19;
        }
        v3 = CAnimationScheduler::_ScheduleStoryboard(v13, (struct CStoryboard *)v11);
        if ( v3 >= 0 )
        {
          v9 = 1;
          CAnimationScheduler::_ScheduleBlockedStoryboards(this, *(_DWORD *)(v11 + 64));
          goto LABEL_19;
        }
LABEL_31:
        CStoryboard::Abandon((CStoryboard *)v11);
      }
    }
LABEL_19:
    CStoryboard::Release((CStoryboard *)v11);
    v10 = (unsigned int)(v10 + 1);
  }
  while ( (unsigned int)v10 < *((_DWORD *)this + 10) );
  if ( v3 >= 0 && v9 )
  {
    v16 = CTransitionVisualController::SetupZOrder(
            *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
            v14,
            v15);
    v3 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x284u, 0LL);
    }
    else
    {
      started = CAnimationScheduler::_ScheduleStartAnimations(this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x287u, 0LL);
      else
        CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
    }
  }
  return (unsigned int)v3;
}
