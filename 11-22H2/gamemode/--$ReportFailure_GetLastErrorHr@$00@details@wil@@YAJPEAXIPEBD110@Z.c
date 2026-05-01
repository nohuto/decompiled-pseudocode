/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x1800043AC
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800027D0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180001BA8 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180003E90 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180004338 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  signed int LastError; // eax
  unsigned int v9; // ebx
  int v10; // r9d
  int v12; // [rsp+20h] [rbp-58h]
  wil::details *v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF
  int v17; // [rsp+68h] [rbp-10h]

  LastError = GetLastError();
  if ( !LastError )
  {
    LODWORD(v13) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, (__int64)"wil", 0LL, 0LL, a6, v13);
    LastError = 668;
  }
  v9 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v9 = LastError;
  LODWORD(v14) = v9;
  HIDWORD(v14) = wil::details::HrToNtStatus((wil::details *)v9);
  LOBYTE(v15) = 0;
  v16 = v14;
  v17 = v15;
  wil::details::ReportFailure_Base<1,0>(a1, a2, (int)"wil", v10, v12, a6, (int)&v16);
  return v9;
}
