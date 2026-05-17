/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x180049850
 * Callers:
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180116A70 (RtlpHpPerHeapStackTraceCleanup.c)
 */

signed __int64 __fastcall RtlpHpStackTraceHeapDestroy(__int64 a1)
{
  __int64 v3; // rcx

  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801881E8 & 1) != 0 && (dword_1801881E8 & 2) != 0 )
  {
    v3 = 112LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v3 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v3, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
