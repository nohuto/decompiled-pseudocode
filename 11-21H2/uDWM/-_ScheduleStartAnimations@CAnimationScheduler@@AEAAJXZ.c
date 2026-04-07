/*
 * XREFs of ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800A7848
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800A7A30 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800158DC (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18003FAC4 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180048464 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800D87EC (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationScheduler::_ScheduleStartAnimations(CAnimationScheduler *this)
{
  bool v2; // bp
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rbx
  int v5; // eax
  int v6; // esi
  __int64 i; // rbx
  CStoryboard *v8; // rcx
  volatile signed __int32 *v9; // rax
  CAnimationEngine *v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 1;
  if ( *((_BYTE *)this + 80) )
    goto LABEL_8;
  v3 = CDesktopManager::AcquireAnimationEngine();
  v4 = v3;
  if ( !v3 )
    goto LABEL_8;
  v5 = CAnimationEngine::RegisterForAnimationCompleteNotification(v3, this);
  v6 = v5;
  if ( v5 >= 0 )
    *((_BYTE *)this + 80) = 1;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x210u);
  CAnimationEngine::Release(v4);
  if ( v6 >= 0 )
  {
LABEL_8:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
    {
      v8 = *(CStoryboard **)(*((_QWORD *)this + 2) + 8 * i);
      if ( *((_DWORD *)v8 + 6) == 2 )
        CStoryboard::ScheduleStartAnimation(v8);
    }
    v9 = (volatile signed __int32 *)CDesktopManager::AcquireAnimationEngine();
    v10 = (CAnimationEngine *)v9;
    if ( v9 )
    {
      _InterlockedAdd(v9 + 29, 1u);
      v2 = CAnimationEngine::IsIdle((CAnimationEngine *)v9) != 0;
      v6 = 0;
      CAnimationEngine::Release(v10);
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E1,
      (int)"clientcore\\windows\\dwm\\udwm\\animationscheduler.cpp",
      (const char *)(unsigned int)v6);
  }
  if ( v2 )
    CAnimationScheduler::_CleanupTransition(this);
  return (unsigned int)v6;
}
