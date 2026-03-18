/*
 * XREFs of ?Release@CAtlasBitmapResource@@$4PPPPPPPM@A@EAAKXZ @ 0x180107DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasBitmapResource::Release(__int64 a1)
{
  return CAtlasBitmapResource::Release((CAtlasBitmapResource *)(a1 - *(int *)(a1 - 4)));
}
