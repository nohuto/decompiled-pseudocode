/*
 * XREFs of ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x14005A120
 * Callers:
 *     ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x140058F10 (--$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x14006B024 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014AC8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1400321A0 (_alloca_probe.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x14004F1B4 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 */

void __fastcall wil::details::PrintLoggingMessage(wil::details *this, unsigned __int16 *a2, __int64 a3, va_list a4)
{
  size_t v6[512]; // [rsp+20h] [rbp-1018h] BYREF

  if ( a3 )
  {
    if ( a4 )
    {
      StringCchPrintfW((unsigned __int16 *)v6, 2048LL, L"%hs", a3);
      StringCchVPrintfW((unsigned __int16 *)this, 0x800uLL, v6, a4);
    }
    else
    {
      StringCchPrintfW((unsigned __int16 *)this, 2048LL, L"%hs", a3);
    }
  }
  else
  {
    *(_WORD *)this = 0;
  }
}
