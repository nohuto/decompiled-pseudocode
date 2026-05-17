/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x180057304
 * Callers:
 *     RtlDestroyHeap @ 0x1800570A0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1801151E0 (RtlpHpPerHeapStackTraceCleanup.c)
 */

signed __int64 __fastcall RtlpHpStackTraceHeapDestroy(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_18017AE98 & 1) != 0 && (dword_18017AE98 & 2) != 0 )
  {
    v6 = 112LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v6 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v6, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
