/*
 * XREFs of ??$ReportFailure_Msg@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x18006CD50
 * Callers:
 *     ??$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18006CCD8 (--$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180024944 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18003BF08 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     _alloca_probe @ 0x1800ED720 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Msg<0>(
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
  int v11; // ebp
  int v12; // r9d
  int v13; // [rsp+20h] [rbp-1058h]
  wchar_t v14[2068]; // [rsp+50h] [rbp-1028h] BYREF

  v11 = (int)a2;
  wil::details::PrintLoggingMessage(v14, a2, a8, a9);
  wil::details::ReportFailure_Base<0,0>(a1, v11, a3, v12, v13, a6, a7, (__int64)v14);
}
