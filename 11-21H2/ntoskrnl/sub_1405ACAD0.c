/*
 * XREFs of sub_1405ACAD0 @ 0x1405ACAD0
 * Callers:
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 * Callees:
 *     sub_14026EDE4 @ 0x14026EDE4 (sub_14026EDE4.c)
 *     sub_1403C2C58 @ 0x1403C2C58 (sub_1403C2C58.c)
 */

void __fastcall sub_1405ACAD0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  int i; // ebp

  if ( (_DWORD)a4 )
  {
    v5 = a5;
    for ( i = a4; v5; --v5 )
    {
      if ( i == 1 )
      {
        sub_14026EDE4(a2, a3, 1);
      }
      else if ( (unsigned int)(i - 2) <= 1 )
      {
        sub_1403C2C58(a1, a2, a3, a4);
      }
      else
      {
        *a2 = a3;
      }
      if ( (a3 & 1) != 0 )
        a3 ^= (a3 ^ (a3 + 4096)) & 0xFFFFFFFFFF000LL;
      ++a2;
    }
  }
}
