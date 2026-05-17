/*
 * XREFs of RtlpHpStackTraceEnable @ 0x1801160C0
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800AE694 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpHpStackTraceConfig @ 0x180115FF8 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_180185108 & 1) == 0 )
  {
    memset_thunk_772440563353939046(&qword_180185110, 0, 0x48uLL);
    dword_180185108 = 3;
    qword_180185110 = 0LL;
    qword_180185140 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_180185148 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_180185118 = 0LL;
    qword_180185120 = 0LL;
    qword_180185128 = 0LL;
    qword_180185138 = 0LL;
    qword_180185130 = 0LL;
    qword_180185150 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
