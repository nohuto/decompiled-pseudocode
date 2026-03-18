/*
 * XREFs of ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x1800CABFC
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18001716C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CA7F8 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1801B17EC (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?IsPixelAligned@@YA_NM@Z @ 0x1800CAC54 (-IsPixelAligned@@YA_NM@Z.c)
 */

char __fastcall IsPixelAligned(const struct MilRectF *a1)
{
  char v1; // dl
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( IsPixelAligned(*(float *)a1)
    && IsPixelAligned(*(float *)(v2 + 4))
    && IsPixelAligned(*(float *)(v3 + 8))
    && IsPixelAligned(*(float *)(v4 + 12)) )
  {
    return 1;
  }
  return v1;
}
