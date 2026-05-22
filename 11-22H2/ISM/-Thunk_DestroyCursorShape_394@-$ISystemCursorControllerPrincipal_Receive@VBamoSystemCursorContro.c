/*
 * XREFs of ?Thunk_DestroyCursorShape_394@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180068200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ISystemCursorControllerPrincipal_Receive<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::Thunk_DestroyCursorShape_394(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *a1,
        unsigned __int64 **a2)
{
  return BamoImpl::BamoSystemCursorControllerPrincipalImpl::DestroyCursorShape(a1, **a2, *a2[1]);
}
