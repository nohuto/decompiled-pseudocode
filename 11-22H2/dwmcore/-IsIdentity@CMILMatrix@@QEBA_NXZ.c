/*
 * XREFs of ?IsIdentity@CMILMatrix@@QEBA_NXZ @ 0x18027062C
 * Callers:
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801361D6 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall CMILMatrix::IsIdentity(__int64 this)
{
  return CMILMatrix::IsIdentity<0>(this);
}
