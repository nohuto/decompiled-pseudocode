/*
 * XREFs of sub_18003155C @ 0x18003155C
 * Callers:
 *     sub_180031048 @ 0x180031048 (sub_180031048.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180030EEC @ 0x180030EEC (sub_180030EEC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003155C(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18001C190();
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  sub_180030EEC(a1 + 2);
  return a1;
}
