/*
 * XREFs of ??$ReportFailure_CaughtExceptionCommonNoReturnBase@$02@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1800B02D4
 * Callers:
 *     ??$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800B028C (--$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180054F30 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800A3864 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_CaughtExceptionCommonNoReturnBase<3>(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v10; // rcx
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // xmm0_8
  int v17; // r9d
  int v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h] BYREF
  int v22; // [rsp+68h] [rbp-8h]

  a10 = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(a8 + 2 * v10) );
  if ( g_pfnResultFromCaughtExceptionInternal )
  {
    v14 = g_pfnResultFromCaughtExceptionInternal(&v21, a8 + 2 * v10, 2048 - v10, &a10);
    v16 = *(_QWORD *)v14;
    LODWORD(v14) = *(_DWORD *)(v14 + 8);
    v19 = v16;
    v20 = v14;
    if ( (int)v16 < 0 )
      wil::details::ReportFailure_Base<3,0>(a2, a3, a4, v15, v18, a7, (__int64)&v19, a8);
  }
  LODWORD(v21) = -2147024322;
  HIDWORD(v21) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
  LOBYTE(v22) = 0;
  v20 = v22;
  v19 = v21;
  wil::details::ReportFailure_Base<3,0>(a2, a3, a4, v17, v18, a7, (__int64)&v19, a8);
}
