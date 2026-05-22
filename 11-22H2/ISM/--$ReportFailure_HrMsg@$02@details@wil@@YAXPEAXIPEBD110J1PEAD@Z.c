/*
 * XREFs of ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18010ACF8
 * Callers:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18010B948 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180125A84 (-FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?FailFast_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801CE7C0 (-FailFast_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1801DB51C (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180054F30 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _alloca_probe @ 0x180079340 (_alloca_probe.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800A3864 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800D12C8 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_HrMsg<3>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int16 *v12; // rdx
  __int64 v13; // r8
  va_list v14; // r9
  int v15; // r9d
  int v16; // [rsp+20h] [rbp-1068h]
  __int64 v17; // [rsp+50h] [rbp-1038h]
  int v18; // [rsp+58h] [rbp-1030h]
  __int64 v19; // [rsp+60h] [rbp-1028h] BYREF
  int v20; // [rsp+68h] [rbp-1020h]
  _BYTE v21[4120]; // [rsp+70h] [rbp-1018h] BYREF

  LODWORD(v17) = (_DWORD)a7;
  HIDWORD(v17) = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  LOBYTE(v18) = 0;
  v19 = v17;
  v20 = v18;
  wil::details::PrintLoggingMessage((wil::details *)v21, v12, v13, v14);
  wil::details::ReportFailure_Base<3,0>(a1, a2, a3, v15, v16, a6, (__int64)&v19, (__int64)v21);
}
