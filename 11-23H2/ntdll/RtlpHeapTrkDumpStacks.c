/*
 * XREFs of RtlpHeapTrkDumpStacks @ 0x18010C410
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18010C840 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapTrkReportResult @ 0x18010CA40 (RtlpHeapTrkReportResult.c)
 */

char RtlpHeapTrkDumpStacks()
{
  int v0; // ebp
  __int64 v1; // r9
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 *v6; // rbx
  __int64 v7; // r9

  v0 = 0;
  if ( !TrkContext )
    return 0;
  v1 = 0LL;
  for ( *((_DWORD *)TrkContext + 16) = dword_1801886A8;
        (unsigned int)v1 < dword_180188A30;
        *((_QWORD *)TrkContext + 10) += *(_QWORD *)(v2 + 24) )
  {
    *((_QWORD *)TrkContext + 9) += *(_QWORD *)(*(_QWORD *)(qword_180188350 + 8 * v1) + 16LL);
    v2 = *(_QWORD *)(qword_180188350 + 8 * v1);
    v1 = (unsigned int)(v1 + 1);
  }
  v3 = 0;
  v4 = 0LL;
  while ( 2 )
  {
    v5 = v3 & 0xF;
    v6 = *(__int64 **)(v4 + qword_1801886B0);
    if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_180188A38 + 8 * v5), 0LL) )
      return 0;
    while ( v6 != (__int64 *)(16LL * v3 + qword_1801886B0) )
    {
      v7 = *((unsigned __int16 *)v6 + 8);
      *((_DWORD *)v6 + 5) = ++v0;
      if ( !(unsigned __int8)RtlpHeapTrkReportResult((unsigned int)(8 * v7 + 24), v6 + 3, 8 * v7) )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180188A38 + 8 * v5));
        return 0;
      }
      v6 = (__int64 *)*v6;
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180188A38 + 8 * v5));
    ++v3;
    v4 += 16LL;
    if ( v3 < 0x1EEF )
      continue;
    break;
  }
  return 1;
}
