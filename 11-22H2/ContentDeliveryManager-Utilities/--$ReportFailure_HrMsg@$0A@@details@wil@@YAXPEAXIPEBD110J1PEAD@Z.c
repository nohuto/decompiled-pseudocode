/*
 * XREFs of ??$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1800661F0
 * Callers:
 *     ?Throw_HrIfFalseMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18006AE48 (-Throw_HrIfFalseMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180071050 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A8B40 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180027EC0 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18003752C (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180039D78 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     _alloca_probe @ 0x1800D4380 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_HrMsg<0>(
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
  char *v14; // r9
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
  wil::details::ReportFailure_Base<0,0>(a1, a2, a3, v15, v16, a6, (__int64)&v19, (__int64)v21);
}
