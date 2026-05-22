/*
 * XREFs of ?Release@BamoHeatGripServicePrincipal@@W7EAAKXZ @ 0x18004EC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoHeatGripServicePrincipal::Release(__int64 a1)
{
  return BamoInputSystemPrincipal::Release((BamoInputSystemPrincipal *)(a1 - 8));
}
