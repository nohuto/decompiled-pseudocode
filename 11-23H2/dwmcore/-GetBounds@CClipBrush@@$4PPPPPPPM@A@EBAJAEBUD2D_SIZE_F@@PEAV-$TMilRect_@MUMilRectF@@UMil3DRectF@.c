/*
 * XREFs of ?GetBounds@CClipBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011DA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClipBrush::GetBounds(__int64 a1)
{
  return CClipBrush::GetBounds(a1 - *(int *)(a1 - 4));
}
