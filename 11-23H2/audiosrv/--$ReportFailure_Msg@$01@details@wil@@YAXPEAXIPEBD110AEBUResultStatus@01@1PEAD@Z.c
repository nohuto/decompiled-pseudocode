/*
 * XREFs of ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180103860
 * Callers:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1801037E0 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ??$ReportFailure_Win32Msg@$01@details@wil@@YAJPEAXIPEBD110K1PEAD@Z @ 0x180149178 (--$ReportFailure_Win32Msg@$01@details@wil@@YAJPEAXIPEBD110K1PEAD@Z.c)
 * Callees:
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800045EC (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180009634 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180075940 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_Msg<2>(
        int a1,
        unsigned __int16 *a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        char *a9)
{
  int v11; // esi
  _BYTE v13[4096]; // [rsp+50h] [rbp-1028h] BYREF

  v11 = (int)a2;
  wil::details::PrintLoggingMessage((wil::details *)v13, a2, a8, a9);
  return wil::details::ReportFailure_Base<2,0>(a1, v11, a3, 0, 0LL, a6, a7, (__int64)v13);
}
