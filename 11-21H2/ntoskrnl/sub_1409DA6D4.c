/*
 * XREFs of sub_1409DA6D4 @ 0x1409DA6D4
 * Callers:
 *     sub_1409D9340 @ 0x1409D9340 (sub_1409D9340.c)
 *     sub_1409D94E0 @ 0x1409D94E0 (sub_1409D94E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409DA6D4(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r8

  if ( a4 == -1 )
    return 10LL;
  if ( !a3 )
    return 20LL;
  if ( a3 > 0xFFFFFFFFFFFFFLL )
    return 30LL;
  if ( ((a2 | a1) & 0xFFF) != 0 )
    return 40LL;
  v5 = a3 << 12;
  if ( v5 + a2 <= a2 )
    return 50LL;
  if ( v5 + a1 > a1 )
    return v5 + a2 - 1 > 0x7FFFFFFEFFFFLL ? 0x46 : 0;
  return 60LL;
}
