/*
 * XREFs of RtlReportFatalFailure @ 0x18010D6C0
 * Callers:
 *     RtlReportCriticalFailure @ 0x18010D5FC (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x180116C3C (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x180054840 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800E8040 (RtlReportException.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
