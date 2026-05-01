/*
 * XREFs of HamRpcSrvServicingQueryActiveAppsInPackage @ 0x1800371C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvServicingQueryActiveAppsInPackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_CLIENT_PACKAGE_CONTEXT *a2,
        int a3,
        unsigned __int16 ***a4,
        unsigned int *a5)
{
  return HamSrvQueryActiveAppsInPackage(a1, a2, a3, a4, a5);
}
