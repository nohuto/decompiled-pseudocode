/*
 * XREFs of HamRpcSrvTerminateIfSuspendedByProcess @ 0x18007AE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvTerminateIfSuspendedByProcess(
        struct _HAM_CLIENT_CONTEXT *a1,
        void *a2,
        unsigned __int8 *a3)
{
  return HamSrvTerminateIfSuspendedByProcess(a1, a2, a3);
}
