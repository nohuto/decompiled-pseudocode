/*
 * XREFs of ??$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1804FF8FC
 * Callers:
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18050276C (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180132580 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ?FromStatus@ResultStatus@details@wil@@SA?AU123@J@Z @ 0x180392CDC (-FromStatus@ResultStatus@details@wil@@SA-AU123@J@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NtStatus<0>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  int v10; // r9d
  _BYTE v11[24]; // [rsp+60h] [rbp-18h] BYREF

  wil::details::ResultStatus::FromStatus((__int64)v11, a7);
  wil::details::ReportFailure_Base<0,0>(a1, a2, a3, v10);
}
