/*
 * XREFs of ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x180013844
 * Callers:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180013974 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800023F4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180003580 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18000915C (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionCommon<1>(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        char a10)
{
  __int64 v10; // r10
  __int64 (__fastcall *v15)(__int64 *, __int64, __int64, char *); // rax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  int v20; // r9d
  int v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+50h] [rbp-28h] BYREF
  int v23; // [rsp+58h] [rbp-20h]

  a10 = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(a8 + 2 * v10) );
  v15 = (__int64 (__fastcall *)(__int64 *, __int64, __int64, char *))g_pfnResultFromCaughtExceptionInternal;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v16 = 0;
  if ( v15 )
  {
    v17 = v15(&v22, a8 + 2 * v10, 2048 - v10, &a10);
    v18 = *(_DWORD *)(v17 + 8);
    *(_QWORD *)a1 = *(_QWORD *)v17;
    *(_DWORD *)(a1 + 8) = v18;
    v16 = *(_DWORD *)a1;
  }
  if ( v16 >= 0 )
  {
    LODWORD(v22) = -2147024322;
    HIDWORD(v22) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
    *(_QWORD *)a1 = v22;
    LOBYTE(v23) = 0;
    *(_DWORD *)(a1 + 8) = v23;
    wil::details::ReportFailure_Base<3,0>(a2, a3, a4, v20, v21, a7, a1, a8);
  }
  wil::details::ReportFailure_Base<1,0>(a2, a3, a4, a4, v21, a7, a1, a8);
  return a1;
}
