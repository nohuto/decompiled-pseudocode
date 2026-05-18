/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180003814
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000834C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18000371C (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180003950 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800064F0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  signed int LastError; // eax
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // r9d
  int v13; // [rsp+20h] [rbp-58h]
  wil::details *v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF
  int v18; // [rsp+68h] [rbp-10h]

  LastError = GetLastError();
  v10 = LastError;
  if ( !LastError )
  {
    LODWORD(v14) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, (int)"wil", 0, 0LL, a6, v14);
    LOWORD(v10) = 668;
LABEL_4:
    v10 = (unsigned __int16)v10 | 0x80070000;
    goto LABEL_5;
  }
  if ( LastError > 0 )
    goto LABEL_4;
LABEL_5:
  LODWORD(v15) = v10;
  HIDWORD(v15) = wil::details::HrToNtStatus((wil::details *)v10, v9);
  LOBYTE(v16) = 0;
  v18 = v16;
  v17 = v15;
  wil::details::ReportFailure_Base<1,0>(a1, a2, (int)"wil", v11, v13, a6, (__int64)&v17);
  return v10;
}
