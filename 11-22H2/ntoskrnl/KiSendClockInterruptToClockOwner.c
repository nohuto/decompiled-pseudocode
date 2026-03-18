/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x140364A68
 * Callers:
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1402514C0 (KiTimer2Expiration.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C7030 (KeResumeClockTimerFromIdle.c)
 *     KiAdjustTimer2DueTimes @ 0x14039A40C (KiAdjustTimer2DueTimes.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1403C24A0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140462020 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257280 (KeAddProcessorAffinityEx.c)
 *     HalRequestClockInterrupt @ 0x140364AF0 (HalRequestClockInterrupt.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[68]; // [rsp+20h] [rbp-128h] BYREF

  v1[0] = 2097153;
  memset(&v1[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
