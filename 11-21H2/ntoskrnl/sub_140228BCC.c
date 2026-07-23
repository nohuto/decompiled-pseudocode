/*
 * XREFs of sub_140228BCC @ 0x140228BCC
 * Callers:
 *     sub_140227254 @ 0x140227254 (sub_140227254.c)
 *     sub_140228170 @ 0x140228170 (sub_140228170.c)
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 *     sub_1403C92F4 @ 0x1403C92F4 (sub_1403C92F4.c)
 *     sub_1405839A4 @ 0x1405839A4 (sub_1405839A4.c)
 *     sub_1405AE144 @ 0x1405AE144 (sub_1405AE144.c)
 * Callees:
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 */

__int64 __fastcall sub_140228BCC(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 result; // rax

  if ( a2 >= 0 )
  {
    v5 = 1LL;
    v6 = (unsigned int)(a2 + 1);
    do
    {
      a3 = a3 << 25 >> 16;
      result = sub_1402CF280(a1, a3, v5, 0LL);
      v5 <<= 9;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
