/*
 * XREFs of RtlpHpStackTraceDisable @ 0x18011606C
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180115FF8 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x1800773DC (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x18012BCD4 (RtlStackDbContextCleanup.c)
 */

void RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_180185108 & 1) != 0 )
  {
    dword_180185108 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup(&qword_180185110);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
