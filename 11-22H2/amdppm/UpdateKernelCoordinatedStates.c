/*
 * XREFs of UpdateKernelCoordinatedStates @ 0x1C0035574
 * Callers:
 *     PepUpdateCoordinatedStateWorker @ 0x1C0038270 (PepUpdateCoordinatedStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C001F6A4 (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall UpdateKernelCoordinatedStates(__int64 a1)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  *(_BYTE *)(a1 + 40) = 1;
  v2 = ((__int64 (*)(void))qword_1C0012800)();
  if ( v2 >= 0 )
  {
    if ( a1 == qword_1C0012B58 )
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
      (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
      v4);
  }
  return (unsigned int)v2;
}
