/*
 * XREFs of ?GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::GetScaledLetterboxingMargins(__int64 a1, struct MilRectF *a2)
{
  return CBitmapRealization::GetScaledLetterboxingMargins((CBitmapRealization *)(a1 - 360), a2);
}
