/*
 * XREFs of ??$ReportFailure_Win32@$01@details@wil@@YAJPEAXIPEBD110K@Z @ 0x18001B78C
 * Callers:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18001EE4C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180010590 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180018160 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32<2>(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v7; // ebx
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r11d
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-10h]

  v7 = (unsigned int)a7;
  if ( (int)a7 > 0 )
    v7 = (unsigned __int16)a7 | 0x80070000;
  LODWORD(v13) = v7;
  HIDWORD(v13) = wil::details::HrToNtStatus((wil::details *)v7);
  LOBYTE(v14) = v9;
  v16 = v14;
  v15 = v13;
  wil::details::ReportFailure_Base<2,0>(a1, v11, v10, v9, v9, a6, (__int64)&v15, v9);
  return v7;
}
