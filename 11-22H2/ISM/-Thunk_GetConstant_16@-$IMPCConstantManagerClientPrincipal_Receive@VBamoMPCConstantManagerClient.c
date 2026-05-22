/*
 * XREFs of ?Thunk_GetConstant_16@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800BF9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMPCConstantManagerClientPrincipal_Receive<BamoImpl::BamoMPCConstantManagerClientPrincipalImpl>::Thunk_GetConstant_16(
        __int64 a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::GetConstant(
           a1,
           **(_DWORD **)a2,
           *(_QWORD *)(a2 + 8),
           **(_DWORD **)(a2 + 16));
}
