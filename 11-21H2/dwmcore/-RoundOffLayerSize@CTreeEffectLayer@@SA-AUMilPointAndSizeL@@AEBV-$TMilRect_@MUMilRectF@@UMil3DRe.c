/*
 * XREFs of ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DBAE0
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1801B3660 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     <none>
 */

int *__fastcall CTreeEffectLayer::RoundOffLayerSize(int *a1, __int64 a2)
{
  float v2; // xmm4_4
  int v3; // eax
  __m128 v4; // xmm2
  float v5; // xmm3_4
  int v6; // eax
  __m128 v7; // xmm2
  __m128 v8; // rt1
  __m128 v9; // xmm2
  float v10; // xmm0_4
  int v11; // eax
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  unsigned __int32 v14; // eax
  float v16; // [rsp+8h] [rbp+8h]
  float v17; // [rsp+8h] [rbp+8h]

  v2 = *(float *)a2;
  if ( (*(_DWORD *)a2 & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v4 = 0LL;
    v4.m128_f32[0] = (float)(int)v2 - v2;
    v3 = (int)v2 - _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v16 = v2 + 6291456.25;
    v3 = (int)(LODWORD(v16) << 10) >> 11;
  }
  v5 = *(float *)(a2 + 4);
  *a1 = v3;
  if ( (LODWORD(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7 = 0LL;
    v7.m128_f32[0] = (float)(int)v5 - v5;
    v8.m128_f32[0] = FLOAT_N0_5;
    v6 = (int)v5 - _mm_cmple_ss(v7, v8).m128_u32[0];
  }
  else
  {
    v17 = v5 + 6291456.25;
    v6 = (int)(LODWORD(v17) << 10) >> 11;
  }
  v9 = 0LL;
  v10 = *(float *)(a2 + 8) - v2;
  a1[1] = v6;
  v11 = (int)v10;
  v12.m128_f32[0] = v10;
  v13 = 0LL;
  v13.m128_f32[0] = (float)v11;
  v14 = v11 - _mm_cmplt_ss(v13, v12).m128_u32[0];
  v13.m128_i32[0] = *(_DWORD *)(a2 + 12);
  a1[2] = v14;
  v13.m128_f32[0] = v13.m128_f32[0] - v5;
  v9.m128_f32[0] = (float)(int)v13.m128_f32[0];
  a1[3] = (int)v13.m128_f32[0] - _mm_cmplt_ss(v9, v13).m128_u32[0];
  return a1;
}
