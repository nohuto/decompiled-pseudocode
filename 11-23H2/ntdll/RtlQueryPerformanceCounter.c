/*
 * XREFs of RtlQueryPerformanceCounter @ 0x180010930
 * Callers:
 *     RtlGetSystemTimePrecise @ 0x180010870 (RtlGetSystemTimePrecise.c)
 *     RtlCapabilityCheck @ 0x180011760 (RtlCapabilityCheck.c)
 *     RtlDelayExecution @ 0x1800556D0 (RtlDelayExecution.c)
 *     EtwpReserveTraceBuffer @ 0x18005A758 (EtwpReserveTraceBuffer.c)
 *     EtwpInitLoggerContext @ 0x18005BF28 (EtwpInitLoggerContext.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18005D0A4 (EtwpAddLogHeaderToLogFile.c)
 *     RtlGetMultiTimePrecise @ 0x18007E630 (RtlGetMultiTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x18007E7B0 (RtlGetInterruptTimePrecise.c)
 *     PsspSampleCounters @ 0x180129670 (PsspSampleCounters.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1800A14D0 (NtQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlQueryPerformanceCounter(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

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
      LODWORD(a2) = HIDWORD(v2);
      v2 = (unsigned int)v2;
      a2 = (unsigned int)a2;
    }
    else
    {
      __asm { rdtscp }
    }
    v4 = v2 | (a2 << 32);
    goto LABEL_8;
  }
  if ( !RtlpHypervisorSharedUserVa || !*(_DWORD *)RtlpHypervisorSharedUserVa )
  {
LABEL_23:
    NtQueryPerformanceCounter(&v7, 0LL);
    v5 = v7;
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
    LODWORD(a2) = HIDWORD(v2);
    v2 = (unsigned int)v2;
    a2 = (unsigned int)a2;
  }
  else
  {
    __asm { rdtscp }
  }
  v4 = *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
     + (((v2 | (a2 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
LABEL_8:
  v5 = (v4 + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
LABEL_9:
  *a1 = v5;
  return 1LL;
}
