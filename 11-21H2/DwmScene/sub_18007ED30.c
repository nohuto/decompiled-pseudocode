/*
 * XREFs of sub_18007ED30 @ 0x18007ED30
 * Callers:
 *     sub_18007EDF4 @ 0x18007EDF4 (sub_18007EDF4.c)
 *     sub_18007EEFC @ 0x18007EEFC (sub_18007EEFC.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_18007ED30(__int64 a1, float *a2, int a3)
{
  float *result; // rax
  float v4; // xmm1_4

  result = a2;
  v4 = (float)*(int *)(a1 + 12) / flt_180135010[a3];
  *a2 = (float)*(int *)(a1 + 8) / flt_180135010[a3];
  a2[1] = v4;
  return result;
}
