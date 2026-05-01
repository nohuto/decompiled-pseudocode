/*
 * XREFs of HamRpcSrvDebugClosePackageHandle @ 0x1800371B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvDebugClosePackageHandle(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  return HamSrvClosePackageHandle(a1, a2);
}
