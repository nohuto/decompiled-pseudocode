/*
 * XREFs of ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x18001E4FC
 * Callers:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800256B4 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180003FFC (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x18000424C (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180005F14 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError<2>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  signed int LastError; // eax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  wil::details *v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF
  int v17; // [rsp+68h] [rbp-10h]

  LastError = GetLastError();
  v10 = LastError;
  if ( LastError )
  {
    if ( LastError <= 0 )
    {
      v11 = (unsigned int)LastError;
      goto LABEL_4;
    }
  }
  else
  {
    LODWORD(v13) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, a3, 0LL, 0LL, a6, v13);
    v10 = 668;
  }
  v11 = (unsigned __int16)v10 | 0x80070000;
LABEL_4:
  LODWORD(v14) = v11;
  HIDWORD(v14) = wil::details::HrToNtStatus((wil::details *)v11);
  LOBYTE(v15) = 0;
  v17 = v15;
  v16 = v14;
  wil::details::ReportFailure_Base<2,0>(a1, a2, a3, 0, 0LL, a6, (__int64)&v16, 0LL);
  return v10;
}
