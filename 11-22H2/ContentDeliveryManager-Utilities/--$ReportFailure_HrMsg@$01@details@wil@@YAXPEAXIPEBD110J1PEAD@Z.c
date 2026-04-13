/*
 * XREFs of ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18006D4DC
 * Callers:
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800707B0 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180027E40 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18003752C (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180039D78 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     _alloca_probe @ 0x1800D4380 (_alloca_probe.c)
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
  __int64 v11; // r8
  char *v12; // r9
  __int64 v14; // [rsp+50h] [rbp-1048h]
  int v15; // [rsp+58h] [rbp-1040h]
  __int64 v16; // [rsp+60h] [rbp-1038h] BYREF
  int v17; // [rsp+68h] [rbp-1030h]
  _BYTE v18[4096]; // [rsp+70h] [rbp-1028h] BYREF

  LODWORD(v14) = (_DWORD)a7;
  HIDWORD(v14) = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  LOBYTE(v15) = 0;
  v16 = v14;
  v17 = v15;
  wil::details::PrintLoggingMessage((wil::details *)v18, v10, v11, v12);
  return wil::details::ReportFailure_Base<2,0>(a1, a2, a3, 0, 0LL, a6, (__int64)&v16, (__int64)v18);
}
