/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x1800499B0
 * Callers:
 *     RtlDestroyHeap @ 0x1800496B0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1801155C0 (RtlpHpPerHeapStackTraceCleanup.c)
 */

void __fastcall RtlpHpStackTraceHeapDestroy(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_180185108 & 1) != 0 && (dword_180185108 & 2) != 0 )
  {
    v2 = 112LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v2 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v2, 0LL, 0LL);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
