/*
 * XREFs of sub_1800A4898 @ 0x1800A4898
 * Callers:
 *     sub_1800A542C @ 0x1800A542C (sub_1800A542C.c)
 * Callees:
 *     sub_1800A4B70 @ 0x1800A4B70 (sub_1800A4B70.c)
 *     sub_1800A50B0 @ 0x1800A50B0 (sub_1800A50B0.c)
 *     sub_1800A5598 @ 0x1800A5598 (sub_1800A5598.c)
 */

__int64 __fastcall sub_1800A4898(void *a1, int a2, __int64 a3, int a4)
{
  int v7; // ebp
  __int64 result; // rax
  int v9; // r9d
  __int64 i; // rsi
  __int64 v11; // rsi

  v7 = (int)a1;
  result = sub_1800A50B0(a1);
  if ( a3 > 32 )
  {
    sub_1800A5598(v7, a2, a4, v9, a3);
    result = sub_1800A4B70(a4, a4 + 16 * (int)a3, v7, 64, a3);
    for ( i = 128LL; a3 > i; i = 2 * v11 )
    {
      sub_1800A4B70(v7, a2, a4, i, a3);
      v11 = 2 * i;
      result = sub_1800A4B70(a4, a4 + 16 * (int)a3, v7, v11, a3);
    }
  }
  return result;
}
