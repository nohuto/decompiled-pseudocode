/*
 * XREFs of ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1800C91B8
 * Callers:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800CB010 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180044C60 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180048BCC (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18004E930 (_alloca_probe.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800A8FF4 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_HrMsg<1>(
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
  va_list v12; // r9
  int v13; // r9d
  int v15; // [rsp+20h] [rbp-1078h]
  __int64 v16; // [rsp+50h] [rbp-1048h]
  int v17; // [rsp+58h] [rbp-1040h]
  __int64 v18; // [rsp+60h] [rbp-1038h] BYREF
  int v19; // [rsp+68h] [rbp-1030h]
  _BYTE v20[4096]; // [rsp+70h] [rbp-1028h] BYREF

  LODWORD(v16) = (_DWORD)a7;
  HIDWORD(v16) = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  LOBYTE(v17) = 0;
  v18 = v16;
  v19 = v17;
  wil::details::PrintLoggingMessage((wil::details *)v20, v10, v11, v12);
  return wil::details::ReportFailure_Base<1,0>(a1, a2, a3, v13, v15, a6, (int)&v18, (__int64)v20);
}
