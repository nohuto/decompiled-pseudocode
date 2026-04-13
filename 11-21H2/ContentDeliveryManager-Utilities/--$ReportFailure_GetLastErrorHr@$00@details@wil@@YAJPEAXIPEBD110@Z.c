/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180024D74
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180044550 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800248B8 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180024EC0 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800398D0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  signed int LastError; // eax
  int v10; // edx
  unsigned int v11; // ebx
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-58h]
  wil::details *v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF
  int v19; // [rsp+68h] [rbp-10h]

  LastError = GetLastError();
  v11 = LastError;
  if ( !LastError )
  {
    LODWORD(v15) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, a3, 0, 0LL, a6, v15);
    LOWORD(v11) = 668;
LABEL_4:
    v11 = (unsigned __int16)v11 | 0x80070000;
    goto LABEL_5;
  }
  if ( LastError > 0 )
    goto LABEL_4;
LABEL_5:
  LODWORD(v16) = v11;
  HIDWORD(v16) = wil::details::HrToNtStatus((wil::details *)v11, v10);
  LOBYTE(v17) = 0;
  v19 = v17;
  v18 = v16;
  wil::details::ReportFailure_Base<1,0>(a1, a2, a3, v12, v14, a6, (int)&v18, 0LL);
  return v11;
}
