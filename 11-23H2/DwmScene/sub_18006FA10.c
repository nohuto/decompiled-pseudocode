/*
 * XREFs of sub_18006FA10 @ 0x18006FA10
 * Callers:
 *     sub_18006F308 @ 0x18006F308 (sub_18006F308.c)
 * Callees:
 *     sub_1800161AC @ 0x1800161AC (sub_1800161AC.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006FA10(__int64 *a1, __int64 a2, _DWORD *a3)
{
  int v5; // r8d
  int v6; // r8d
  __int64 v7; // r8

  sub_1800161AC(a2, a1);
  sub_180029870(*a1, 1, 0);
  sub_180029870(*a1, v5 + 2, v5);
  sub_180029870(*a1, v6 + 4, v6);
  sub_180054950(*a1, a3, v7);
  return a1;
}
