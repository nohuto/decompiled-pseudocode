/*
 * XREFs of sub_18006FFA4 @ 0x18006FFA4
 * Callers:
 *     sub_18006FE4C @ 0x18006FE4C (sub_18006FE4C.c)
 * Callees:
 *     sub_18006FE14 @ 0x18006FE14 (sub_18006FE14.c)
 *     sub_1800973E0 @ 0x1800973E0 (sub_1800973E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006FFA4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 128LL )
  {
    sub_1800973E0(a3, i);
    a3 += 128LL;
  }
  sub_18006FE14(a3, a3);
  return a3;
}
