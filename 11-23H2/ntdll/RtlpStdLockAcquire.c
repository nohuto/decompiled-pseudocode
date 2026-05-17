/*
 * XREFs of RtlpStdLockAcquire @ 0x18010FBA4
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x18010F650 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x18010F868 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x18010F948 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18010FA1C (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18010FBE4 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(volatile signed __int64 *a1)
{
  if ( !byte_180187488 )
    RtlAcquireSRWLockExclusive(a1);
  return 1;
}
