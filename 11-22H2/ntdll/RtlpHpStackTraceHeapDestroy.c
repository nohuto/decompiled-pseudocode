/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x1800499B0
 * Callers:
 *     RtlDestroyHeap @ 0x1800496B0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1801155C0 (RtlpHpPerHeapStackTraceCleanup.c)
 */

signed __int64 __fastcall RtlpHpStackTraceHeapDestroy(__int64 a1)
{
  __int64 v3; // rcx

  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_180185108 & 1) != 0 && (dword_180185108 & 2) != 0 )
  {
    v3 = 112LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v3 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v3, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
