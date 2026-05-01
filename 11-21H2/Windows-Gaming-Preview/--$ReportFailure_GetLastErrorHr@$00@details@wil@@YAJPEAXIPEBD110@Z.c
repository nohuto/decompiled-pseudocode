/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x1800091D4
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800036C0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800023F4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180008D64 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18000915C (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  signed int LastError; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  int v13; // [rsp+20h] [rbp-58h]
  wil::details *v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF
  int v18; // [rsp+68h] [rbp-10h]

  LastError = GetLastError();
  if ( !LastError )
  {
    LODWORD(v14) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, a3, 0LL, 0LL, a6, v14);
    LastError = 668;
  }
  v10 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v10 = LastError;
  LODWORD(v15) = v10;
  HIDWORD(v15) = wil::details::HrToNtStatus((wil::details *)v10);
  LOBYTE(v16) = 0;
  v18 = v16;
  v17 = v15;
  wil::details::ReportFailure_Base<1,0>(a1, a2, a3, v11, v13, a6, (int)&v17, 0LL);
  return v10;
}
