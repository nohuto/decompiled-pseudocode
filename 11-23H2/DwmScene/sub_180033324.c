/*
 * XREFs of sub_180033324 @ 0x180033324
 * Callers:
 *     sub_1800333A4 @ 0x1800333A4 (sub_1800333A4.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18002DC3C @ 0x18002DC3C (sub_18002DC3C.c)
 *     sub_18002E5A8 @ 0x18002E5A8 (sub_18002E5A8.c)
 *     sub_180040814 @ 0x180040814 (sub_180040814.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180033324(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rcx

  sub_180040814(a2, a1);
  sub_18002DC3C(*a2);
  v4 = *(_QWORD **)(a1 + 712);
  if ( v4 == *(_QWORD **)(a1 + 720) )
  {
    sub_18002E5A8((_QWORD *)(a1 + 704), *(char **)(a1 + 712), a2);
  }
  else
  {
    sub_18001246C(v4, a2);
    *(_QWORD *)(a1 + 712) += 16LL;
  }
  return a2;
}
