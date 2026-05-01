/*
 * XREFs of ??$ReportFailure_Base@$02$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100032FA
 * Callers:
 *     ??$ReportFailure_Hr@$02@details@wil@@YGXPAXIPBD110J@Z @ 0x10003316 (--$ReportFailure_Hr@$02@details@wil@@YGXPAXIPBD110J@Z.c)
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YGKPAXIPBD110@Z @ 0x10003358 (--$ReportFailure_GetLastError@$02@details@wil@@YGKPAXIPBD110@Z.c)
 * Callees:
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004671 (--$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 */

void __cdecl __noreturn wil::details::ReportFailure_Base<3,0>(int a1, int a2, int a3, int a4, int a5)
{
  wil::details::ReportFailure_NoReturn<3>();
}
