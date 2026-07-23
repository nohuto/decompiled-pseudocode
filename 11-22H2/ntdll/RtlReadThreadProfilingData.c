/*
 * XREFs of RtlReadThreadProfilingData @ 0x1800D7070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlReadThreadProfilingData(
        HANDLE PerformanceDataHandle,
        ULONG Flags,
        PPERFORMANCE_DATA PerformanceData)
{
  DWORD v3; // r14d
  __int64 v6; // r8
  DWORD v7; // r13d
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  int i; // ebp
  __int64 v12; // r10
  unsigned __int64 v13; // rax

  v3 = 0;
  if ( PerformanceData->Size != 288 )
    return -1073741306;
  if ( PerformanceData->Version != 1 )
    return -1073741583;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  PerformanceData->WaitReasonBitMap = 0LL;
  do
  {
    v6 = *((_QWORD *)PerformanceDataHandle + 2);
    v7 = v3;
    v8 = __rdtsc();
    PerformanceData->CycleTime = *((_QWORD *)PerformanceDataHandle + 7)
                               - *((_QWORD *)PerformanceDataHandle + 6)
                               + (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8);
    if ( (Flags & 1) != 0 )
    {
      PerformanceData->ContextSwitchCount = *((_DWORD *)PerformanceDataHandle + 2);
      if ( *((_QWORD *)PerformanceDataHandle + 3) )
        PerformanceData->WaitReasonBitMap |= _InterlockedExchange64((volatile __int64 *)PerformanceDataHandle + 3, 0LL);
    }
    if ( (Flags & 2) != 0 )
    {
      v9 = *((_QWORD *)PerformanceDataHandle + 4);
      if ( v9 )
      {
        v10 = 0LL;
        for ( i = 1; (unsigned int)v10 < *((_DWORD *)PerformanceDataHandle + 3); v10 = (unsigned int)(v10 + 1) )
        {
          if ( (i & (unsigned int)v9) != 0 )
          {
            v12 = (unsigned int)v10;
            PerformanceData->HwCounters[v12].Reserved = 0;
            PerformanceData->HwCounters[v10].Type = PMCCounter;
            v13 = __readpmc(*((_DWORD *)PerformanceDataHandle + 6 * v10 + 17));
            PerformanceData->HwCounters[v12].Value = *((_QWORD *)PerformanceDataHandle + 3 * v10 + 10)
                                                   + (unsigned int)(v13
                                                                  - *((_DWORD *)PerformanceDataHandle + 6 * v10 + 18));
          }
          i *= 2;
        }
      }
      PerformanceData->HwCountersCount = *((_BYTE *)PerformanceDataHandle + 12);
    }
    ++v3;
  }
  while ( v6 != *((_QWORD *)PerformanceDataHandle + 2) );
  PerformanceData->RetryCount = v7;
  return 0;
}
