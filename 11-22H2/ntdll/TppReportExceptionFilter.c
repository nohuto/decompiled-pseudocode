/*
 * XREFs of TppReportExceptionFilter @ 0x180125E48
 * Callers:
 *     TpCheckTerminateWorker @ 0x18005E050 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x1800E6D10 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
