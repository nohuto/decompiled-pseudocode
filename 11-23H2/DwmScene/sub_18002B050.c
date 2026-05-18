/*
 * XREFs of sub_18002B050 @ 0x18002B050
 * Callers:
 *     sub_18002AC04 @ 0x18002AC04 (sub_18002AC04.c)
 *     sub_18002AD28 @ 0x18002AD28 (sub_18002AD28.c)
 * Callees:
 *     sub_18002AA98 @ 0x18002AA98 (sub_18002AA98.c)
 *     sub_18002B0C4 @ 0x18002B0C4 (sub_18002B0C4.c)
 */

__int64 __fastcall sub_18002B050(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 152LL )
  {
    sub_18002B0C4(a1, a3, i);
    a3 += 152LL;
  }
  sub_18002AA98(a3, a3);
  return a3;
}
