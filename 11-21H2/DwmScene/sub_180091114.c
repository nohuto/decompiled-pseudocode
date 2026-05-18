/*
 * XREFs of sub_180091114 @ 0x180091114
 * Callers:
 *     sub_18004A1E0 @ 0x18004A1E0 (sub_18004A1E0.c)
 *     sub_180090D2C @ 0x180090D2C (sub_180090D2C.c)
 * Callees:
 *     sub_18008F5A4 @ 0x18008F5A4 (sub_18008F5A4.c)
 */

float *__fastcall sub_180091114(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_18008F5A4(a1, a2);
  *result = a3;
  return result;
}
