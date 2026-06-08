/*
 * XREFs of UpdateKernelCoordinatedStates @ 0x1C00346D4
 * Callers:
 *     PepUpdateCoordinatedStateWorker @ 0x1C0037330 (PepUpdateCoordinatedStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C001ECD8 (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall UpdateKernelCoordinatedStates(__int64 a1)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  *(_BYTE *)(a1 + 40) = 1;
  v2 = ((__int64 (*)(void))qword_1C0011770)();
  if ( v2 >= 0 )
  {
    if ( a1 == qword_1C0011AA8 )
      ProcLibTraceCoordinatedIdleStates(0);
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = v2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x19u,
      (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
      v4);
  }
  return (unsigned int)v2;
}
