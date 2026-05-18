/*
 * XREFs of sub_180067E40 @ 0x180067E40
 * Callers:
 *     sub_180069D30 @ 0x180069D30 (sub_180069D30.c)
 *     sub_18009AD20 @ 0x18009AD20 (sub_18009AD20.c)
 * Callees:
 *     _o_powf @ 0x18000C05C (_o_powf.c)
 */

_DWORD *__fastcall sub_180067E40(int *a1, _DWORD *a2)
{
  int v3; // xmm0_4
  int v5; // xmm0_4
  int v6; // xmm0_4
  _DWORD *result; // rax

  v3 = *a1;
  o_powf();
  *a2 = v3;
  v5 = a1[1];
  o_powf();
  a2[1] = v5;
  v6 = a1[2];
  o_powf();
  a2[3] = a1[3];
  result = a2;
  a2[2] = v6;
  return result;
}
