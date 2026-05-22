/*
 * XREFs of ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x18019FD18
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18019FE44 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000A1B0 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18000B840 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus<1>(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v8; // eax
  unsigned int v9; // edi
  int v10; // r9d
  int v12; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+58h] [rbp-20h]
  unsigned __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  int v15; // [rsp+68h] [rbp-10h]

  v8 = wil::details::NtStatusToHr((wil::details *)(unsigned int)a7);
  v9 = v8;
  LOBYTE(v13) = 1;
  v15 = v13;
  v14 = __PAIR64__((unsigned int)a7, v8);
  wil::details::ReportFailure_Base<1,0>(
    a1,
    279,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdesktopwindowtarget.cpp",
    v10,
    v12,
    a6,
    (__int64)&v14,
    0LL);
  return v9;
}
