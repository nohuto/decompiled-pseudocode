/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180010490
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800103FC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180010578 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180010590 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180018270 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v9; // edx
  DWORD LastError; // ebx
  wil::details *v12; // [rsp+30h] [rbp-48h]

  LastError = GetLastError();
  if ( !LastError )
  {
    LODWORD(v12) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, a3, 0, 0LL, a6, v12);
    LastError = 668;
  }
  if ( (int)LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  wil::details::HrToNtStatus((wil::details *)LastError, v9);
  wil::details::ReportFailure_Base<1,0>(a1, a2, a3);
  return LastError;
}
