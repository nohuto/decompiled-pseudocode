/*
 * XREFs of ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800B32D0
 * Callers:
 *     ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x180045748 (-CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z @ 0x1800B349C (-Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z.c)
 *     ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800B38C0 (-Release@CCubicBezierInterpolator@@UEAAKXZ.c)
 */

__int64 __fastcall CCubicBezierInterpolator::CreateTransition(
        struct IUIAnimationTransitionFactory2 *a1,
        double a2,
        double *a3,
        unsigned int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        struct IUIAnimationTransition2 **a9)
{
  __int64 v12; // rdi
  int v13; // esi
  unsigned int v14; // eax

  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( !v12 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x126u);
    return (unsigned int)v13;
  }
  *(_QWORD *)v12 = &CCubicBezierInterpolator::`vftable';
  *(_QWORD *)(v12 + 16) = 0LL;
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_DWORD *)(v12 + 72) = 0;
  *(_DWORD *)(v12 + 76) = 1;
  *(_QWORD *)(v12 + 64) = 0LL;
  *(double *)(v12 + 32) = a5;
  *(double *)(v12 + 40) = a6;
  *(double *)(v12 + 48) = a7;
  *(double *)(v12 + 56) = a8;
  v13 = CCubicBezierInterpolator::Initialize((CCubicBezierInterpolator *)v12, a2, a3, a4);
  if ( v13 < 0 )
  {
    v14 = 296;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v14);
    CCubicBezierInterpolator::Release((CCubicBezierInterpolator *)v12);
    return (unsigned int)v13;
  }
  v13 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionFactory2 *, __int64, struct IUIAnimationTransition2 **))a1->lpVtbl->CreateTransition)(
          a1,
          v12,
          a9);
  if ( v13 < 0 )
  {
    v14 = 297;
    goto LABEL_6;
  }
  return (unsigned int)v13;
}
