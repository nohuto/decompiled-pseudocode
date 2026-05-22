/*
 * XREFs of ?Thunk_CreateCursorShape_343@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800EA320
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800E8A20 (-CreateCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDat.c)
 */

__int64 __fastcall ISystemCursorControllerPrincipal_Receive<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::Thunk_CreateCursorShape_343(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoSystemCursorControllerPrincipalImpl::CreateCursorShape(
           a1,
           **(_QWORD **)a2,
           **(_QWORD **)(a2 + 8),
           *(const struct CursorBitmapDataHeader **)(a2 + 16));
}
