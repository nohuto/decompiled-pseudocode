/*
 * XREFs of sub_18005C998 @ 0x18005C998
 * Callers:
 *     sub_18005C9CC @ 0x18005C9CC (sub_18005C9CC.c)
 *     sub_18005CA08 @ 0x18005CA08 (sub_18005CA08.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18005C998(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
