/*
 * XREFs of sub_18007AEB8 @ 0x18007AEB8
 * Callers:
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 * Callees:
 *     sub_18007AD28 @ 0x18007AD28 (sub_18007AD28.c)
 *     sub_1800A78A4 @ 0x1800A78A4 (sub_1800A78A4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007AEB8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 128LL )
  {
    sub_1800A78A4(a3, i);
    a3 += 128LL;
  }
  sub_18007AD28(a3, a3);
  return a3;
}
