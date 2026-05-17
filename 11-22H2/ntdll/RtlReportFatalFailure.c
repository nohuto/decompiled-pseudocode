/*
 * XREFs of RtlReportFatalFailure @ 0x18010C240
 * Callers:
 *     RtlReportCriticalFailure @ 0x18010C17C (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801157BC (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800E6D10 (RtlReportException.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
