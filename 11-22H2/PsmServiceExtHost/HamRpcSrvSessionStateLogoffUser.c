/*
 * XREFs of HamRpcSrvSessionStateLogoffUser @ 0x18007B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x180072ABC (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 */

__int64 __fastcall HamRpcSrvSessionStateLogoffUser(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 result; // rax

  result = HamSrvLogoffUser(a1, a2, a3, a4);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
