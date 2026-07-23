/*
 * XREFs of TppReportExceptionFilter @ 0x1801272C8
 * Callers:
 *     TpCheckTerminateWorker @ 0x18005B050 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x180127248 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x1800E8040 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
