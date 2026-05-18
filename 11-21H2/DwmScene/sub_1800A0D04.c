/*
 * XREFs of sub_1800A0D04 @ 0x1800A0D04
 * Callers:
 *     sub_18009F620 @ 0x18009F620 (sub_18009F620.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_1800A0D04(__int64 a1, float *a2, __int64 a3)
{
  unsigned int v3; // ecx
  float *result; // rax

  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4 * a3);
  *a2 = (float)BYTE2(v3) / 255.0;
  a2[1] = (float)BYTE1(v3) / 255.0;
  a2[2] = (float)(unsigned __int8)v3 / 255.0;
  result = a2;
  a2[3] = (float)HIBYTE(v3) / 255.0;
  return result;
}
