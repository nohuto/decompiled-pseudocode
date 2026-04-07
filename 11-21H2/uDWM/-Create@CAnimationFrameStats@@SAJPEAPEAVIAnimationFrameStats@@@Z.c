/*
 * XREFs of ?Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z @ 0x180005754
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ @ 0x18005BCB0 (-InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800D31FC (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800DB27C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?PostTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F4688 (-PostTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@win.c)
 * Callees:
 *     ?Initialize@CCompFrameStats@@IEAAJXZ @ 0x18000581C (-Initialize@CCompFrameStats@@IEAAJXZ.c)
 *     ??0CAnimationFrameStats@@IEAA@T_LARGE_INTEGER@@@Z @ 0x18000596C (--0CAnimationFrameStats@@IEAA@T_LARGE_INTEGER@@@Z.c)
 *     ?Release@CCompFrameStats@@UEAAKXZ @ 0x180006A30 (-Release@CCompFrameStats@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationFrameStats::Create(struct IAnimationFrameStats **a1)
{
  CAnimationFrameStats *v2; // rax
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rbx
  CCompFrameStats *v5; // rcx
  int v6; // edi
  CCompFrameStats *v8; // [rsp+30h] [rbp+8h]
  LARGE_INTEGER Frequency; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  QueryPerformanceFrequency(&Frequency);
  v2 = (CAnimationFrameStats *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                 WPF::g_pProcessHeap,
                                 2792LL);
  if ( !v2 )
  {
    v5 = 0LL;
    goto LABEL_10;
  }
  v3 = (volatile signed __int32 *)CAnimationFrameStats::CAnimationFrameStats(v2, Frequency);
  v4 = v3;
  v5 = (CCompFrameStats *)v3;
  v8 = (CCompFrameStats *)v3;
  if ( !v3 )
  {
LABEL_10:
    v6 = -2147024882;
    goto LABEL_5;
  }
  _InterlockedIncrement(v3 + 2);
  v6 = CCompFrameStats::Initialize((CCompFrameStats *)v3);
  if ( v6 < 0 )
  {
    v5 = v8;
  }
  else
  {
    v5 = 0LL;
    *a1 = (struct IAnimationFrameStats *)(v4 + 34);
  }
LABEL_5:
  if ( v5 )
    CCompFrameStats::Release(v5);
  return (unsigned int)v6;
}
