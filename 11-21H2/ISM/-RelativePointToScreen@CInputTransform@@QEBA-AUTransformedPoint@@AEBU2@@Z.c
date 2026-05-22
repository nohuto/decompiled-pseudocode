/*
 * XREFs of ?RelativePointToScreen@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z @ 0x1800CF390
 * Callers:
 *     ?RelativePointToScreen@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800CF3FC (-RelativePointToScreen@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?RelativeRectToScreen@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z @ 0x18012AB78 (-RelativeRectToScreen@CInputTransform@@QEAA-AUTransformedRect@@AEBU2@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall CInputTransform::RelativePointToScreen(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm3_4
  float v5; // xmm1_4

  result = a2;
  v4 = (float)((float)(*a3 * a1[3]) + (float)(a3[1] * a1[7])) + a1[15];
  v5 = (float)((float)((float)(a3[1] * a1[4]) + (float)(*a3 * *a1)) + a1[12]) / v4;
  a2[1] = (float)((float)((float)(*a3 * a1[1]) + (float)(a3[1] * a1[5])) + a1[13]) / v4;
  *a2 = v5;
  return result;
}
