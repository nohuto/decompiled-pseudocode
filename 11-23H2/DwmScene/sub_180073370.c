/*
 * XREFs of sub_180073370 @ 0x180073370
 * Callers:
 *     sub_1800733F4 @ 0x1800733F4 (sub_1800733F4.c)
 *     sub_1800734B8 @ 0x1800734B8 (sub_1800734B8.c)
 * Callees:
 *     _o_ceilf @ 0x18000BFFC (_o_ceilf.c)
 */

int *__fastcall sub_180073370(int *a1, __int64 a2)
{
  float v3; // xmm0_4
  int v4; // ebx
  int v5; // eax
  float v7; // [rsp+24h] [rbp-14h]

  v7 = *((float *)&a2 + 1);
  v3 = *(float *)&a2;
  o_ceilf();
  v4 = (int)v3;
  o_ceilf();
  v5 = (int)v7;
  if ( (int)v3 < 1 )
    v4 = 1;
  *a1 = v4;
  if ( v5 < 1 )
    v5 = 1;
  a1[1] = v5;
  return a1;
}
