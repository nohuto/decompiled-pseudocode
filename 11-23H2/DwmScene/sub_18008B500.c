/*
 * XREFs of sub_18008B500 @ 0x18008B500
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 *     sub_18008B34C @ 0x18008B34C (sub_18008B34C.c)
 */

__int64 *__fastcall sub_18008B500(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  int v8; // r11d
  int v9; // r10d
  int v10; // eax
  int v11; // r11d
  int v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF
  int v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a3;
  if ( a6 == 23 || a6 == 24 )
  {
    v10 = sub_1800488C8(a6);
    v9 = ((v11 + 1) & 0xFFFFFFFE) * v10;
  }
  else
  {
    v7 = sub_1800488C8(a6);
    v9 = v8 * v7;
  }
  v13 = v9;
  sub_18008B34C(a2, &v14, &v13, &v15, &a6, &a5);
  return a2;
}
