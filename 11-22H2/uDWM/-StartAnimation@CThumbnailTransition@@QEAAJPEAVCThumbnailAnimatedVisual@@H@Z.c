/*
 * XREFs of ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800E49D4
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x180009FFC (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800436BC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180043790 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180043A88 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180045BF8 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800E4BB0 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CThumbnailTransition::StartAnimation(
        CThumbnailTransition *this,
        struct CThumbnailAnimatedVisual *a2)
{
  CAnimationEngine *v4; // rsi
  int started; // ebx
  int v6; // r10d
  unsigned int v7; // eax
  struct IAnimatedVisual *v9; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)a2 + 36) + 264LL))((char *)a2 + 288);
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    started = CAnimationEngine::RegisterForAnimationCompleteNotification(
                v4,
                (struct IAnimationListener *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    v6 = started;
    if ( started >= 0 )
    {
      v9 = (struct IAnimatedVisual *)((*((_QWORD *)this + 3) + 288LL) & -(__int64)(*((_QWORD *)this + 3) != 0LL));
      started = CAnimationEngine::ScheduleStartAnimation(v4, 62, &v9, 1u, (unsigned int *)this + 8);
      v6 = started;
      if ( started >= 0 )
      {
        *((_BYTE *)this + 36) = 1;
LABEL_12:
        CAnimationEngine::Release(v4);
        goto LABEL_13;
      }
      v7 = 36;
    }
    else
    {
      v7 = 30;
    }
  }
  else
  {
    started = -2147024882;
    v6 = -2147024882;
    v7 = 29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v7);
  CThumbnailTransition::_CleanupAnimation(this);
  if ( v4 )
    goto LABEL_12;
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return (unsigned int)started;
}
