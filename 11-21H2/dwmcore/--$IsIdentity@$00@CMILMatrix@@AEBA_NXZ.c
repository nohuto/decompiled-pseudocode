/*
 * XREFs of ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A6DC0
 * Callers:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801B2258 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x1801D8290 (-RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

bool __fastcall CMILMatrix::IsIdentity<1>(__int64 a1)
{
  char v2; // al
  int v3; // xmm5_4
  char v4; // al
  bool v5; // dl
  char v6; // dl
  char v7; // al
  char v8; // al
  char v9; // r10
  char v10; // al
  bool v11; // r9
  bool v12; // cl
  bool result; // al

  v2 = (char)(*(_BYTE *)(a1 + 64) << 6) >> 6;
  if ( !v2 )
  {
    v3 = _xmm;
    v4 = (char)(16 * *(_BYTE *)(a1 + 65)) >> 6;
    if ( v4 )
    {
      v5 = v4 == 1;
    }
    else
    {
      v5 = CMILMatrix::IsAffine<1>(a1, 0)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & v3) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & v3) < 0.000081380211;
      *(_BYTE *)(a1 + 65) &= 0xF3u;
      *(_BYTE *)(a1 + 65) |= (-4 - 8 * v5) & 0xC;
    }
    if ( !v5 )
      goto LABEL_21;
    v6 = *(_BYTE *)(a1 + 64);
    v7 = (char)(16 * v6) >> 6;
    if ( v7 )
    {
      if ( v7 != 1 )
        goto LABEL_21;
    }
    else
    {
      if ( !CMILMatrix::IsAffine<1>(a1, 1)
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & v3) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & v3) >= 0.000081380211 )
      {
        *(_BYTE *)(a1 + 64) |= 0xCu;
        goto LABEL_21;
      }
      v6 = *(_BYTE *)(a1 + 64) & 0xF3 | 4;
      *(_BYTE *)(a1 + 64) = v6;
    }
    v8 = (char)(4 * v6) >> 6;
    if ( v8 )
    {
      v12 = v8 == 1;
      goto LABEL_19;
    }
    if ( v6 >> 6 )
    {
      if ( v6 >> 6 != 1 )
        goto LABEL_29;
    }
    else
    {
      v9 = *(_BYTE *)(a1 + 65);
      v10 = (char)(4 * v9) >> 6;
      if ( v10 )
      {
        v11 = v10 == 1;
      }
      else
      {
        v11 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v3) * 61440.0)
                                           + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v3) * 61440.0))
                                   + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v3))
                           - 1.0) & v3) < 0.000081380211;
        *(_BYTE *)(a1 + 65) = v9 ^ (v9 ^ (-16 - 32 * v11)) & 0x30;
      }
      if ( !v11
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & v3) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & v3) >= 0.000081380211 )
      {
        v6 |= 0xC0u;
        goto LABEL_29;
      }
      v6 = v6 & 0x3F | 0x40;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & v3) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & v3) < 0.000081380211 )
    {
      v12 = 1;
LABEL_18:
      *(_BYTE *)(a1 + 64) = v6 ^ (v6 ^ (-16 - 32 * v12)) & 0x30;
LABEL_19:
      if ( v12
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - 1.0) & v3) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 48) - 0.0) & v3) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 52) - 0.0) & v3) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 56) - 0.0) & v3) < 0.000081380211 )
      {
        result = 1;
        goto LABEL_22;
      }
LABEL_21:
      result = 0;
LABEL_22:
      *(_BYTE *)(a1 + 64) &= 0xFCu;
      *(_BYTE *)(a1 + 64) |= (-1 - 2 * result) & 3;
      return result;
    }
LABEL_29:
    v12 = 0;
    goto LABEL_18;
  }
  return v2 == 1;
}
