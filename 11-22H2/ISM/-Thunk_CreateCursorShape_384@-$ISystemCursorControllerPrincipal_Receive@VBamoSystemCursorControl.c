/*
 * XREFs of ?Thunk_CreateCursorShape_384@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800681B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1801102A0 (-CreateCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDat.c)
 */

int __fastcall ISystemCursorControllerPrincipal_Receive<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::Thunk_CreateCursorShape_384(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoSystemCursorControllerPrincipalImpl::CreateCursorShape(
           a1,
           **(_QWORD **)a2,
           **(_QWORD **)(a2 + 8),
           *(const struct CursorBitmapDataHeader **)(a2 + 16),
           *(_DWORD *)(a2 + 24),
           *(const unsigned __int8 **)(a2 + 32),
           *(_DWORD *)(a2 + 40));
}
