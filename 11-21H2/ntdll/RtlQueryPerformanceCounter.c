/*
 * XREFs of RtlQueryPerformanceCounter @ 0x1800129A0
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x180005850 (EtwpReserveTraceBuffer.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000851C (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x18000A828 (EtwpInitLoggerContext.c)
 *     RtlGetMultiTimePrecise @ 0x18000BC10 (RtlGetMultiTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x18000EEE0 (RtlGetInterruptTimePrecise.c)
 *     RtlCapabilityCheck @ 0x180012560 (RtlCapabilityCheck.c)
 *     RtlGetSystemTimePrecise @ 0x1800128E0 (RtlGetSystemTimePrecise.c)
 *     RtlDelayExecution @ 0x18005B8C0 (RtlDelayExecution.c)
 *     PsspSampleCounters @ 0x180060FD8 (PsspSampleCounters.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1800A4690 (NtQueryPerformanceCounter.c)
 */

LOGICAL __cdecl RtlQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v4; // rdx
  __int64 QuadPart; // rax
  LARGE_INTEGER PerformanceCountera; // [rsp+40h] [rbp+18h] BYREF

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
      v1 = __rdtsc();
      LODWORD(v2) = HIDWORD(v1);
      v1 = (unsigned int)v1;
      v2 = (unsigned int)v2;
    }
    else
    {
      __asm { rdtscp }
    }
    v4 = v1 | (v2 << 32);
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
    v1 = __rdtsc();
    LODWORD(v2) = HIDWORD(v1);
    v1 = (unsigned int)v1;
    v2 = (unsigned int)v2;
  }
  else
  {
    __asm { rdtscp }
  }
  v4 = *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
     + (((v1 | (v2 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
LABEL_8:
  QuadPart = (v4 + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
LABEL_9:
  PerformanceCounter->QuadPart = QuadPart;
  return 1;
}
