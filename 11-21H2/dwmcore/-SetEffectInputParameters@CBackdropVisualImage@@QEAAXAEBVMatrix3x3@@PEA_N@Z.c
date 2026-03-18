/*
 * XREFs of ?SetEffectInputParameters@CBackdropVisualImage@@QEAAXAEBVMatrix3x3@@PEA_N@Z @ 0x1800D3F84
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 * Callees:
 *     ??8Matrix3x3@@QEBA_NAEBV0@@Z @ 0x1800D3FEC (--8Matrix3x3@@QEBA_NAEBV0@@Z.c)
 *     ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x1800D40B4 (-InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ.c)
 */

void __fastcall CBackdropVisualImage::SetEffectInputParameters(
        CBackdropVisualImage *this,
        const struct Matrix3x3 *a2,
        bool *a3)
{
  bool *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r8

  v4 = a3;
  LOBYTE(a3) = 0;
  if ( !(unsigned __int8)Matrix3x3::operator==((char *)this + 1916, a2, a3) )
  {
    *(_OWORD *)v6 = *(_OWORD *)v5;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v5 + 16);
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(v5 + 32);
    CBackdropVisualImage::InvalidateAllBlurCaches(this);
    v7 = 1;
  }
  *((_BYTE *)this + 1952) = 1;
  if ( v4 )
    *v4 = v7;
}
