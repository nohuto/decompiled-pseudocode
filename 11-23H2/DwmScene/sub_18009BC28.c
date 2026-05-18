/*
 * XREFs of sub_18009BC28 @ 0x18009BC28
 * Callers:
 *     sub_1800843C8 @ 0x1800843C8 (sub_1800843C8.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18009BC28(_QWORD *a1)
{
  __int64 v2; // rax

  sub_180029290(a1, 6, 7);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  v2 = sub_18001090C(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[14] = v2;
  return a1;
}
