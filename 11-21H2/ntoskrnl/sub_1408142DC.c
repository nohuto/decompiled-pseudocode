/*
 * XREFs of sub_1408142DC @ 0x1408142DC
 * Callers:
 *     sub_1403AAEF4 @ 0x1403AAEF4 (sub_1403AAEF4.c)
 *     sub_1409EA2D4 @ 0x1409EA2D4 (sub_1409EA2D4.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1408142DC(__int64 a1, unsigned int a2, __int128 *a3, unsigned __int16 a4)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  _OWORD *v6; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+38h] [rbp-40h]
  int v8; // [rsp+3Ch] [rbp-3Ch]
  _OWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+60h] [rbp-18h]

  v4 = *a3;
  v5 = a3[1];
  v6 = v9;
  v8 = 0;
  v10 = 85;
  v9[0] = v4;
  v7 = 36;
  v9[1] = v5;
  sub_1402AB170((__int64)&v6, a1, a2, 1u, a4, 0x401802u);
}
