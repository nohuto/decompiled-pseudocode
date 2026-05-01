/*
 * XREFs of HamRpcSrvSessionStateLogoffSession @ 0x18003EBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvSessionStateLogoffSession(struct _HAM_CLIENT_CONTEXT *a1, unsigned int a2)
{
  return HamSrvLogoffSession(a1, a2);
}
