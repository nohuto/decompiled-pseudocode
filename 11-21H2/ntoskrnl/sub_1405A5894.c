/*
 * XREFs of sub_1405A5894 @ 0x1405A5894
 * Callers:
 *     sub_1405A5990 @ 0x1405A5990 (sub_1405A5990.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1405A5940 @ 0x1405A5940 (sub_1405A5940.c)
 */

void __fastcall sub_1405A5894(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 *v7; // rbx

  v4 = a1 + 8;
  v5 = a1 + 16;
  if ( a1 + 8 < (unsigned __int64)(a1 + 16) )
  {
    v6 = (a4 >> 3) & 0xFFFFFFFFFFELL;
    do
    {
      v7 = (unsigned __int64 *)(48 * (((unsigned __int64)sub_140317A10(v4) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      sub_1405A5940(v4);
      v4 += 8LL;
      *v7 = v6 | *v7 & 0xFFFFF00000000001uLL;
    }
    while ( v4 < v5 );
  }
}
