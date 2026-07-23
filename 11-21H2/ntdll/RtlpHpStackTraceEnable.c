/*
 * XREFs of RtlpHpStackTraceEnable @ 0x180115CE8
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800B0E10 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpHpStackTraceConfig @ 0x180115C20 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_18017AE98 & 1) == 0 )
  {
    dword_18017AE98 = 3;
    qword_18017AEA0 = 0LL;
    qword_18017AED0 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_18017AED8 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_18017AEA8 = 0LL;
    qword_18017AEB0 = 0LL;
    qword_18017AEB8 = 0LL;
    qword_18017AEC8 = 0LL;
    qword_18017AEC0 = 0LL;
    qword_18017AEE0 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
