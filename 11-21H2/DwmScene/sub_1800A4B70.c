/*
 * XREFs of sub_1800A4B70 @ 0x1800A4B70
 * Callers:
 *     sub_1800A4898 @ 0x1800A4898 (sub_1800A4898.c)
 * Callees:
 *     sub_1800A5274 @ 0x1800A5274 (sub_1800A5274.c)
 */

__int64 __fastcall sub_1800A4B70(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v8; // r14
  __int64 v9; // rsi
  char *v10; // rdx
  __int64 v11; // rbx
  char *v12; // rbx

  v5 = a5;
  if ( a4 < a5 )
  {
    v8 = 2 * a4;
    do
    {
      v9 = v5 - a4;
      v10 = &a1[8 * v8];
      v11 = v9;
      if ( v9 >= a4 )
        v11 = a4;
      v5 = v9 - v11;
      v12 = &v10[16 * v11];
      a3 = sub_1800A5274(a1, v10, v12, a3);
      a1 = v12;
    }
    while ( a4 < v5 );
  }
  return sub_1800A4C3C(a1);
}
