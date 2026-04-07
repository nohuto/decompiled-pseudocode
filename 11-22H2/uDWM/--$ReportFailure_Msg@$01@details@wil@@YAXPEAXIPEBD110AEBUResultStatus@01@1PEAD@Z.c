/*
 * XREFs of ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1800CAE34
 * Callers:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1800CADB4 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18004CF98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800662E0 (_alloca_probe.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180099218 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18009DE34 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Msg<2>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9)
{
  unsigned __int16 v13[2048]; // [rsp+50h] [rbp-2038h] BYREF
  size_t v14[512]; // [rsp+1050h] [rbp-1038h] BYREF

  if ( a8 )
  {
    if ( a9 )
    {
      StringCchPrintfW((unsigned __int16 *)v14, 0x800uLL, (size_t *)L"%hs");
      StringCchVPrintfW(v13, 0x800uLL, v14, a9);
    }
    else
    {
      StringCchPrintfW(v13, 0x800uLL, (size_t *)L"%hs");
    }
  }
  else
  {
    v13[0] = 0;
  }
  return wil::details::ReportFailure_Base<2,0>(a1, a2, a3, 0, 0LL, a6, a7, (__int64)v13);
}
