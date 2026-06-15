/*
 * XREFs of ??$ReportFailure_GetLastError@$0A@@details@wil@@YAKPEAXIPEBD110@Z @ 0x14006BF08
 * Callers:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14006C9F4 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x1400211C8 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x14002C60C (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140054B74 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_GetLastError<0>(
        wil::details *a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        int a5,
        char *a6)
{
  int v6; // ebx
  signed int LastErrorFail; // eax
  int v8; // r9d
  const char *v9; // [rsp+20h] [rbp-58h]
  int v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h] BYREF
  int v14; // [rsp+68h] [rbp-10h]

  v6 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(
                    a1,
                    (void *)0x283,
                    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
                    a4,
                    v9,
                    a6);
  if ( LastErrorFail > 0 )
    LastErrorFail = (unsigned __int16)LastErrorFail | 0x80070000;
  LODWORD(v11) = LastErrorFail;
  HIDWORD(v11) = wil::details::HrToNtStatus((wil::details *)(unsigned int)LastErrorFail);
  LOBYTE(v12) = 0;
  v14 = v12;
  v13 = v11;
  wil::details::ReportFailure_Base<0,0>(
    v6,
    643,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
    v8,
    v10,
    (__int64)a6,
    (__int64)&v13);
}
