/*
 * XREFs of ?IsHardwareProtected@CD2DBitmap@@$4PPPPPPPM@BAI@EBA_NXZ @ 0x180123470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD2DBitmap::IsHardwareProtected(__int64 a1)
{
  return CD2DBitmap::IsHardwareProtected((CD2DBitmap *)(a1 - *(int *)(a1 - 4) - 264));
}
