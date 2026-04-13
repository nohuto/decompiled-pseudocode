/*
 * XREFs of ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18003BF08
 * Callers:
 *     ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180025000 (--$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ??$ReportFailure_Win32Msg@$00@details@wil@@YAJPEAXIPEBD110K1PEAD@Z @ 0x180025CFC (--$ReportFailure_Win32Msg@$00@details@wil@@YAJPEAXIPEBD110K1PEAD@Z.c)
 *     ??$ReportFailure_Msg@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x18006CD50 (--$ReportFailure_Msg@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ??$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z @ 0x180074E24 (--$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z.c)
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180074EEC (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180045F44 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _alloca_probe @ 0x1800ED720 (_alloca_probe.c)
 */

void __fastcall wil::details::PrintLoggingMessage(wchar_t *this, unsigned __int16 *a2, __int64 a3, va_list a4)
{
  int v6; // eax
  wchar_t Format[2048]; // [rsp+20h] [rbp-1028h] BYREF

  if ( a3 )
  {
    if ( a4 )
    {
      StringCchPrintfW(Format, 0x800uLL, L"%hs", a3);
      v6 = _vsnwprintf(this, 0x7FFuLL, Format, a4);
      if ( v6 < 0 || (unsigned __int64)v6 > 0x7FE )
        this[2047] = 0;
    }
    else
    {
      StringCchPrintfW(this, 0x800uLL, L"%hs", a3);
    }
  }
  else
  {
    *this = 0;
  }
}
