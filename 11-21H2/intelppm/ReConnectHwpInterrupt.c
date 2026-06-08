/*
 * XREFs of ReConnectHwpInterrupt @ 0x1C0003500
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 ReConnectHwpInterrupt()
{
  __int64 result; // rax
  int v1; // [rsp+28h] [rbp-10h]

  result = HalPrivateDispatchTable[117]((__int64)HwpInterruptService);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v1 = result;
    return WPP_RECORDER_SF_D(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             3u,
             0xFu,
             (__int64)&WPP_9442ac2458a23d7ffa41ae3edf890933_Traceguids,
             v1);
  }
  return result;
}
