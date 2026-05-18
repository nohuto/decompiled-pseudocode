/*
 * XREFs of sub_18008BD5C @ 0x18008BD5C
 * Callers:
 *     sub_1800860C4 @ 0x1800860C4 (sub_1800860C4.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 *     sub_18008BDE8 @ 0x18008BDE8 (sub_18008BDE8.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18008BD5C(_QWORD *a1)
{
  __int64 v2; // rax

  sub_180029290(a1, 12, 0);
  sub_18008BDE8(a1 + 12);
  *a1 = &Spectre::Engine::VertexLayout::`vftable';
  a1[18] = 0LL;
  a1[19] = 0LL;
  v2 = sub_18001090C(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[18] = v2;
  a1[20] = 0LL;
  a1[21] = 0LL;
  return a1;
}
