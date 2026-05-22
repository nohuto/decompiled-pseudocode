/*
 * XREFs of ?Thunk_OnMenuPressed_21@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801609C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMPCManagerClientPrincipal_Receive<BamoImpl::BamoMPCManagerClientPrincipalImpl>::Thunk_OnMenuPressed_21(
        __int64 a1,
        unsigned int **a2)
{
  return BamoImpl::BamoMPCManagerClientPrincipalImpl::OnMenuPressed(a1, **a2, *a2[1]);
}
