/*
 * XREFs of ??$ReportFailure_Win32Msg@$00@details@wil@@YAJPEAXIPEBD110K1PEAD@Z @ 0x180028A0C
 * Callers:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003F2D0 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 * Callees:
 *     ??$ReportFailure_Msg@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1800285E0 (--$ReportFailure_Msg@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18003752C (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32Msg<1>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7,
        unsigned __int64 a8,
        char *a9)
{
  unsigned int v9; // ebx
  __int64 v10; // r9
  int v11; // r8d
  int v12; // r10d
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF
  int v18; // [rsp+68h] [rbp-10h]

  v9 = (unsigned int)a7;
  if ( (int)a7 > 0 )
    v9 = (unsigned __int16)a7 | 0x80070000;
  LODWORD(v15) = v9;
  HIDWORD(v15) = wil::details::HrToNtStatus((wil::details *)v9, a2);
  LOBYTE(v16) = 0;
  v18 = v16;
  v17 = v15;
  wil::details::ReportFailure_Msg<1>(
    v12,
    (unsigned __int16 *)(unsigned int)v10,
    v11,
    v10,
    v14,
    a6,
    (__int64)&v17,
    a8,
    a9);
  return v9;
}
