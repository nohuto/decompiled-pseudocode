/*
 * XREFs of gsl::final_action__lambda_f4147c70b2756a3d994ea7e0ab72763c___::_final_action__lambda_f4147c70b2756a3d994ea7e0ab72763c___ @ 0x1801AF3F4
 * Callers:
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IL@@@@Z @ 0x1801B07D0 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801B1BD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall gsl::final_action__lambda_f4147c70b2756a3d994ea7e0ab72763c___::_final_action__lambda_f4147c70b2756a3d994ea7e0ab72763c___(
        unsigned int **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    result = **a1;
    a1[1][77] = result;
  }
  return result;
}
