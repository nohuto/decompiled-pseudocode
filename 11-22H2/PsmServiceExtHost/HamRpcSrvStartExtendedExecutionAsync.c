/*
 * XREFs of HamRpcSrvStartExtendedExecutionAsync @ 0x18007B290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HamRpcSrvStartExtendedExecutionAsync(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  return HamSrvStartActivityAsync(a1, a2, 0, 0LL);
}
