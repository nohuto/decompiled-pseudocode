/*
 * XREFs of sub_180083864 @ 0x180083864
 * Callers:
 *     sub_180044C24 @ 0x180044C24 (sub_180044C24.c)
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 * Callees:
 *     sub_180082034 @ 0x180082034 (sub_180082034.c)
 */

float *__fastcall sub_180083864(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_180082034(a1, a2);
  *result = a3;
  return result;
}
