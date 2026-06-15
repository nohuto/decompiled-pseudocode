/*
 * XREFs of ??$ReportFailure_Win32@$01@details@wil@@YAJPEAXIPEBD110K@Z @ 0x180142F60
 * Callers:
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18014B678 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800BDA40 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800BF1A4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32<2>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v6; // r10d
  int v7; // r11d
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp-10h]

  LODWORD(v9) = -2147024883;
  HIDWORD(v9) = wil::details::HrToNtStatus((wil::details *)0x8007000DLL);
  LOBYTE(v10) = 0;
  v12 = v10;
  v11 = v9;
  wil::details::ReportFailure_Base<2,0>(
    v7,
    v6,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    0,
    0LL,
    a6,
    (__int64)&v11,
    0LL);
  return 2147942413LL;
}
