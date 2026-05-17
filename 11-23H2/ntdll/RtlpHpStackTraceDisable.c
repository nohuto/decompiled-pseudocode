/*
 * XREFs of RtlpHpStackTraceDisable @ 0x18011751C
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x1801174A8 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x180077A4C (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x18012D1C8 (RtlStackDbContextCleanup.c)
 */

signed __int64 RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801881E8 & 1) != 0 )
  {
    dword_1801881E8 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup(&qword_1801881F0);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
