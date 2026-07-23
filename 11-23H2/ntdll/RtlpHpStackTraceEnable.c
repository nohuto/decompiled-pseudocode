/*
 * XREFs of RtlpHpStackTraceEnable @ 0x180117540
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800B0764 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpHpStackTraceConfig @ 0x180117478 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801881E8 & 1) == 0 )
  {
    memset_thunk_772440563353939046(&qword_1801881F0, 0, 0x48uLL);
    dword_1801881E8 = 3;
    qword_1801881F0 = 0LL;
    qword_180188220 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_180188228 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_1801881F8 = 0LL;
    qword_180188200 = 0LL;
    qword_180188208 = 0LL;
    qword_180188218 = 0LL;
    qword_180188210 = 0LL;
    qword_180188230 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
