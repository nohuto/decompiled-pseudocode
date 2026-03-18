/*
 * XREFs of ?GetBounds@CSurfaceBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180107B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::GetBounds(__int64 a1, const struct D2D_SIZE_F *a2, float *a3)
{
  return CSurfaceBrush::GetBounds(a1 - *(int *)(a1 - 4), a2, a3);
}
