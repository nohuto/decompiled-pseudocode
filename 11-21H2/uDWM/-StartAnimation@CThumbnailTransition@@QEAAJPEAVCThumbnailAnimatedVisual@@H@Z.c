/*
 * XREFs of ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800E3194
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x18001CF18 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180047D5C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180048464 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800E3370 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CThumbnailTransition::StartAnimation(
        CThumbnailTransition *this,
        struct CThumbnailAnimatedVisual *a2)
{
  CAnimationEngine *v4; // rax
  CAnimationEngine *v5; // rdi
  int started; // ebx
  int v7; // r10d
  unsigned int v8; // eax
  struct IAnimatedVisual *v10; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)a2 + 36) + 264LL))((char *)a2 + 288);
  v4 = CDesktopManager::AcquireAnimationEngine();
  v5 = v4;
  if ( v4 )
  {
    started = CAnimationEngine::RegisterForAnimationCompleteNotification(
                v4,
                (CThumbnailTransition *)((char *)this + 16));
    v7 = started;
    if ( started >= 0 )
    {
      v10 = (struct IAnimatedVisual *)((*((_QWORD *)this + 3) + 288LL) & -(__int64)(*((_QWORD *)this + 3) != 0LL));
      started = CAnimationEngine::ScheduleStartAnimation(v5, 62, &v10, 1u, (unsigned int *)this + 8);
      v7 = started;
      if ( started >= 0 )
      {
        *((_BYTE *)this + 36) = 1;
LABEL_12:
        CAnimationEngine::Release(v5);
        goto LABEL_13;
      }
      v8 = 36;
    }
    else
    {
      v8 = 30;
    }
  }
  else
  {
    started = -2147024882;
    v7 = -2147024882;
    v8 = 29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8);
  CThumbnailTransition::_CleanupAnimation(this);
  if ( v5 )
    goto LABEL_12;
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return (unsigned int)started;
}
