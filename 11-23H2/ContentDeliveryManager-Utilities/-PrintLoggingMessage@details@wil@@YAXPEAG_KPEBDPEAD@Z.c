/*
 * XREFs of ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180039D78
 * Callers:
 *     ??$ReportFailure_Msg@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1800285E0 (--$ReportFailure_Msg@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ??$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1800661A0 (--$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ??$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z @ 0x18006D3C4 (--$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z.c)
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18006D48C (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180040C4C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180040C98 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     _alloca_probe @ 0x1800D4330 (_alloca_probe.c)
 */

void __fastcall wil::details::PrintLoggingMessage(wil::details *this, unsigned __int16 *a2, __int64 a3, char *a4)
{
  unsigned __int16 v6[2048]; // [rsp+20h] [rbp-1018h] BYREF

  if ( a3 )
  {
    if ( a4 )
    {
      StringCchPrintfW(v6, 0x800uLL, L"%hs", a3);
      StringCchVPrintfW((unsigned __int16 *)this, 0x800uLL, v6, a4);
    }
    else
    {
      StringCchPrintfW((unsigned __int16 *)this, 0x800uLL, L"%hs", a3);
    }
  }
  else
  {
    *(_WORD *)this = 0;
  }
}
