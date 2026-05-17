/*
 * XREFs of RtlpStdLockRelease @ 0x18010FBC4
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x18010F650 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x18010F868 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x18010F948 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18010FA1C (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18010FBE4 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpStdLockRelease(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  if ( !byte_180187488 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
