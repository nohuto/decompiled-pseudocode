/*
 * XREFs of ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x180099170
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180007F08 (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180047C44 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800481B0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180048464 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800990BC (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccentTransition::StartAnimation(
        CAccentTransition *this,
        const struct ACCENT_POLICY *a2,
        struct CAccent *a3)
{
  __int64 v6; // rdi
  CAnimationEngine *v7; // rax
  CAnimationEngine *v8; // r14
  unsigned int v9; // eax
  int started; // ebx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // edx
  struct tagRECT si128; // xmm6
  int v16; // eax
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+38h] [rbp-29h] BYREF
  __int128 v19; // [rsp+40h] [rbp-21h] BYREF
  int v20; // [rsp+50h] [rbp-11h]
  int v21; // [rsp+54h] [rbp-Dh]
  int v22; // [rsp+58h] [rbp-9h]
  __int64 v23; // [rsp+60h] [rbp-1h]
  struct tagRECT rc; // [rsp+68h] [rbp+7h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  *((_BYTE *)this + 32) = 1;
  v6 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v7 = CDesktopManager::AcquireAnimationEngine();
  v8 = v7;
  if ( !v7 )
  {
    v9 = 37;
LABEL_19:
    started = -2147024882;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v9);
    CAccentTransition::CleanupAnimation(this);
    if ( !v8 )
      goto LABEL_22;
    goto LABEL_21;
  }
  started = CAnimationEngine::RegisterForAnimationCompleteNotification(v7, this);
  if ( started < 0 )
  {
    v9 = 38;
    goto LABEL_20;
  }
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          72LL);
  v6 = v11;
  v23 = v11;
  if ( !v11 )
  {
    v6 = 0LL;
    v9 = 39;
    goto LABEL_19;
  }
  v12 = *((_DWORD *)a2 + 3);
  v13 = *((_QWORD *)this + 3);
  *(_DWORD *)(v11 + 16) = 1;
  *(_QWORD *)v11 = &CAccentTransitionAnimatedVisual::`vftable'{for `IAnimatedVisual'};
  *(_QWORD *)(v11 + 8) = &CAccentTransitionAnimatedVisual::`vftable'{for `CBaseObject'};
  *(_DWORD *)(v11 + 32) = v12;
  *(_OWORD *)(v11 + 40) = *(_OWORD *)(v13 + 624);
  *(_OWORD *)(v11 + 56) = *(_OWORD *)(v13 + 624);
  *(_QWORD *)(v11 + 24) = v13;
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
  if ( *((_DWORD *)a2 + 3) == 5 )
  {
    v14 = (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 51) * 81.0);
    if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 640LL) )
      v14 = -v14;
    si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm);
    rc = si128;
    OffsetRect(&rc, v14, 0);
    *(struct tagRECT *)(v6 + 40) = si128;
    *(struct tagRECT *)(v6 + 56) = rc;
  }
  *(_QWORD *)&rc.left = v6;
  v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v19, 8u, 1, &rc);
  started = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xC0u);
    v9 = 52;
    goto LABEL_20;
  }
  started = CAnimationEngine::ScheduleStartAnimation(v8, 74, (__int64)&v19, (unsigned int *)this + 9);
  if ( started < 0 )
  {
    v9 = 56;
    goto LABEL_20;
  }
  started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
  if ( started < 0 )
  {
    v9 = 58;
    goto LABEL_20;
  }
LABEL_21:
  CAnimationEngine::Release(v8);
LABEL_22:
  if ( v6 )
    CBaseObject::Release((CBaseObject *)(v6 + 8));
  DynArrayImpl<0>::~DynArrayImpl<0>(&v19);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return (unsigned int)started;
}
