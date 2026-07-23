/*
 * XREFs of sub_1405EF8E4 @ 0x1405EF8E4
 * Callers:
 *     sub_140A6BF28 @ 0x140A6BF28 (sub_140A6BF28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EF8E4(__int64 a1, unsigned int a2)
{
  return (a2 >> 9 << 13) + a1 + 8LL * (a2 & 0x1FF);
}
