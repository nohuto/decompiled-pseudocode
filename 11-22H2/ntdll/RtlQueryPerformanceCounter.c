/*
 * XREFs of RtlQueryPerformanceCounter @ 0x180010B40
 * Callers:
 *     RtlGetSystemTimePrecise @ 0x180010A80 (RtlGetSystemTimePrecise.c)
 *     RtlCapabilityCheck @ 0x180011970 (RtlCapabilityCheck.c)
 *     RtlDelayExecution @ 0x180055830 (RtlDelayExecution.c)
 *     EtwpReserveTraceBuffer @ 0x18005D750 (EtwpReserveTraceBuffer.c)
 *     EtwpInitLoggerContext @ 0x18005EF28 (EtwpInitLoggerContext.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005FF34 (EtwpAddLogHeaderToLogFile.c)
 *     RtlGetMultiTimePrecise @ 0x18007DFC0 (RtlGetMultiTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x18007E140 (RtlGetInterruptTimePrecise.c)
 *     PsspSampleCounters @ 0x1801281C0 (PsspSampleCounters.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x18009F410 (NtQueryPerformanceCounter.c)
 */

LOGICAL __cdecl RtlQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rdx
  __int64 QuadPart; // rax
  LARGE_INTEGER PerformanceCountera; // [rsp+40h] [rbp+18h] BYREF

  v2 = 2147353542LL;
  if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    goto LABEL_23;
  if ( (MEMORY[0x7FFE03C6] & 2) == 0 )
  {
    if ( MEMORY[0x7FFE03C6] >= 0 )
    {
      if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
      {
        _mm_lfence();
      }
      else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
      {
        _mm_mfence();
      }
      v2 = __rdtsc();
      LODWORD(v1) = HIDWORD(v2);
      v2 = (unsigned int)v2;
      v1 = (unsigned int)v1;
    }
    else
    {
      __asm { rdtscp }
    }
    v4 = v2 | (v1 << 32);
    goto LABEL_8;
  }
  if ( !RtlpHypervisorSharedUserVa || !*(_DWORD *)RtlpHypervisorSharedUserVa )
  {
LABEL_23:
    NtQueryPerformanceCounter(&PerformanceCountera, 0LL);
    QuadPart = PerformanceCountera.QuadPart;
    goto LABEL_9;
  }
  if ( MEMORY[0x7FFE03C6] >= 0 )
  {
    if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
    {
      _mm_lfence();
    }
    else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
    {
      _mm_mfence();
    }
    v2 = __rdtsc();
    LODWORD(v1) = HIDWORD(v2);
    v2 = (unsigned int)v2;
    v1 = (unsigned int)v1;
  }
  else
  {
    __asm { rdtscp }
  }
  v4 = *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
     + (((v2 | (v1 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
LABEL_8:
  QuadPart = (v4 + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
LABEL_9:
  PerformanceCounter->QuadPart = QuadPart;
  return 1;
}
