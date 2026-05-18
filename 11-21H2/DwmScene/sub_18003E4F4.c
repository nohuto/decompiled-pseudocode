/*
 * XREFs of sub_18003E4F4 @ 0x18003E4F4
 * Callers:
 *     sub_18003E248 @ 0x18003E248 (sub_18003E248.c)
 * Callees:
 *     sub_18003ED90 @ 0x18003ED90 (sub_18003ED90.c)
 */

__int64 __fastcall sub_18003E4F4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rbx

  v6 = a5;
  if ( a4 < a5 )
  {
    v10 = 2 * a4;
    do
    {
      v11 = v6 - a4;
      v12 = a1 + 8 * v10;
      v13 = v11;
      if ( v11 >= a4 )
        v13 = a4;
      v6 = v11 - v13;
      v14 = v12 + 16 * v13;
      a3 = sub_18003ED90(a1, v12, v14, a3, a6);
      a1 = v14;
    }
    while ( a4 < v6 );
  }
  return sub_18003EE90(a1, a2, a3);
}
