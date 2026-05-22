/*
 * XREFs of ?Release@BamoInputSystemPrincipal@@UEAAKXZ @ 0x180011650
 * Callers:
 *     ?Release@BamoHeatGripServicePrincipal@@W7EAAKXZ @ 0x18004EC40 (-Release@BamoHeatGripServicePrincipal@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputSystemPrincipal::Release(BamoInputSystemPrincipal *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
