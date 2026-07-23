/*
 * XREFs of RtlpHeapTrkDumpOutstandingAllocs @ 0x18010C2A4
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18010C840 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlSizeHeap @ 0x18003AA50 (RtlSizeHeap.c)
 *     RtlpHeapTrkReportResult @ 0x18010CA40 (RtlpHeapTrkReportResult.c)
 */

char RtlpHeapTrkDumpOutstandingAllocs()
{
  unsigned int v0; // esi
  __int64 i; // r15
  __int64 v2; // rdi
  __int64 v3; // r14
  _QWORD *v4; // rbx
  __int64 v5; // r9
  unsigned int v6; // r8d
  void *v7; // r11
  unsigned int NumberOfHeaps; // r10d
  __int64 v9; // rdx
  __int64 Src; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  for ( i = 0LL; ; i += 16LL )
  {
    v2 = v0 & 0xF;
    if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_180188A20 + 8 * v2), 0LL) )
      break;
    v3 = 16LL * v0;
    v4 = *(_QWORD **)(i + qword_1801886A0);
    if ( v4 != (_QWORD *)(v3 + qword_1801886A0) )
    {
      while ( 1 )
      {
        v5 = v4[3];
        if ( v5 )
        {
          v6 = 0;
          v7 = (void *)v4[2];
          NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
          if ( NumberOfHeaps )
          {
            v9 = 0LL;
            while ( v7 != NtCurrentPeb()->ProcessHeaps[v9] )
            {
              ++v6;
              ++v9;
              if ( v6 >= NumberOfHeaps )
                goto LABEL_12;
            }
            Src = 8 * v5;
            if ( RtlSizeHeap(v7, 0, (PVOID)(8 * v5)) != -1LL
              && !(unsigned __int8)RtlpHeapTrkReportResult(0x20uLL, &Src, 8uLL) )
            {
              break;
            }
          }
        }
LABEL_12:
        v4 = (_QWORD *)*v4;
        if ( v4 == (_QWORD *)(v3 + qword_1801886A0) )
          goto LABEL_13;
      }
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180188A20 + 8 * v2));
      return 0;
    }
LABEL_13:
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180188A20 + 8 * v2));
    if ( ++v0 >= 0x1EEF )
      return 1;
  }
  return 0;
}
