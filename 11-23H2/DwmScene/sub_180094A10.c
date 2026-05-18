/*
 * XREFs of sub_180094A10 @ 0x180094A10
 * Callers:
 *     sub_1800947A0 @ 0x1800947A0 (sub_1800947A0.c)
 * Callees:
 *     sub_180095108 @ 0x180095108 (sub_180095108.c)
 */

__int64 __fastcall sub_180094A10(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
      a3 = sub_180095108(a1, v10, v12, a3);
      a1 = v12;
    }
    while ( a4 < v5 );
  }
  return sub_180094ACC(a1);
}
