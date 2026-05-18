/*
 * XREFs of sub_1800A09FC @ 0x1800A09FC
 * Callers:
 *     sub_1800A06AC @ 0x1800A06AC (sub_1800A06AC.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A09FC(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v3 = sub_180029054(1uLL);
  a1[1] = sub_18001090C(v3);
  return a1;
}
