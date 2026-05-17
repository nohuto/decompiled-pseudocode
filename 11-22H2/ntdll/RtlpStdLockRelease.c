/*
 * XREFs of RtlpStdLockRelease @ 0x18010E714
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x18010E1A0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x18010E3B8 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x18010E498 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18010E56C (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18010E734 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpStdLockRelease(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  if ( !byte_1801843C8 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
