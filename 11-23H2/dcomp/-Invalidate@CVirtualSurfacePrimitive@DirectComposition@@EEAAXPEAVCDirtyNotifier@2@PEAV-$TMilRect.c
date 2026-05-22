/*
 * XREFs of ?Invalidate@CVirtualSurfacePrimitive@DirectComposition@@EEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003B730
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003BBC4 (-InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV-$TMilRect_@MUMilR.c)
 */

void __fastcall DirectComposition::CVirtualSurfacePrimitive::Invalidate(__int64 a1, __int64 a2, __int64 a3)
{
  DirectComposition::CVirtualSurfacePrimitive *v3; // rbx

  v3 = (DirectComposition::CVirtualSurfacePrimitive *)(a1 - 16);
  DirectComposition::CPrimitive::InvalidateHelper(a1 - 16, a2, a3, a1 + 216);
  DirectComposition::CVirtualSurfacePrimitive::FreeRealization(v3);
}
