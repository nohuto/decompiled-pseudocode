/*
 * XREFs of ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x1800868C8
 * Callers:
 *     ??$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z @ 0x1800ABEA4 (--$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z.c)
 * Callees:
 *     ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x1800868F4 (--$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFail.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Base<0,0>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  wil::details::ReportFailure_NoReturn<0>(a1, a2, a3, a4);
}
