/*
 * XREFs of sub_18001FFD8 @ 0x18001FFD8
 * Callers:
 *     sub_18006C060 @ 0x18006C060 (sub_18006C060.c)
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 *     sub_180079400 @ 0x180079400 (sub_180079400.c)
 *     sub_1800796D0 @ 0x1800796D0 (sub_1800796D0.c)
 *     sub_180079984 @ 0x180079984 (sub_180079984.c)
 *     sub_1800F5EB0 @ 0x1800F5EB0 (sub_1800F5EB0.c)
 *     sub_1800F8034 @ 0x1800F8034 (sub_1800F8034.c)
 *     sub_1800F9D04 @ 0x1800F9D04 (sub_1800F9D04.c)
 *     sub_1800F9EB8 @ 0x1800F9EB8 (sub_1800F9EB8.c)
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 *     sub_1800FAB78 @ 0x1800FAB78 (sub_1800FAB78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001FFD8(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r8
  unsigned __int64 i; // rdx
  __int64 v5; // rax

  v2 = 2 * a2;
  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < v2; v3 = 0x100000001B3LL * (v5 ^ v3) )
  {
    v5 = *(unsigned __int8 *)(i + a1);
    ++i;
  }
  return v3;
}
