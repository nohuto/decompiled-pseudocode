/*
 * XREFs of ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x18001430C
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180025B78 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180029740 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18010ECDC (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x18010ED5C (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 */

struct D2DMatrix *__fastcall D2DMatrixTransformation2D(
        struct D2DMatrix *a1,
        const struct D2DVector2 *a2,
        float a3,
        const struct D2DVector2 *a4,
        const struct D2DVector2 *a5,
        float a6,
        const struct D2DVector2 *a7)
{
  float *v9; // rdi
  float *v10; // rsi
  int v12; // xmm1_4
  int v13; // xmm0_4
  const struct D2DMatrix *v14; // rdx
  const struct D2DMatrix *v15; // rdx
  struct D2DMatrix *v16; // rcx
  const struct D2DMatrix *v17; // rdx
  float v18; // xmm1_4
  float *v19; // r9
  float v20; // xmm0_4
  _DWORD v21[16]; // [rsp+28h] [rbp-C1h] BYREF
  _BYTE v22[64]; // [rsp+68h] [rbp-81h] BYREF
  _BYTE v23[64]; // [rsp+A8h] [rbp-41h] BYREF

  if ( !a4 )
  {
    *((_QWORD *)a1 + 5) = 1065353216LL;
    v10 = (float *)((char *)a1 + 52);
    *((_DWORD *)a1 + 5) = 1065353216;
    v9 = (float *)((char *)a1 + 48);
    *((_DWORD *)a1 + 13) = 0;
    *((_DWORD *)a1 + 12) = 0;
    *(_DWORD *)a1 = 1065353216;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *(_QWORD *)((char *)a1 + 12) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    goto LABEL_5;
  }
  if ( a3 == 0.0 )
  {
    *((_DWORD *)a1 + 11) = 0;
    v9 = (float *)((char *)a1 + 48);
    *((_QWORD *)a1 + 4) = 0LL;
    v10 = (float *)((char *)a1 + 52);
    *((_QWORD *)a1 + 3) = 0LL;
    *(_QWORD *)((char *)a1 + 12) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    if ( !a2 )
    {
      *((_DWORD *)a1 + 14) = 0;
      *v10 = 0.0;
      *v9 = 0.0;
      *(_DWORD *)a1 = *(_DWORD *)a4;
      *((_DWORD *)a1 + 5) = *((_DWORD *)a4 + 1);
      *((_DWORD *)a1 + 10) = 1065353216;
      goto LABEL_6;
    }
    *(_DWORD *)a1 = *(_DWORD *)a4;
    *((_DWORD *)a1 + 5) = *((_DWORD *)a4 + 1);
    *((_DWORD *)a1 + 10) = 1065353216;
    *v9 = (float)(1.0 - *(float *)a4) * *(float *)a2;
    *v10 = (float)(1.0 - *((float *)a4 + 1)) * *((float *)a2 + 1);
LABEL_5:
    *((_DWORD *)a1 + 14) = 0;
LABEL_6:
    *((_DWORD *)a1 + 15) = 1065353216;
    goto LABEL_7;
  }
  v12 = *((_DWORD *)a4 + 1);
  v13 = *(_DWORD *)a4;
  v21[14] = 0;
  v21[13] = 0;
  v21[12] = 0;
  v21[11] = 0;
  v21[9] = 0;
  v21[8] = 0;
  v21[7] = 0;
  v21[6] = 0;
  v21[4] = 0;
  v21[3] = 0;
  v21[2] = 0;
  v21[1] = 0;
  v21[5] = v12;
  v21[0] = v13;
  v21[10] = 1065353216;
  v21[15] = 1065353216;
  D2DMatrixRotationZ((struct D2DMatrix *)v22, a3);
  if ( a2 )
  {
    D2DMatrixTranspose((struct D2DMatrix *)v23, (const struct D2DMatrix *)v22);
    *((_DWORD *)a1 + 14) = 0;
    *((_DWORD *)a1 + 15) = 1065353216;
    v10 = (float *)((char *)a1 + 52);
    *((_DWORD *)a1 + 13) = 0;
    v9 = (float *)((char *)a1 + 48);
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 5) = 1065353216;
    *(_DWORD *)a1 = 1065353216;
    *((_QWORD *)a1 + 5) = 1065353216LL;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *(_QWORD *)((char *)a1 + 12) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    *((float *)a1 + 12) = 0.0 - *(float *)a2;
    *((float *)a1 + 13) = 0.0 - *((float *)a2 + 1);
    D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v23);
    D2DMatrixMultiply(a1, v14, (const struct D2DMatrix *)v21);
    D2DMatrixMultiply(a1, v15, (const struct D2DMatrix *)v22);
    *((float *)a1 + 12) = *(float *)a2 + *((float *)a1 + 12);
    *((float *)a1 + 13) = *((float *)a2 + 1) + *((float *)a1 + 13);
  }
  else
  {
    D2DMatrixTranspose(a1, (const struct D2DMatrix *)v22);
    D2DMatrixMultiply(v16, a1, (const struct D2DMatrix *)v21);
    D2DMatrixMultiply(a1, v17, (const struct D2DMatrix *)v22);
    v9 = (float *)((char *)a1 + 48);
    v10 = (float *)((char *)a1 + 52);
  }
LABEL_7:
  if ( a6 != 0.0 )
  {
    D2DMatrixRotationZ((struct D2DMatrix *)v22, a6);
    if ( a5 )
    {
      v18 = *v10;
      *v9 = *v9 - *(float *)a5;
      *v10 = v18 - *((float *)a5 + 1);
      D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v22);
      v20 = *v10;
      *v9 = *v9 + *v19;
      *v10 = v20 + v19[1];
    }
    else
    {
      D2DMatrixMultiply(a1, a1, (const struct D2DMatrix *)v22);
    }
  }
  if ( a7 )
  {
    *v9 = *v9 + *(float *)a7;
    *v10 = *((float *)a7 + 1) + *v10;
  }
  return a1;
}
