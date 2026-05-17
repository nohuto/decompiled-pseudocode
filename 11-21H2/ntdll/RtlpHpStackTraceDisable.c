/*
 * XREFs of RtlpHpStackTraceDisable @ 0x180115C94
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180115C20 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x18007DC2C (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x18012704C (RtlStackDbContextCleanup.c)
 */

signed __int64 __fastcall RtlpHpStackTraceDisable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_18017AE98 & 1) != 0 )
  {
    dword_18017AE98 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup(&qword_18017AEA0);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
