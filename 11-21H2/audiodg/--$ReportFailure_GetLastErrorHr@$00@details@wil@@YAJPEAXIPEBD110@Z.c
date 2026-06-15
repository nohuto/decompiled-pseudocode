/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x14004CDF4
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004EC84 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x1400211C8 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1400263D8 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x14002C60C (-HrToNtStatus@details@wil@@YAJJ@Z.c)
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
  unsigned int v10; // ebx
  int v11; // r9d
  const char *v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF
  int v18; // [rsp+68h] [rbp-10h]

  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v13, a6);
  v10 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v10 = (unsigned __int16)LastErrorFail | 0x80070000;
  LODWORD(v15) = v10;
  HIDWORD(v15) = wil::details::HrToNtStatus((wil::details *)v10);
  LOBYTE(v16) = 0;
  v18 = v16;
  v17 = v15;
  wil::details::ReportFailure_Base<1,0>(v8, v7, a3, v11, v14, (__int64)a6, (int)&v17, 0LL);
  return v10;
}
