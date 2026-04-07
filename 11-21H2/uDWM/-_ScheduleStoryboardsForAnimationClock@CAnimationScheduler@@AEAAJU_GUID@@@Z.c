/*
 * XREFs of ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800A7A30
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800A6CD0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800A72C4 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800405C0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x1800A778C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800A7848 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800A7968 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D4D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x1800D86A0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800DB27C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800EE154 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int v3; // ebx
  CAnimationScheduler *v4; // rcx
  unsigned int v6; // r9d
  CAnimationScheduler **v7; // r8
  __int64 v8; // r10
  int v9; // r15d
  char v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  int started; // eax
  __int128 v17; // [rsp+30h] [rbp-48h]

  v3 = 0;
  v4 = 0LL;
  v6 = *((_DWORD *)this + 10);
  if ( v6 )
  {
    v7 = (CAnimationScheduler **)*((_QWORD *)this + 2);
    v8 = v6;
    do
    {
      if ( !*((_DWORD *)*v7 + 6) && (!v4 || *((_DWORD *)v4 + 16) < *((_DWORD *)*v7 + 16)) )
        v4 = *v7;
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  v9 = 0;
  if ( v4 )
    v9 = *((_DWORD *)v4 + 16);
  v10 = 0;
  v11 = 0LL;
  if ( v6 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v11);
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v17 = *(_OWORD *)(v12 + 48);
      v13 = v17 - *(_QWORD *)&a2->Data1;
      if ( (_QWORD)v17 == *(_QWORD *)&a2->Data1 )
        v13 = *((_QWORD *)&v17 + 1) - *(_QWORD *)a2->Data4;
      if ( v13 )
        goto LABEL_23;
      if ( v3 < 0 )
        break;
      if ( *(_DWORD *)(v12 + 24) <= 1u )
      {
        if ( *(_DWORD *)(v12 + 64) >= v9 )
        {
          v3 = CAnimationScheduler::_ScheduleStoryboard(v4, (struct CStoryboard *)v12);
          if ( v3 < 0 )
            break;
          v10 = 1;
          CAnimationScheduler::_ScheduleBlockedStoryboards(this, *(_DWORD *)(v12 + 64));
        }
        else
        {
          *(_DWORD *)(v12 + 24) = 1;
          CStoryboard::_LogStoryboardEvent((CStoryboard *)v12);
          v3 = 0;
        }
      }
LABEL_23:
      CStoryboard::Release((CStoryboard *)v12);
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *((_DWORD *)this + 10) )
      {
        if ( v3 >= 0 && v10 )
        {
          v14 = CTransitionVisualController::SetupZOrder(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                         + 23));
          v3 = v14;
          if ( v14 >= 0 )
          {
            started = CAnimationScheduler::_ScheduleStartAnimations(this);
            v3 = started;
            if ( started >= 0 )
              CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52));
            else
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x276u);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x273u);
          }
        }
        return (unsigned int)v3;
      }
    }
    CStoryboard::Abandon((CStoryboard *)v12);
    goto LABEL_23;
  }
  return (unsigned int)v3;
}
