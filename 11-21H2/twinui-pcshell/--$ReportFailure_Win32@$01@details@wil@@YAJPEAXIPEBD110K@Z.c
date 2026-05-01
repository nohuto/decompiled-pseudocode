/*
 * XREFs of ??$ReportFailure_Win32@$01@details@wil@@YAJPEAXIPEBD110K@Z @ 0x1800E2CD8
 * Callers:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E2CB4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x180482500 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180091370 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18012A330 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32<2>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v7; // ebx
  _WORD *v8; // r9
  __int64 v9; // r8
  int v10; // r10d
  __int64 v11; // r11
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-10h]

  v7 = (unsigned int)a7;
  if ( (int)a7 > 0 )
    v7 = (unsigned __int16)a7 | 0x80070000;
  LODWORD(v13) = v7;
  HIDWORD(v13) = wil::details::HrToNtStatus((wil::details *)v7, a2);
  LOBYTE(v14) = (_BYTE)v8;
  v16 = v14;
  v15 = v13;
  wil::details::ReportFailure_Base<2,0>(v11, v10, v9, (__int64)v8, (__int64)v8, a6, (__int64)&v15, v8);
  return v7;
}
