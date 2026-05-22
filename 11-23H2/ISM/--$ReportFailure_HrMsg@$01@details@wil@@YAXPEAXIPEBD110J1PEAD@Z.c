/*
 * XREFs of ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1800C0A2C
 * Callers:
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18002A030 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800541B4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800658C0 (_alloca_probe.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180090C6C (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800C0CF4 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_HrMsg<2>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned __int16 *v10; // rdx
  unsigned __int64 v11; // r8
  const char *v12; // r9
  char *v14; // [rsp+20h] [rbp-1078h]
  __int64 v15; // [rsp+50h] [rbp-1048h]
  int v16; // [rsp+58h] [rbp-1040h]
  __int64 v17; // [rsp+60h] [rbp-1038h] BYREF
  int v18; // [rsp+68h] [rbp-1030h]
  _BYTE v19[4096]; // [rsp+70h] [rbp-1028h] BYREF

  LODWORD(v15) = (_DWORD)a7;
  HIDWORD(v15) = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  LOBYTE(v16) = 0;
  v17 = v15;
  v18 = v16;
  wil::details::PrintLoggingMessage((wil::details *)v19, v10, v11, v12, v14);
  return wil::details::ReportFailure_Base<2,0>(a1, a2, a3, 0, 0LL, a6, (__int64)&v17, (__int64)v19);
}
