/*
 * XREFs of ??$ReportFailure_Win32Msg@$00@details@wil@@YAJPEAXIPEBD110K1PEAD@Z @ 0x180025CFC
 * Callers:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x1800445F0 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800248B8 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800398D0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18003BF08 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     _alloca_probe @ 0x1800ED720 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32Msg<1>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v7; // ebx
  unsigned __int16 *v11; // rdx
  unsigned __int64 v12; // r8
  const char *v13; // r9
  int v14; // r9d
  char *v16; // [rsp+20h] [rbp-1088h]
  int v17; // [rsp+20h] [rbp-1088h]
  __int64 v18; // [rsp+50h] [rbp-1058h]
  int v19; // [rsp+58h] [rbp-1050h]
  __int64 v20; // [rsp+60h] [rbp-1048h] BYREF
  int v21; // [rsp+68h] [rbp-1040h]
  _BYTE v22[4096]; // [rsp+70h] [rbp-1038h] BYREF

  v7 = (unsigned int)a7;
  if ( (int)a7 > 0 )
    v7 = (unsigned __int16)a7 | 0x80070000;
  LODWORD(v18) = v7;
  HIDWORD(v18) = wil::details::HrToNtStatus((wil::details *)v7, a2);
  LOBYTE(v19) = 0;
  v20 = v18;
  v21 = v19;
  wil::details::PrintLoggingMessage((wil::details *)v22, v11, v12, v13, v16);
  wil::details::ReportFailure_Base<1,0>(a1, a2, a3, v14, v17, a6, (int)&v20, (__int64)v22);
  return v7;
}
