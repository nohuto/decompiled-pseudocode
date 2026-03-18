/*
 * XREFs of ?IsCloseRealZero@@YA_NMM@Z @ 0x1801B4C18
 * Callers:
 *     ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180135FCC (-GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsCloseRealZero(float a1, float a2)
{
  return a2 > COERCE_FLOAT(LODWORD(a1) & _xmm);
}
