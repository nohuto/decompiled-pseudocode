/*
 * XREFs of RtlGetSystemTimePrecise @ 0x140226E10
 * Callers:
 *     EtwpGetLoggerTimeStamp @ 0x140227B4C (EtwpGetLoggerTimeStamp.c)
 *     EtwpReserveTraceBuffer @ 0x140234100 (EtwpReserveTraceBuffer.c)
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     KiProcessExpiredTimerList @ 0x140252B50 (KiProcessExpiredTimerList.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1402A2FB0 (EtwGetKernelTraceTimestampSilo.c)
 *     HalpSetVirtualRtc @ 0x14033B5F0 (HalpSetVirtualRtc.c)
 *     EtwpLogContextSwapEvent @ 0x14038A430 (EtwpLogContextSwapEvent.c)
 *     WmiGetClock @ 0x1405FF720 (WmiGetClock.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408741A8 (SshpSessionManagerSendControlEvent.c)
 *     EtwpTraceSystemInitialization @ 0x140B4C830 (EtwpTraceSystemInitialization.c)
 *     PspInitPhase2 @ 0x140B67208 (PspInitPhase2.c)
 *     EtwpInitializeBootTimeStamps @ 0x140B742E4 (EtwpInitializeBootTimeStamps.c)
 *     EtwpFixBootSystemTime @ 0x140B974E0 (EtwpFixBootSystemTime.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 */

__int64 RtlGetSystemTimePrecise()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  LARGE_INTEGER v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    v0 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v1 = MEMORY[0xFFFFF78000000014];
      v2.QuadPart = MEMORY[0xFFFFF78000000348];
      v3 = MEMORY[0xFFFFF78000000358];
      v4 = MEMORY[0xFFFFF78000000368];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v0 )
        break;
    }
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v2.QuadPart )
    return v1;
  v6 = PerformanceCounter.QuadPart - v2.QuadPart - 1;
  if ( v4 )
    v6 <<= v4;
  return (((unsigned __int64)v6 * (unsigned __int128)v3) >> 64) + v1;
}
