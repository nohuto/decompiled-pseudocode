/*
 * XREFs of ??$ComputeTransformedRectBounds@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@DirectComposition@@YA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV1@AEBUD2D_MATRIX_3X2_F@@PEAUD2D_POINT_2F@@@Z @ 0x18003BEF8
 * Callers:
 *     ?InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003BBC4 (-InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV-$TMilRect_@MUMilR.c)
 *     ?Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003BC88 (-Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ?GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089DE0 (-GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::ComputeTransformedRectBounds<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        __int64 a1,
        __int64 a2,
        float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm2_4
  int v5; // xmm0_4
  float v6; // xmm5_4
  int v7; // xmm1_4
  __int64 v8; // rdx
  float *v9; // rax
  float v10; // xmm5_4
  float v11; // xmm0_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm6_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  _DWORD v29[6]; // [rsp+8h] [rbp-50h] BYREF

  v3 = *(float *)(a2 + 4);
  v4 = *(float *)a2;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(float *)a2;
  v7 = *(_DWORD *)(a2 + 12);
  v8 = 3LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v9 = (float *)v29;
  v10 = v6 * *a3;
  *(float *)&v29[1] = v3;
  v29[0] = v5;
  v29[2] = v5;
  v11 = v3;
  v12 = v3 * a3[3];
  v13 = v11 * a3[2];
  *(float *)&v29[4] = v4;
  v14 = v4 * a3[1];
  v29[3] = v7;
  v29[5] = v7;
  v15 = (float)(v10 + v13) + a3[4];
  v16 = (float)(v12 + v14) + a3[5];
  *(float *)a1 = v15;
  v17 = v15;
  *(float *)(a1 + 8) = v15;
  *(float *)(a1 + 4) = v16;
  v18 = v16;
  *(float *)(a1 + 12) = v16;
  do
  {
    v19 = *v9;
    v20 = v9[1];
    v21 = *v9;
    v9 += 2;
    v22 = v17;
    v23 = (float)((float)(v21 * *a3) + (float)(v20 * a3[2])) + a3[4];
    v24 = fmaxf(v23, v15);
    v17 = fminf(v23, v22);
    v25 = (float)((float)(v19 * a3[1]) + (float)(v20 * a3[3])) + a3[5];
    v26 = fmaxf(v25, v18);
    v27 = fminf(v25, v16);
    *(float *)(a1 + 8) = v24;
    v15 = v24;
    *(float *)a1 = v17;
    *(float *)(a1 + 12) = v26;
    v18 = v26;
    *(float *)(a1 + 4) = v27;
    v16 = v27;
    --v8;
  }
  while ( v8 );
  return a1;
}
