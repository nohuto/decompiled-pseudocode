/*
 * XREFs of sub_1405DC12C @ 0x1405DC12C
 * Callers:
 *     sub_1409A4620 @ 0x1409A4620 (sub_1409A4620.c)
 * Callees:
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 *     sub_1407FE700 @ 0x1407FE700 (sub_1407FE700.c)
 */

__int64 __fastcall sub_1405DC12C(__int64 a1)
{
  char v1; // bl
  int v3; // [rsp+20h] [rbp-30h] BYREF
  char v4; // [rsp+24h] [rbp-2Ch]
  __int16 v5; // [rsp+25h] [rbp-2Bh]
  char v6; // [rsp+27h] [rbp-29h]
  __int64 v7; // [rsp+28h] [rbp-28h]
  char *v8; // [rsp+30h] [rbp-20h]
  __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  char v11; // [rsp+60h] [rbp+10h] BYREF
  int v12; // [rsp+68h] [rbp+18h] BYREF

  v1 = a1;
  v12 = 0;
  LOBYTE(a1) = 1;
  sub_1407FE700(a1, &v12);
  v11 = v1;
  v8 = &v11;
  v5 = 0;
  v6 = 0;
  v7 = 1LL;
  v9 = 0LL;
  v3 = 8;
  v4 = 0;
  v10 = 0LL;
  ((void (__fastcall *)(__int64, int *, __int64, int *))sub_1407F2AD0)(5LL, &v3, 1LL, &v12);
  return sub_1407FE700(0LL, &v12);
}
