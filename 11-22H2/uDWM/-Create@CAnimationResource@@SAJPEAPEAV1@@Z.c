/*
 * XREFs of ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x1800A6AC0
 * Callers:
 *     ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x1800A7150 (-GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAni.c)
 *     ?StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F858C (-StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::Create(struct CAnimationResource **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  if ( a1 )
  {
    v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           96LL);
    if ( v3 )
    {
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)v3 = &CAnimationResource::`vftable';
      v2 = 0;
      *(_DWORD *)(v3 + 16) = 1;
      *(_QWORD *)(v3 + 24) = 0LL;
      *(_QWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 40) = 0LL;
      *(_DWORD *)(v3 + 48) = 0;
      *(_QWORD *)(v3 + 56) = 0LL;
      *(_WORD *)(v3 + 64) = 0;
      *(_QWORD *)(v3 + 72) = 0LL;
      *(_DWORD *)(v3 + 80) = 9;
      *(_QWORD *)(v3 + 88) = 0LL;
      *a1 = (struct CAnimationResource *)v3;
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x15u);
      *a1 = 0LL;
    }
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x15u);
  }
  return v2;
}
