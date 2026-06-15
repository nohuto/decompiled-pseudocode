/*
 * XREFs of ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x140073644
 * Callers:
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x140073CAC (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140074150 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x14001C78C (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x14004A41C (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x14004CB40 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError<2>(
        wil::details *a1,
        void *a2,
        int a3,
        const char *a4,
        int a5,
        const char *a6)
{
  int v7; // esi
  int v8; // ebp
  signed int LastErrorFail; // eax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  const char *v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF
  int v18; // [rsp+68h] [rbp-10h]

  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v14, a6);
  v10 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v11 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v11 = (unsigned int)LastErrorFail;
  LODWORD(v15) = v11;
  HIDWORD(v15) = wil::details::HrToNtStatus((wil::details *)v11);
  LOBYTE(v16) = v12;
  v18 = v16;
  v17 = v15;
  wil::details::ReportFailure_Base<2,0>(v8, v7, a3, 0, v12, (__int64)a6, (__int64)&v17, v12);
  return v10;
}
