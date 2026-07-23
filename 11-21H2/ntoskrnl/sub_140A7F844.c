/*
 * XREFs of sub_140A7F844 @ 0x140A7F844
 * Callers:
 *     sub_140A7C248 @ 0x140A7C248 (sub_140A7C248.c)
 *     sub_140A81748 @ 0x140A81748 (sub_140A81748.c)
 *     sub_140A9D69C @ 0x140A9D69C (sub_140A9D69C.c)
 * Callees:
 *     sub_1406015D4 @ 0x1406015D4 (sub_1406015D4.c)
 *     sub_140601734 @ 0x140601734 (sub_140601734.c)
 *     sub_140A7F8F2 @ 0x140A7F8F2 (sub_140A7F8F2.c)
 */

__int64 __fastcall sub_140A7F844(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rbx

  result = sub_140A7F8F2(0LL);
  if ( (_DWORD)result )
  {
    result = a1 & 0xFFF;
    v5 = a1 + a2;
    v6 = a1;
    v7 = (unsigned __int64)(result + a2 + 4095) >> 12;
    if ( (_DWORD)v7 )
    {
      v8 = (unsigned int)v7;
      do
      {
        v9 = v5;
        if ( v6 + 4096 <= v5 )
          v9 = v6 + 4096;
        sub_1406015D4(v6, v9, a1, v5);
        result = sub_140601734(v6, v9, a1, v5);
        v6 = v9;
        --v8;
      }
      while ( v8 );
    }
  }
  return result;
}
