/*
 * XREFs of RtlReportFatalFailure @ 0x18010C0D0
 * Callers:
 *     RtlReportCriticalFailure @ 0x18010C00C (RtlReportCriticalFailure.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1801153DC (RtlpHpRaiseFatalLimitError.c)
 * Callees:
 *     RtlRaiseException @ 0x180032D00 (RtlRaiseException.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     RtlReportException @ 0x1800E7EA0 (RtlReportException.c)
 */

void __fastcall RtlReportFatalFailure(EXCEPTION_RECORD *a1)
{
  RtlRaiseException(a1);
}
