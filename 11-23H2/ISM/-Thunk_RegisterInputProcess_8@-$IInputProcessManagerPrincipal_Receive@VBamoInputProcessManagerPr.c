/*
 * XREFs of ?Thunk_RegisterInputProcess_8@?$IInputProcessManagerPrincipal_Receive@VBamoInputProcessManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B4BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInputProcessManagerPrincipal_Receive<BamoImpl::BamoInputProcessManagerPrincipalImpl>::Thunk_RegisterInputProcess_8(
        BamoImpl::BamoInputProcessManagerPrincipalImpl *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoInputProcessManagerPrincipalImpl::RegisterInputProcess(a1, **a2);
}
