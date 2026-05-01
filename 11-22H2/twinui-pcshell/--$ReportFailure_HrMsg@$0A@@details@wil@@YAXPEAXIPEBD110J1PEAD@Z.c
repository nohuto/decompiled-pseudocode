/*
 * XREFs of ??$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18040EC98
 * Callers:
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180411EE8 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180132494 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180132580 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180392E84 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_HrMsg<0>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int16 *v12; // rdx
  __int64 v13; // r8
  va_list v14; // r9
  int v15; // r9d
  _BYTE v16[4120]; // [rsp+70h] [rbp-1018h] BYREF

  wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  wil::details::PrintLoggingMessage((wil::details *)v16, v12, v13, v14);
  wil::details::ReportFailure_Base<0,0>(a1, a2, a3, v15);
}
