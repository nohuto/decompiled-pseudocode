/*
 * XREFs of ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x180027FFC
 * Callers:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180027EF8 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180027E34 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180027E88 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18003752C (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionCommon<1>(
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
  __int64 v11; // rcx
  __int64 (__fastcall *v15)(__int64 *, __int64, __int64, char *); // rax
  __int64 v16; // rax
  int v17; // r9d
  int v18; // ecx
  int v20; // r9d
  int v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+50h] [rbp-28h] BYREF
  int v23; // [rsp+58h] [rbp-20h]

  a10 = 0;
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(a8 + 2 * v11) );
  v15 = (__int64 (__fastcall *)(__int64 *, __int64, __int64, char *))g_pfnResultFromCaughtExceptionInternal;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  if ( !v15
    || (v16 = v15(&v22, a8 + 2 * v11, 2048 - v11, &a10),
        v18 = *(_DWORD *)(v16 + 8),
        *(_QWORD *)a1 = *(_QWORD *)v16,
        *(_DWORD *)(a1 + 8) = v18,
        *(int *)a1 >= 0) )
  {
    LODWORD(v22) = -2147024322;
    HIDWORD(v22) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL, a2);
    *(_QWORD *)a1 = v22;
    LOBYTE(v23) = 0;
    *(_DWORD *)(a1 + 8) = v23;
    wil::details::ReportFailure_Base<3,0>(a2, a3, a4, v20, v21, a7, a1, a8);
  }
  wil::details::ReportFailure_Base<1,0>(a2, a3, a4, v17, v21, a7, a1, a8);
  return a1;
}
