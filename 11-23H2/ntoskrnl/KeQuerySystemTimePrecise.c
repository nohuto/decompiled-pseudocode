/*
 * XREFs of KeQuerySystemTimePrecise @ 0x1402BE530
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 *     PspNotifyThreadCreation @ 0x14076F800 (PspNotifyThreadCreation.c)
 *     EtwpInitLoggerContext @ 0x1407B34C0 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1407DBCB0 (EtwpInitializeTimeStamp.c)
 *     EtwpFinalizeHeader @ 0x1407F5E38 (EtwpFinalizeHeader.c)
 *     EtwpTraceSystemShutdown @ 0x1409E6EB4 (EtwpTraceSystemShutdown.c)
 *     EtwTraceLpacAccessFailure @ 0x1409ED0B4 (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KeQuerySystemTimePrecise(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  char v5; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v7; // rdx
  __int64 result; // rax

  while ( 1 )
  {
    v1 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v2 = MEMORY[0xFFFFF78000000014];
      v3 = MEMORY[0xFFFFF78000000348];
      v4 = MEMORY[0xFFFFF78000000358];
      v5 = MEMORY[0xFFFFF78000000368];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v1 )
        break;
    }
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= v3 )
  {
    result = v2;
  }
  else
  {
    v7 = PerformanceCounter.QuadPart - v3 - 1;
    if ( v5 )
      v7 <<= v5;
    result = (((unsigned __int64)v7 * (unsigned __int128)v4) >> 64) + v2;
  }
  *a1 = result;
  return result;
}
