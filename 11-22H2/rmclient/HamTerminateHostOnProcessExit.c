/*
 * XREFs of HamTerminateHostOnProcessExit @ 0x18001E7B0
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_2 @ 0x180015130 (unknown_libname_2.c)
 */

CLIENT_CALL_RETURN __fastcall HamTerminateHostOnProcessExit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  CLIENT_CALL_RETURN result; // rax
  int v12; // [rsp+40h] [rbp-28h]

  if ( unknown_libname_2(a1) )
  {
    result.Simple = HampInProcTerminateHostOnProcessExit(v7[1]);
  }
  else
  {
    v12 = a6;
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 0x11u, 0LL, *v7, v6, v8, v9, a5, v12).Pointer;
  }
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
