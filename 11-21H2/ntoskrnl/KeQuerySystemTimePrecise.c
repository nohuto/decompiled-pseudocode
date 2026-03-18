/*
 * XREFs of KeQuerySystemTimePrecise @ 0x1402F08A0
 * Callers:
 *     EtwpInitializeTimeStamp @ 0x1406EFBC8 (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x1406EFD44 (EtwpInitLoggerContext.c)
 *     EtwpFinalizeHeader @ 0x1406F1AC4 (EtwpFinalizeHeader.c)
 *     PspUserThreadStartup @ 0x140702420 (PspUserThreadStartup.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     EtwTraceLpacAccessFailure @ 0x1407F6600 (EtwTraceLpacAccessFailure.c)
 *     EtwpTraceSystemShutdown @ 0x1409E3E74 (EtwpTraceSystemShutdown.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
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
