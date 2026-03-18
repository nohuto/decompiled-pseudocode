/*
 * XREFs of ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180059980
 * Callers:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180059A10 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057A54 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

char __fastcall D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  float *v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // r8
  __int64 v7; // r9
  __int64 v8; // xmm1_8
  float v9; // xmm3_4
  int v10; // xmm1_4
  float v11; // xmm0_4
  bool v12; // cc
  int v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4

  if ( !D2DMatrixHelper::Is2DAxisAlignedPreserving(this, a2) )
    return 0;
  v8 = *(_QWORD *)(v5 + 16);
  LODWORD(v9) = *(_DWORD *)v5 & _xmm;
  *(_OWORD *)v7 = *(_OWORD *)v5;
  *(_QWORD *)(v7 + 16) = v8;
  v10 = *(_DWORD *)(v5 + 12);
  if ( v9 >= 0.000081380211 || COERCE_FLOAT(v10 & _xmm) >= 0.000081380211 )
  {
    *v4 = v9;
    *v6 = v10 & _xmm;
    if ( *(float *)v7 < 0.0 )
      v11 = FLOAT_N1_0;
    else
      v11 = *(float *)&FLOAT_1_0;
    v12 = *(float *)(v7 + 12) >= 0.0;
    *(float *)v7 = v11;
    if ( v12 )
      *(_DWORD *)(v7 + 12) = 1065353216;
    else
      *(_DWORD *)(v7 + 12) = -1082130432;
  }
  else
  {
    v12 = *(float *)(v7 + 4) >= 0.0;
    v14 = *(_DWORD *)(v5 + 8) & _xmm;
    *(_DWORD *)v4 = *(_DWORD *)(v5 + 4) & _xmm;
    v15 = FLOAT_N1_0;
    *v6 = v14;
    if ( v12 )
      v16 = *(float *)&FLOAT_1_0;
    else
      v16 = FLOAT_N1_0;
    v12 = *(float *)(v7 + 8) >= 0.0;
    *(float *)(v7 + 4) = v16;
    if ( v12 )
      v15 = *(float *)&FLOAT_1_0;
    *(float *)(v7 + 8) = v15;
  }
  return 1;
}
