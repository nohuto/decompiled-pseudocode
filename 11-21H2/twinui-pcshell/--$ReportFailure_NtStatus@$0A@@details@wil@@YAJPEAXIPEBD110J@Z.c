/*
 * XREFs of ??$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z @ 0x180449B60
 * Callers:
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18044C430 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18012A090 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ?FromStatus@ResultStatus@details@wil@@SA?AU123@J@Z @ 0x1802DB654 (-FromStatus@ResultStatus@details@wil@@SA-AU123@J@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NtStatus<0>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  int v9; // r9d
  _BYTE v10[24]; // [rsp+60h] [rbp-18h] BYREF

  wil::details::ResultStatus::FromStatus((__int64)v10, a7);
  wil::details::ReportFailure_Base<0,0>(a1, a2, (int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h", v9);
}
