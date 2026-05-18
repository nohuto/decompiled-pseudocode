/*
 * XREFs of sub_1800881C8 @ 0x1800881C8
 * Callers:
 *     sub_1800437DC @ 0x1800437DC (sub_1800437DC.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800881C8(_QWORD *a1)
{
  __int64 v2; // rax

  sub_180029290(a1, 9, 4);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::RenderState::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  v2 = sub_18001090C(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[16] = v2;
  return a1;
}
