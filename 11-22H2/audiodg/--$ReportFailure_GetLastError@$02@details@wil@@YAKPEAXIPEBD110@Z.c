/*
 * XREFs of ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x14004A49C
 * Callers:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14004EBA4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x14001C78C (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x14004A464 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x14004CB40 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_GetLastError<3>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        char *a6)
{
  int v6; // ebx
  int v7; // edi
  signed int LastErrorFail; // eax
  int v9; // edx
  int v10; // r9d
  const char *v11; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-10h]

  v6 = (int)a2;
  v7 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(
                    a1,
                    a2,
                    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
                    a4,
                    v11,
                    a6);
  if ( LastErrorFail > 0 )
    LastErrorFail = (unsigned __int16)LastErrorFail | 0x80070000;
  LODWORD(v13) = LastErrorFail;
  HIDWORD(v13) = wil::details::HrToNtStatus((wil::details *)(unsigned int)LastErrorFail, v9);
  LOBYTE(v14) = 0;
  v16 = v14;
  v15 = v13;
  wil::details::ReportFailure_Base<3,0>(
    v7,
    v6,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    v10,
    v12,
    (__int64)a6,
    (__int64)&v15,
    0LL);
}
