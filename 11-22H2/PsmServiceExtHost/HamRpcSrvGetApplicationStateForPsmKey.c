/*
 * XREFs of HamRpcSrvGetApplicationStateForPsmKey @ 0x180055780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall HamRpcSrvGetApplicationStateForPsmKey(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        enum _HAM_APPLICATION_EXECUTION_STATE *a5,
        enum _HAM_TERMINATE_REASON *a6)
{
  return HamSrvGetApplicationStateForPsmKey(a1, a2, a3, a4, a5, a6);
}
