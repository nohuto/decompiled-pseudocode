/*
 * XREFs of sub_180055398 @ 0x180055398
 * Callers:
 *     sub_1800553CC @ 0x1800553CC (sub_1800553CC.c)
 *     sub_180055408 @ 0x180055408 (sub_180055408.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180055398(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *result; // rax

  a1[3] = a5;
  a1[4] = a6;
  a1[5] = a7;
  a1[6] = a8;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
