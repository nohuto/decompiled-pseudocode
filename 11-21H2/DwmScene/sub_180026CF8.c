/*
 * XREFs of sub_180026CF8 @ 0x180026CF8
 * Callers:
 *     sub_18006696C @ 0x18006696C (sub_18006696C.c)
 * Callees:
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FF34 @ 0x18001FF34 (sub_18001FF34.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180026CF8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 32LL )
  {
    sub_1800129F4(a3, i);
    a3 += 4;
  }
  sub_18001FF34((__int64)a3, (__int64)a3);
  return a3;
}
