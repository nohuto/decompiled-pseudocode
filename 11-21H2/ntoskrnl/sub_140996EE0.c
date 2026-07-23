/*
 * XREFs of sub_140996EE0 @ 0x140996EE0
 * Callers:
 *     sub_140997374 @ 0x140997374 (sub_140997374.c)
 *     sub_1409973C0 @ 0x1409973C0 (sub_1409973C0.c)
 * Callees:
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 *     sub_1409A4AE0 @ 0x1409A4AE0 (sub_1409A4AE0.c)
 */

__int64 __fastcall sub_140996EE0(unsigned int *a1, unsigned int a2)
{
  int v5; // [rsp+20h] [rbp-30h] BYREF
  char v6; // [rsp+24h] [rbp-2Ch]
  __int16 v7; // [rsp+25h] [rbp-2Bh]
  char v8; // [rsp+27h] [rbp-29h]
  __int64 v9; // [rsp+28h] [rbp-28h]
  unsigned int *v10; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  unsigned int v13; // [rsp+68h] [rbp+18h] BYREF

  v13 = a2;
  if ( sub_1407F0F98() )
    return sub_1409A4AE0(a2, a1[1], *a1);
  v7 = 0;
  v8 = 0;
  v11 = 0LL;
  v6 = 0;
  v12 = 0LL;
  v9 = 8LL;
  v5 = 3;
  v10 = a1;
  return sub_1407F2AD0(5, (__int64)&v5, 1, &v13);
}
