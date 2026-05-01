/*
 * XREFs of HamRpcSrvIsHostBeingDebugged @ 0x18007AE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvIsHostBeingDebugged(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct _HAM_CLIENT_CONTEXT *a7,
        bool *a8)
{
  return HamSrvIsHostBeingDebugged(a1, a2, a3, a4, a5, a6, a7, a8);
}
