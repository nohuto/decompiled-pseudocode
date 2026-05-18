/*
 * XREFs of sub_1800558D4 @ 0x1800558D4
 * Callers:
 *     sub_180055734 @ 0x180055734 (sub_180055734.c)
 *     sub_1800CC1C8 @ 0x1800CC1C8 (sub_1800CC1C8.c)
 *     sub_1800CF2D0 @ 0x1800CF2D0 (sub_1800CF2D0.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180055754 @ 0x180055754 (sub_180055754.c)
 */

__int64 __fastcall sub_1800558D4(__int64 a1, void **a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    sub_180055754(a2);
    return sub_18000B988(a2);
  }
  return result;
}
