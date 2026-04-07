/*
 * XREFs of ??$ReportFailure_Win32@$02@details@wil@@YAJPEAXIPEBD110K@Z @ 0x18009C148
 * Callers:
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18009E118 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800083F0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180092724 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Win32<3>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  unsigned __int64 v7; // rcx
  int v8; // r9d
  int v9; // r10d
  int v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h] BYREF
  int v14; // [rsp+68h] [rbp-10h]

  v7 = (unsigned int)a7;
  if ( a7 > 0 )
    v7 = (unsigned __int16)a7 | 0x80070000;
  LODWORD(v11) = v7;
  HIDWORD(v11) = wil::details::HrToNtStatus((wil::details *)v7);
  LOBYTE(v12) = 0;
  v14 = v12;
  v13 = v11;
  wil::details::ReportFailure_Base<3,0>(
    v9,
    v8,
    (int)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
    v8,
    v10,
    a6,
    (__int64)&v13,
    0LL);
}
