/*
 * XREFs of HamRpcSrvQueryActivityPendDiagnostics @ 0x18007B150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvQueryActivityPendDiagnostics(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_PEND_DIAGNOSTICS *a3)
{
  return HamSrvQueryActivityPendDiagnostics(a1, a2, a3);
}
