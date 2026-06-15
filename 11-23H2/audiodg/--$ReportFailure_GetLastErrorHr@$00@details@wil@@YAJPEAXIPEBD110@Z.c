/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x14004A4EC
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x14001C78C (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x14004A3D0 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x14004CB00 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
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
  int v10; // edx
  unsigned int v11; // ebx
  int v12; // r9d
  const char *v14; // [rsp+20h] [rbp-58h]
  int v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF
  int v19; // [rsp+68h] [rbp-10h]

  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v14, a6);
  v11 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v11 = (unsigned __int16)LastErrorFail | 0x80070000;
  LODWORD(v16) = v11;
  HIDWORD(v16) = wil::details::HrToNtStatus((wil::details *)v11, v10);
  LOBYTE(v17) = 0;
  v19 = v17;
  v18 = v16;
  wil::details::ReportFailure_Base<1,0>(v8, v7, a3, v12, v15, (__int64)a6, (int)&v18, 0LL);
  return v11;
}
