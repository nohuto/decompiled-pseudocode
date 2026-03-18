/*
 * XREFs of ?Release@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801BA490
 * Callers:
 *     ?Release@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x18011B950 (-Release@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ.c)
 *     ?Release@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x18011B970 (-Release@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::Release(
        Microsoft::BamoImpl::BamoImplObject *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return Microsoft::BamoImpl::BamoImplObject::Release(this, a2, a3, a4);
}
