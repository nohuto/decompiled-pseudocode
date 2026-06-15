/*
 * XREFs of ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1800D7AA0
 * Callers:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800D7A1C (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x18011DA70 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 * Callees:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180009634 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800406D0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800CBE10 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
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
        int a10)
{
  __int64 v10; // rdi
  __int64 v12; // rcx
  __int64 (__fastcall *v16)(__int64 *, __int64, __int64, char *); // rax
  __int64 v17; // rax
  int v18; // r9d
  int v19; // ecx
  char v20; // r8
  int v21; // eax
  int v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+50h] [rbp-28h] BYREF
  int v25; // [rsp+58h] [rbp-20h]
  char v26; // [rsp+80h] [rbp+8h] BYREF

  v10 = a8;
  v26 = 0;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(a8 + 2 * v12) );
  v16 = (__int64 (__fastcall *)(__int64 *, __int64, __int64, char *))g_pfnResultFromCaughtExceptionInternal;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  if ( v16
    && (v17 = v16(&v24, v10 + 2 * v12, 2048 - v12, &v26),
        v19 = *(_DWORD *)(v17 + 8),
        *(_QWORD *)a1 = *(_QWORD *)v17,
        *(_DWORD *)(a1 + 8) = v19,
        *(int *)a1 < 0) )
  {
    v20 = 1;
  }
  else
  {
    LODWORD(v24) = -2147024322;
    HIDWORD(v24) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
    LOBYTE(v25) = 0;
    v21 = v25;
    *(_QWORD *)a1 = v24;
    *(_DWORD *)(a1 + 8) = v21;
  }
  if ( !a10 && !v20 )
    wil::details::ReportFailure_Base<3,0>(a2, a3, a4, v18, v23, a7, a1, v10);
  wil::details::ReportFailure_Base<2,0>(a2, a3, a4, 0, 0LL, a7, a1, v10);
  return a1;
}
