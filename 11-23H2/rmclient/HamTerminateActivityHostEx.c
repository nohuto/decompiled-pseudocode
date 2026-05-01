/*
 * XREFs of HamTerminateActivityHostEx @ 0x180002900
 * Callers:
 *     HamTerminateActivityHost @ 0x18001E780 (HamTerminateActivityHost.c)
 * Callees:
 *     unknown_libname_2 @ 0x180015130 (unknown_libname_2.c)
 */

CLIENT_CALL_RETURN __fastcall HamTerminateActivityHostEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  int v9; // r8d
  int v10; // r9d
  CLIENT_CALL_RETURN result; // rax
  int v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+30h] [rbp-38h]

  if ( (unsigned int)unknown_libname_2(a1) )
  {
    result.Simple = HampInProcTerminateActivityHost(v8[1]);
  }
  else
  {
    v13 = v10;
    v12 = v9;
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0,
                       0xCu,
                       0LL,
                       *v8,
                       v7,
                       v12,
                       v13,
                       a5,
                       a6,
                       a7).Pointer;
  }
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
