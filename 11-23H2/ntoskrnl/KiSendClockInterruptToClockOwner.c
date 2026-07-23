/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x140365258
 * Callers:
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1402516A0 (KiTimer2Expiration.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C72F0 (KeResumeClockTimerFromIdle.c)
 *     KiAdjustTimer2DueTimes @ 0x14039A8DC (KiAdjustTimer2DueTimes.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1403C2CE0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140462A80 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     HalRequestClockInterrupt @ 0x1403652E0 (HalRequestClockInterrupt.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[68]; // [rsp+20h] [rbp-128h] BYREF

  v1[0] = 2097153;
  memset(&v1[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
