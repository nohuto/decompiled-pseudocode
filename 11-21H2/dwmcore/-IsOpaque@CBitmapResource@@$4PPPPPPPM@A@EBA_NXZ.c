/*
 * XREFs of ?IsOpaque@CBitmapResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x1801061B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapResource::IsOpaque(__int64 a1)
{
  return CBitmapResource::IsOpaque((CBitmapResource *)(a1 - *(int *)(a1 - 4)));
}
