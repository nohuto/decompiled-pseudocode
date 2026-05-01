/*
 * XREFs of ??$ReportFailure_GetLastErrorMsg@$01@details@wil@@YAKPEAXIPEBD1101PEAD@Z @ 0x18032746C
 * Callers:
 *     ?Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x180334950 (-Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18012A330 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180166208 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1802DB1C4 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorMsg<2>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        const char *a6,
        unsigned __int64 a7,
        char *a8)
{
  unsigned int v9; // esi
  signed int LastErrorFail; // eax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  const char *v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+50h] [rbp-28h]
  int v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp-18h] BYREF
  int v21; // [rsp+68h] [rbp-10h]

  v9 = (unsigned int)a2;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v16, a6);
  v12 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v13 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v13 = (unsigned int)LastErrorFail;
  LODWORD(v18) = v13;
  HIDWORD(v18) = wil::details::HrToNtStatus((wil::details *)v13);
  LOBYTE(v19) = 0;
  v21 = v19;
  v20 = v18;
  wil::details::ReportFailure_Msg<2>(
    (__int64)a1,
    (unsigned __int16 *)v9,
    a3,
    v14,
    v17,
    (__int64)a6,
    (__int64)&v20,
    a7,
    a8);
  return v12;
}
