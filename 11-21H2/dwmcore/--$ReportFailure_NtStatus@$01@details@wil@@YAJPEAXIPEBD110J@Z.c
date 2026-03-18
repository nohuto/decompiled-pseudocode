/*
 * XREFs of ??$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z @ 0x180267ACC
 * Callers:
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18026B9E0 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1800F3D94 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180176EFC (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus<2>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  int v10; // [rsp+58h] [rbp-20h]
  unsigned __int64 v11; // [rsp+60h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp-10h]

  LOBYTE(v10) = 1;
  v12 = v10;
  v11 = __PAIR64__((unsigned int)a7, wil::details::NtStatusToHr((wil::details *)(unsigned int)a7));
  wil::details::ReportFailure_Base<2,0>(
    a1,
    a2,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
    0,
    0LL,
    a6,
    (__int64)&v11);
  return (unsigned int)v11;
}
