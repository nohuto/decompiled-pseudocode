/*
 * XREFs of TppReportExceptionFilter @ 0x180124408
 * Callers:
 *     TpCheckTerminateWorker @ 0x180004900 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x1800E7EA0 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
