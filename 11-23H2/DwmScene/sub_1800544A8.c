/*
 * XREFs of sub_1800544A8 @ 0x1800544A8
 * Callers:
 *     sub_180017478 @ 0x180017478 (sub_180017478.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 *     sub_1800543D0 @ 0x1800543D0 (sub_1800543D0.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800544A8(_QWORD *a1)
{
  __int64 v2; // rax

  sub_180029290(a1, 4, 11);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_1800543D0(a1 + 14);
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
