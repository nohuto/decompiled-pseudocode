/*
 * XREFs of sub_180073330 @ 0x180073330
 * Callers:
 *     sub_1800733F4 @ 0x1800733F4 (sub_1800733F4.c)
 *     sub_1800734B8 @ 0x1800734B8 (sub_1800734B8.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_180073330(__int64 a1, float *a2, int a3)
{
  float *result; // rax
  float v4; // xmm1_4

  result = a2;
  v4 = (float)*(int *)(a1 + 12) / flt_180113078[a3];
  *a2 = (float)*(int *)(a1 + 8) / flt_180113078[a3];
  a2[1] = v4;
  return result;
}
