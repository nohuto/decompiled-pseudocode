/*
 * XREFs of ExAllocateTimer @ 0x14031E180
 * Callers:
 *     WdtpAllocateTimer @ 0x140786620 (WdtpAllocateTimer.c)
 *     CreateTlgAggregateSession @ 0x140803550 (CreateTlgAggregateSession.c)
 *     WdipSemStartTimeoutCheck @ 0x140831664 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECBC8 (EtwpUpdatePeriodicCaptureState.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B3B6E8 (CmFcManagerStartRuntimePhase.c)
 *     ExpInitSystemPhase1 @ 0x140B4D6E4 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x14031E1B0 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
