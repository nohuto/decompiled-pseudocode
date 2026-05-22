/*
 * XREFs of ?ComputeTransformedRectBoundsAxisAligned@DirectComposition@@YA?AUD2D_RECT_F@@AEBU2@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800322A0
 * Callers:
 *     ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z @ 0x180031750 (--0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 * Callees:
 *     <none>
 */

struct D2D_RECT_F *__fastcall DirectComposition::ComputeTransformedRectBoundsAxisAligned(
        DirectComposition *this,
        struct D2D_RECT_F *__return_ptr retstr,
        const struct D2D_RECT_F *a3,
        const struct D2D_MATRIX_3X2_F *a4)
{
  float v4; // xmm4_4
  float v5; // xmm1_4
  float v6; // xmm6_4
  float v7; // xmm5_4
  float top; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  DirectComposition *v11; // rdx
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm3_4

  v4 = a3->bottom * retstr->top;
  v5 = a3->bottom * retstr->bottom;
  v6 = (float)(a3->left * retstr->right) + (float)(a3->right * retstr->bottom);
  v7 = (float)(a3->right * retstr->top) + (float)(a3->left * retstr->left);
  top = a3->top;
  v9 = top * retstr->right;
  v10 = top * retstr->left;
  v11 = this;
  v12 = v7 + a3[1].left;
  v13 = v6 + a3[1].left;
  v14 = (float)(v4 + v10) + a3[1].top;
  v15 = (float)(v9 + v5) + a3[1].top;
  if ( v13 <= v12 )
  {
    *((float *)this + 2) = v12;
    v12 = v13;
  }
  else
  {
    *((float *)this + 2) = v13;
  }
  *(float *)this = v12;
  if ( v15 <= v14 )
  {
    *((float *)this + 1) = v15;
    v11 = this;
    *((float *)this + 3) = v14;
  }
  else
  {
    *((float *)this + 1) = v14;
    *((float *)this + 3) = v15;
  }
  return (struct D2D_RECT_F *)v11;
}
