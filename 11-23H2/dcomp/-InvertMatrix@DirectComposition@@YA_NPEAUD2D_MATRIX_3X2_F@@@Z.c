/*
 * XREFs of ?InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z @ 0x18003197C
 * Callers:
 *     ?Rebuild@CTexturedRectanglePrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180008690 (-Rebuild@CTexturedRectanglePrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOc.c)
 *     ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z @ 0x180031750 (--0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 *     ?InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003BBC4 (-InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV-$TMilRect_@MUMilR.c)
 *     ?GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089DE0 (-GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::InvertMatrix(__m128 *this, struct D2D_MATRIX_3X2_F *a2)
{
  double v2; // xmm4_8
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  __m128 v8; // xmm6
  double v9; // xmm7_8
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  unsigned __int64 v18; // [rsp+10h] [rbp-38h]

  v2 = (float)((float)(this->m128_f32[0] * this->m128_f32[3]) - (float)(this->m128_f32[1] * this->m128_f32[2]));
  if ( COERCE_DOUBLE(*(_QWORD *)&v2 & _xmm) > 9.999999717180685e-10 )
  {
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(this->m128_f32[1]) & _xmm) > 9.999999717180685e-10
      || COERCE_DOUBLE(COERCE_UNSIGNED_INT64(this->m128_f32[2]) & _xmm) > 9.999999717180685e-10 )
    {
      v8 = *this;
      v18 = this[1].m128_u64[0];
      v9 = 1.0 / v2;
      v10 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
      v11 = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
      v12 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
      v13 = v11 * v9;
      this->m128_f32[0] = v13;
      v14 = COERCE_FLOAT(LODWORD(v12) ^ _xmm) * v9;
      this->m128_f32[1] = v14;
      v15 = COERCE_FLOAT(LODWORD(v10) ^ _xmm) * v9;
      this->m128_f32[2] = v15;
      v16 = v8.m128_f32[0] * v9;
      this->m128_f32[3] = v16;
      v17 = (float)((float)(*((float *)&v18 + 1) * v10) - (float)(*(float *)&v18 * v11)) * v9;
      this[1].m128_f32[0] = v17;
      v6 = (float)((float)(*(float *)&v18 * v12) - (float)(*((float *)&v18 + 1) * v8.m128_f32[0])) * v9;
      goto LABEL_7;
    }
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(this->m128_f32[0]) & _xmm) > 9.999999717180685e-10
      && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(this->m128_f32[3]) & _xmm) > 9.999999717180685e-10 )
    {
      v3 = 1.0 / this->m128_f32[0];
      v4 = 1.0 / this->m128_f32[3];
      v5 = COERCE_FLOAT(this[1].m128_i32[0] ^ _xmm) * v3;
      this->m128_f32[0] = v3;
      this->m128_f32[3] = v4;
      this[1].m128_f32[0] = v5;
      v6 = COERCE_FLOAT(this[1].m128_i32[1] ^ _xmm) * v4;
LABEL_7:
      this[1].m128_f32[1] = v6;
      return 1;
    }
  }
  return 0;
}
