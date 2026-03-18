/*
 * XREFs of ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CC774
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180052010 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800523D0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180054020 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005BF70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800667E0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800690A0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x18006C510 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180053F2C (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180070318 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

char __fastcall CMILMatrix::IsTranslate<1>(__int64 a1)
{
  char v2; // al
  char v3; // bl
  bool v4; // dl
  _BYTE *v5; // r11
  char v6; // al
  bool v7; // cl
  float v8; // xmm5_4
  char v9; // al
  bool v10; // dl
  _BYTE *v12; // r11
  float v13; // xmm5_4
  float v14; // xmm5_4

  v2 = (char)(16 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v2 )
  {
    v3 = 1;
    v4 = v2 == 1;
  }
  else
  {
    v3 = 1;
    v4 = CMILMatrix::IsAffine<1>(a1, 0)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - v13) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - v13) & _xmm) < 0.000081380211;
    *(_BYTE *)(a1 + 65) &= 0xF3u;
    *(_BYTE *)(a1 + 65) |= (-4 - 8 * v4) & 0xC;
  }
  if ( !v4 )
    return 0;
  v5 = (_BYTE *)(a1 + 64);
  v6 = (char)(16 * *(_BYTE *)(a1 + 64)) >> 6;
  if ( v6 )
  {
    v7 = v6 == 1;
  }
  else
  {
    v7 = CMILMatrix::IsAffine<1>(a1, 1)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - v14) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - v14) & _xmm) < 0.000081380211;
    *v5 &= 0xF3u;
    *v5 |= (-4 - 8 * v7) & 0xC;
  }
  if ( !v7 )
    return 0;
  v8 = *(float *)&FLOAT_1_0;
  v9 = (char)(4 * *v5) >> 6;
  if ( v9 )
  {
    v10 = v9 == 1;
  }
  else
  {
    v10 = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a1)
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - v8) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - v8) & _xmm) < 0.000081380211;
    *v12 &= 0xCFu;
    *v12 |= (-16 - 32 * v10) & 0x30;
  }
  if ( !v10 || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - v8) & _xmm) >= 0.000081380211 )
    return 0;
  return v3;
}
