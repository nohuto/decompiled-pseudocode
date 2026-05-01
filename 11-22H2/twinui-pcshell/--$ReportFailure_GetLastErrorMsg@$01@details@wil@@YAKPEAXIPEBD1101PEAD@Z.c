/*
 * XREFs of ??$ReportFailure_GetLastErrorMsg@$01@details@wil@@YAKPEAXIPEBD1101PEAD@Z @ 0x1803F47E0
 * Callers:
 *     ?Log_GetLastErrorMsg@in1diag3@details@wil@@YAKPEAXIPEBD1ZZ @ 0x180271BCC (-Log_GetLastErrorMsg@in1diag3@details@wil@@YAKPEAXIPEBD1ZZ.c)
 *     ?Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18040230C (-Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180132388 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180132494 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1803927C4 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
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
  int v8; // edi
  unsigned int v9; // esi
  int v10; // ebp
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

  v8 = a3;
  v9 = (unsigned int)a2;
  v10 = (int)a1;
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
  wil::details::ReportFailure_Msg<2>(v10, (unsigned __int16 *)v9, v8, v14, v17, (__int64)a6, (__int64)&v20, a7, a8);
  return v12;
}
