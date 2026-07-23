/*
 * XREFs of sub_1409C03F8 @ 0x1409C03F8
 * Callers:
 *     sub_140972980 @ 0x140972980 (sub_140972980.c)
 *     sub_1409745FC @ 0x1409745FC (sub_1409745FC.c)
 *     sub_140976D80 @ 0x140976D80 (sub_140976D80.c)
 *     sub_1409C0794 @ 0x1409C0794 (sub_1409C0794.c)
 * Callees:
 *     sub_140A6C408 @ 0x140A6C408 (sub_140A6C408.c)
 */

char __fastcall sub_1409C03F8(__int64 a1, unsigned int a2, unsigned __int16 a3, unsigned int *a4, unsigned int *a5)
{
  int v7; // ecx
  int v9; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v10[5]; // [rsp+24h] [rbp-14h] BYREF

  v10[0] = 0;
  v9 = 0;
  if ( !(unsigned __int8)sub_140A6C408(a1, a3, &v9, v10) || v9 < 0 && -v9 > a2 )
    return 0;
  v7 = v10[0] - 1;
  *a4 = (v9 + a2) >> 12;
  *a5 = (a2 + v7) >> 12;
  return 1;
}
