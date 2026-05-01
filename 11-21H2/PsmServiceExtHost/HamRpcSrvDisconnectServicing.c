/*
 * XREFs of HamRpcSrvDisconnectServicing @ 0x18003ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18002E148 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamRpcSrvDisconnectServicing(struct _HAM_CLIENT_CONTEXT **a1)
{
  HamSrvDisconnect(*a1);
  *a1 = 0LL;
  return 0LL;
}
