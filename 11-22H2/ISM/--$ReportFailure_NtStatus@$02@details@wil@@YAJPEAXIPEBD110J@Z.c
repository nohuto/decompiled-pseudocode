/*
 * XREFs of ??$ReportFailure_NtStatus@$02@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1800B2A04
 * Callers:
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B63B0 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800A3864 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?FromStatus@ResultStatus@details@wil@@SA?AU123@J@Z @ 0x1800B4264 (-FromStatus@ResultStatus@details@wil@@SA-AU123@J@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NtStatus<3>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  int v12; // r9d
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+58h] [rbp-20h]
  _BYTE v16[24]; // [rsp+60h] [rbp-18h] BYREF

  v10 = wil::details::ResultStatus::FromStatus(v16, a7);
  v11 = *(_QWORD *)v10;
  v15 = *(_DWORD *)(v10 + 8);
  v14 = v11;
  wil::details::ReportFailure_Base<3,0>(a1, a2, a3, v12, v13, a6, (__int64)&v14, 0LL);
}
