/*
 * XREFs of ?Thunk_SetCursorShellMagnification_376@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18005BC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ISystemCursorControllerPrincipal_Receive<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::Thunk_SetCursorShellMagnification_376(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoSystemCursorControllerPrincipalImpl::SetCursorShellMagnification(
           a1,
           **(_QWORD **)a2,
           **(float **)(a2 + 8));
}
