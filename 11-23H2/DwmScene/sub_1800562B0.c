/*
 * XREFs of sub_1800562B0 @ 0x1800562B0
 * Callers:
 *     sub_180056398 @ 0x180056398 (sub_180056398.c)
 * Callees:
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 *     sub_180054FB4 @ 0x180054FB4 (sub_180054FB4.c)
 *     sub_180056764 @ 0x180056764 (sub_180056764.c)
 *     sub_1800567A0 @ 0x1800567A0 (sub_1800567A0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800562B0(_QWORD *a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // r15
  int v9; // [rsp+44h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int64 v11[3]; // [rsp+50h] [rbp-18h] BYREF
  int v12; // [rsp+A8h] [rbp+40h] BYREF
  int v13; // [rsp+B0h] [rbp+48h] BYREF
  int v14; // [rsp+B8h] [rbp+50h] BYREF

  v5 = (a2[5] & 0x10) != 0 ? 6LL : 1LL;
  v6 = a3 / v5;
  v10 = a3 / v5;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v12 = 0;
    v13 = sub_1800567A0(a2[4], *a2, a2[1]);
    v14 = sub_180056764(a2[4], *a2);
    v9 = sub_1800488C8(a2[4]);
    v11[0] = v6 * v7;
    sub_180054FB4((__int64)a1, (__int64 *)v11, &v10, &v9, &v14, &v13, &v12);
    if ( ++v7 >= v5 )
      break;
    v6 = v10;
  }
  return a1;
}
