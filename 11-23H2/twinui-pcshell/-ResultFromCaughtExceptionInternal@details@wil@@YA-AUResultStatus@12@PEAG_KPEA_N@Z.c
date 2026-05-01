/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEAG_KPEA_N@Z @ 0x1801B95B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180132494 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal(__int64 a1, _WORD *a2, __int64 a3, _BYTE *a4)
{
  int v8; // eax
  __int64 v10; // [rsp+48h] [rbp-40h]
  int v11; // [rsp+50h] [rbp-38h]

  if ( a2 )
    *a2 = 0;
  *a4 = 0;
  if ( !g_pfnResultFromCaughtException_CppWinRt || (v8 = g_pfnResultFromCaughtException_CppWinRt(a2, a3, a4), v8 >= 0) )
  {
    if ( !g_pfnResultFromCaughtException_WinRt )
    {
      if ( wil::g_pfnResultFromCaughtException )
        throw;
      throw;
    }
    v8 = g_pfnResultFromCaughtException_WinRt(a2, a3, a4);
  }
  LODWORD(v10) = v8;
  HIDWORD(v10) = wil::details::HrToNtStatus((wil::details *)(unsigned int)v8);
  LOBYTE(v11) = 0;
  *(_QWORD *)a1 = v10;
  *(_DWORD *)(a1 + 8) = v11;
  return a1;
}
