/*
 * XREFs of ?Thunk_DestroyCursorShape_353@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800EA370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ISystemCursorControllerPrincipal_Receive<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::Thunk_DestroyCursorShape_353(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *a1,
        __int64 **a2)
{
  return BamoImpl::BamoSystemCursorControllerPrincipalImpl::DestroyCursorShape(a1, **a2, *a2[1]);
}
