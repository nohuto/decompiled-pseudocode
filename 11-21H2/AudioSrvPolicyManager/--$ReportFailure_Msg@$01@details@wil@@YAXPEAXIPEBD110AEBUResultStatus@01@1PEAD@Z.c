/*
 * XREFs of ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180007FD4
 * Callers:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180007F54 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     _vsnwprintf @ 0x1800034F4 (_vsnwprintf.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180003FFC (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800073B4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _alloca_probe @ 0x1800443E0 (_alloca_probe.c)
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
        va_list Args)
{
  int v12; // eax
  wchar_t Buffer[2048]; // [rsp+50h] [rbp-2048h] BYREF
  wchar_t Format[2048]; // [rsp+1050h] [rbp-1048h] BYREF

  if ( a8 )
  {
    if ( Args )
    {
      StringCchPrintfW(Format, 2048LL, L"%hs");
      v12 = vsnwprintf(Buffer, 0x7FFuLL, Format, Args);
      if ( v12 < 0 || (unsigned __int64)v12 >= 0x7FF )
        Buffer[2047] = 0;
    }
    else
    {
      StringCchPrintfW(Buffer, 2048LL, L"%hs");
    }
  }
  else
  {
    Buffer[0] = 0;
  }
  return wil::details::ReportFailure_Base<2,0>(a1, a2, a3, 0, 0LL, a6, a7, (__int64)Buffer);
}
