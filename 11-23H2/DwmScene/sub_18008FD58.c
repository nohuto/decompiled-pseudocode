/*
 * XREFs of sub_18008FD58 @ 0x18008FD58
 * Callers:
 *     sub_1800904E0 @ 0x1800904E0 (sub_1800904E0.c)
 *     sub_180090FEC @ 0x180090FEC (sub_180090FEC.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_18008FD58(float *a1, unsigned int a2)
{
  float *result; // rax

  *a1 = (float)BYTE2(a2) / 255.0;
  a1[1] = (float)BYTE1(a2) / 255.0;
  a1[2] = (float)(unsigned __int8)a2 / 255.0;
  result = a1;
  a1[3] = (float)HIBYTE(a2) / 255.0;
  return result;
}
