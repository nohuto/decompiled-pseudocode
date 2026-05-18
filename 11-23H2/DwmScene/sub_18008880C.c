/*
 * XREFs of sub_18008880C @ 0x18008880C
 * Callers:
 *     sub_1800894D0 @ 0x1800894D0 (sub_1800894D0.c)
 *     sub_180089B48 @ 0x180089B48 (sub_180089B48.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18008880C(_QWORD *a1, int a2, int a3)
{
  __int64 v4; // rax

  sub_180029290(a1, a2, a3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  v4 = sub_18001090C(0x38uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  a1[15] = v4;
  a1[17] = 0LL;
  a1[18] = 0LL;
  return a1;
}
