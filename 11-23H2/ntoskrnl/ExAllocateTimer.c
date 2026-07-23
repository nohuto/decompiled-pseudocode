/*
 * XREFs of ExAllocateTimer @ 0x14031E5F0
 * Callers:
 *     WdtpAllocateTimer @ 0x140786300 (WdtpAllocateTimer.c)
 *     CreateTlgAggregateSession @ 0x140822178 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x14082FE14 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECDA8 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B37FF0 (CmFcManagerStartRuntimePhase.c)
 *     ExpInitSystemPhase1 @ 0x140B49FE4 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x14031E620 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
