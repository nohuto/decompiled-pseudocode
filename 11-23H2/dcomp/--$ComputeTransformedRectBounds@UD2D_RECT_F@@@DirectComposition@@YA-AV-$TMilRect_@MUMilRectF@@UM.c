/*
 * XREFs of ??$ComputeTransformedRectBounds@UD2D_RECT_F@@@DirectComposition@@YA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAUD2D_POINT_2F@@@Z @ 0x180004824
 * Callers:
 *     ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z @ 0x180031750 (--0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 *     ?EtwLogPrimitives@CPrimitiveGroup@DirectComposition@@AEAAXPEBUBatchedOccluder@2@@Z @ 0x1800F9BC4 (-EtwLogPrimitives@CPrimitiveGroup@DirectComposition@@AEAAXPEBUBatchedOccluder@2@@Z.c)
 *     ?SetRect@CTexturedRectanglePrimitive@DirectComposition@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800FD004 (-SetRect@CTexturedRectanglePrimitive@DirectComposition@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

float *__fastcall DirectComposition::ComputeTransformedRectBounds<D2D_RECT_F>(
        float *a1,
        __int64 a2,
        float *a3,
        float *a4)
{
  float v4; // xmm3_4
  float v5; // xmm2_4
  int v6; // xmm0_4
  int v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  __int64 v13; // r11
  char *v14; // rdx
  char *v15; // r10
  float *v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  _DWORD v24[2]; // [rsp+0h] [rbp-38h] BYREF
  _DWORD v25[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(float *)a2;
  v5 = *(float *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 12);
  *a1 = 0.0;
  a1[1] = 0.0;
  a1[2] = 0.0;
  a1[3] = 0.0;
  v25[3] = v7;
  v25[5] = v7;
  v8 = v4 * *a3;
  *(float *)v24 = v4;
  *(float *)&v25[4] = v4;
  v9 = v4 * a3[1];
  v25[0] = v6;
  v25[2] = v6;
  v10 = v5 * a3[2];
  *(float *)&v24[1] = v5;
  *(float *)&v25[1] = v5;
  v11 = (float)(v8 + v10) + a3[4];
  v12 = (float)(v9 + (float)(v5 * a3[3])) + a3[5];
  *a1 = v11;
  a1[2] = v11;
  a1[1] = v12;
  a1[3] = v12;
  if ( a4 )
  {
    *a4 = v11;
    a4[1] = v12;
  }
  v13 = 3LL;
  v14 = (char *)((char *)v24 - (char *)a4);
  v15 = (char *)((char *)v25 - (char *)a4);
  v16 = a4 + 3;
  do
  {
    v17 = (float)((float)(*(float *)((char *)v16 + (_QWORD)v15 - 12) * *a3)
                + (float)(*(float *)((char *)v16 + (_QWORD)v14) * a3[2]))
        + a3[4];
    v18 = (float)((float)(*(float *)((char *)v16 + (_QWORD)v14) * a3[3])
                + (float)(*(float *)((char *)v16 + (_QWORD)v15 - 12) * a3[1]))
        + a3[5];
    if ( a4 )
    {
      *(v16 - 1) = v17;
      *v16 = v18;
    }
    v19 = fminf(v17, *a1);
    v20 = fminf(v18, a1[1]);
    v21 = fmaxf(v17, a1[2]);
    v22 = fmaxf(v18, a1[3]);
    v16 += 2;
    *a1 = v19;
    a1[1] = v20;
    a1[2] = v21;
    a1[3] = v22;
    --v13;
  }
  while ( v13 );
  return a1;
}
