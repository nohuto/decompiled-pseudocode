/*
 * XREFs of ?ScreenRectToRelative@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z @ 0x18014547C
 * Callers:
 *     ?ScreenRectToRelative@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x180145648 (-ScreenRectToRelative@CInputTransform@@SA-AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?ScreenPointToRelative@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z @ 0x18010073C (-ScreenPointToRelative@CInputTransform@@QEBA-AUTransformedPoint@@AEBU2@@Z.c)
 */

__int64 __fastcall CInputTransform::ScreenRectToRelative(float *a1, __int64 a2, float *a3)
{
  float v4; // xmm7_4
  float v5; // xmm6_4
  float *v6; // rax
  float v7; // xmm8_4
  float v8; // xmm9_4
  float *v9; // rcx
  __int64 v10; // r11
  float *v11; // rcx
  __int64 v12; // r11
  float *v13; // rcx
  float *v14; // rcx
  float *v15; // rax
  float *v16; // r10
  float *v17; // r9
  float *v18; // r11
  float v19; // xmm5_4
  float v20; // xmm3_4
  __int64 result; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v23[40]; // [rsp+28h] [rbp-48h] BYREF
  float v24; // [rsp+88h] [rbp+18h] BYREF
  float v25; // [rsp+8Ch] [rbp+1Ch]
  char v26; // [rsp+90h] [rbp+20h] BYREF
  char v27; // [rsp+98h] [rbp+28h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v4 = *a3;
  v5 = a3[1];
  v24 = (float)(a3[2] * 0.5) + *a3;
  v25 = (float)(a3[3] * 0.5) + v5;
  v6 = (float *)CInputTransform::ScreenPointToRelative(a1, (__int64)&v26, &v24);
  v24 = v4;
  v25 = v5;
  v7 = *v6;
  v8 = v6[1];
  CInputTransform::ScreenPointToRelative(v9, (__int64)&v26, &v24);
  v24 = v4 + *(float *)(v10 + 8);
  CInputTransform::ScreenPointToRelative(v11, (__int64)&v27, &v24);
  v25 = v5 + *(float *)(v12 + 12);
  CInputTransform::ScreenPointToRelative(v13, (__int64)v22, &v24);
  v24 = v4;
  v15 = (float *)CInputTransform::ScreenPointToRelative(v14, (__int64)v23, &v24);
  v19 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - *v17) & _xmm)
                              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - *v16) & _xmm))
                      + COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - *v18) & _xmm))
              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - *v15) & _xmm))
      * 0.25;
  v20 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - v17[1]) & _xmm)
                              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - v16[1]) & _xmm))
                      + COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - v18[1]) & _xmm))
              + COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - v15[1]) & _xmm))
      * 0.25;
  *(float *)a2 = v7 - v19;
  result = a2;
  *(float *)(a2 + 4) = v8 - v20;
  *(float *)(a2 + 12) = v20 + v20;
  *(float *)(a2 + 8) = v19 + v19;
  return result;
}
