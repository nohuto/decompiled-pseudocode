/*
 * XREFs of ?Thunk_GetConstantsForInputType_21@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180096A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMPCConstantManagerClientPrincipal_Receive<BamoImpl::BamoMPCConstantManagerClientPrincipalImpl>::Thunk_GetConstantsForInputType_21(
        __int64 a1,
        unsigned int **a2)
{
  return BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::GetConstantsForInputType(a1, **a2, *a2[1]);
}
