/*
 * XREFs of ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x14006411C
 * Callers:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x14006409C (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x14004A3DC (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x14004A424 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x14004CB00 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionCommon<2>(
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
  int v17; // ecx
  int v19; // r9d
  int v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+50h] [rbp-28h] BYREF
  int v22; // [rsp+58h] [rbp-20h]

  a10 = 0;
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(a8 + 2 * v11) );
  v15 = (__int64 (__fastcall *)(__int64 *, __int64, __int64, char *))g_pfnResultFromCaughtExceptionInternal;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  if ( !v15
    || (v16 = v15(&v21, a8 + 2 * v11, 2048 - v11, &a10),
        v17 = *(_DWORD *)(v16 + 8),
        *(_QWORD *)a1 = *(_QWORD *)v16,
        *(_DWORD *)(a1 + 8) = v17,
        *(int *)a1 >= 0) )
  {
    LODWORD(v21) = -2147024322;
    HIDWORD(v21) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
    *(_QWORD *)a1 = v21;
    LOBYTE(v22) = 0;
    *(_DWORD *)(a1 + 8) = v22;
    wil::details::ReportFailure_Base<3,0>(a2, a3, a4, v19, v20, a7, a1, a8);
  }
  wil::details::ReportFailure_Base<2,0>(a2, a3, a4, 0, 0LL, a7, a1, a8);
  return a1;
}
