/*
 * XREFs of ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x14005CDA0
 * Callers:
 *     ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x14005BEF0 (--$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x14006A8AC (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014E00 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x14002F180 (_alloca_probe.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x14004E604 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 */

void __fastcall wil::details::PrintLoggingMessage(wil::details *this, unsigned __int16 *a2, __int64 a3, va_list a4)
{
  size_t v6[512]; // [rsp+20h] [rbp-1018h] BYREF

  if ( a3 )
  {
    if ( a4 )
    {
      StringCchPrintfW((unsigned __int16 *)v6, 0x800uLL, (size_t *)L"%hs", a3);
      StringCchVPrintfW((unsigned __int16 *)this, 0x800uLL, v6, a4);
    }
    else
    {
      StringCchPrintfW((unsigned __int16 *)this, 0x800uLL, (size_t *)L"%hs", a3);
    }
  }
  else
  {
    *(_WORD *)this = 0;
  }
}
