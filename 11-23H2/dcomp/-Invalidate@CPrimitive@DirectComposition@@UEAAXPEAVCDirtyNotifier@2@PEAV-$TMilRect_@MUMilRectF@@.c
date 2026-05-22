/*
 * XREFs of ?Invalidate@CPrimitive@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F92D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CPrimitive::Invalidate(__m128 *a1, struct D2D_MATRIX_3X2_F *a2, __int64 a3)
{
  DirectComposition::CPrimitive::InvalidateHelper(a1 - 1, a2, a3, a1 + 6);
}
