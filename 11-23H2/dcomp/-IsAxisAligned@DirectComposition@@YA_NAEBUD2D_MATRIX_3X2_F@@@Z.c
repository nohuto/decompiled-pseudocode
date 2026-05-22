/*
 * XREFs of ?IsAxisAligned@DirectComposition@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003170C
 * Callers:
 *     ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z @ 0x180031750 (--0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 *     ?Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180085760 (-Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOcclu.c)
 *     ?GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089DE0 (-GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::IsAxisAligned(DirectComposition *this, const struct D2D_MATRIX_3X2_F *a2)
{
  return COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 1)) & _xmm) <= 9.999999717180685e-10
      && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm) <= 9.999999717180685e-10
      || COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)this) & _xmm) <= 9.999999717180685e-10
      && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm) <= 9.999999717180685e-10;
}
