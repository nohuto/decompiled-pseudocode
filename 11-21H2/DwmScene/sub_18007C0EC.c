/*
 * XREFs of sub_18007C0EC @ 0x18007C0EC
 * Callers:
 *     sub_18007C0A0 @ 0x18007C0A0 (sub_18007C0A0.c)
 *     sub_18007C0EC @ 0x18007C0EC (sub_18007C0EC.c)
 * Callees:
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_18007BDD4 @ 0x18007BDD4 (sub_18007BDD4.c)
 *     sub_18007C0EC @ 0x18007C0EC (sub_18007C0EC.c)
 */

__int64 __fastcall sub_18007C0EC(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v7; // rbx
  __int64 result; // rax
  char *v9; // rdx
  _QWORD *v10; // rbp
  _QWORD *i; // rbx
  int v12; // [rsp+20h] [rbp-18h]
  _QWORD *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = (_QWORD *)a2;
  v7 = (_QWORD *)a2;
  sub_180043668(a2);
  result = v7[56] & a3[66];
  if ( result == a3[65] )
  {
    sub_180043668((__int64)v7);
    if ( (v7[56] & a3[64]) == a3[63] )
    {
      v9 = (char *)a4[1];
      if ( v9 == (char *)a4[2] )
      {
        sub_18007BDD4(a4, v9, &v13);
        v7 = v13;
      }
      else
      {
        *(_QWORD *)v9 = v7;
        a4[1] += 8LL;
      }
    }
    result = sub_180043668((__int64)v7);
    v10 = (_QWORD *)v7[5];
    for ( i = (_QWORD *)v7[4]; i != v10; i += 2 )
      result = sub_18007C0EC(a1, *i, a3, a4, v12);
  }
  return result;
}
