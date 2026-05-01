/*
 * XREFs of ??$ReportFailure_CaughtExceptionCommonNoReturnBase@$02@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1805B706C
 * Callers:
 *     ??$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1805B702C (--$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18012A330 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1802D560C (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_CaughtExceptionCommonNoReturnBase<3>(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rcx
  int v10; // r9d
  int v11; // r9d
  _DWORD v12[2]; // [rsp+60h] [rbp-10h] BYREF
  int v13; // [rsp+68h] [rbp-8h]
  int v14; // [rsp+90h] [rbp+20h] BYREF

  v14 = a3;
  LOBYTE(v14) = 0;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(a8 + 2 * v8) );
  if ( g_pfnResultFromCaughtExceptionInternal )
  {
    if ( (int)*(_QWORD *)g_pfnResultFromCaughtExceptionInternal(v12, a8 + 2 * v8, 2048 - v8, &v14) < 0 )
      wil::details::ReportFailure_Base<3,0>(
        a2,
        234,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
        v10);
  }
  v12[0] = -2147024322;
  v12[1] = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
  LOBYTE(v13) = 0;
  wil::details::ReportFailure_Base<3,0>(
    a2,
    234,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
    v11);
}
