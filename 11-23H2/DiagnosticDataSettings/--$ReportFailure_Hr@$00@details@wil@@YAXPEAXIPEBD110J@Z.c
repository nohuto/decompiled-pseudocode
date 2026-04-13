/*
 * XREFs of ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800049E4
 * Callers:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180004808 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180004814 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

void __fastcall wil::details::ReportFailure_Hr<1>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h] BYREF
  int v13; // [rsp+68h] [rbp-10h]

  LODWORD(v10) = (_DWORD)a7;
  HIDWORD(v10) = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  LOBYTE(v11) = 0;
  v13 = v11;
  v12 = v10;
  wil::details::ReportFailure_Base<1,0>(v8, v7, v7, v8, v9, a6, (int *)&v12);
}
