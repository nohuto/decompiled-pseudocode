/*
 * XREFs of RtlpHpStackTraceDisable @ 0x180115C94
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180115C20 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x18012704C (RtlStackDbContextCleanup.c)
 */

void RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_18017AE98 & 1) != 0 )
  {
    dword_18017AE98 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup(&qword_18017AEA0);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
