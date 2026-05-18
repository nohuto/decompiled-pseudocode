/*
 * XREFs of sub_180029290 @ 0x180029290
 * Callers:
 *     sub_180027E8C @ 0x180027E8C (sub_180027E8C.c)
 *     sub_18004399C @ 0x18004399C (sub_18004399C.c)
 *     sub_180047BE4 @ 0x180047BE4 (sub_180047BE4.c)
 *     sub_1800544A8 @ 0x1800544A8 (sub_1800544A8.c)
 *     sub_1800552D8 @ 0x1800552D8 (sub_1800552D8.c)
 *     sub_18006F004 @ 0x18006F004 (sub_18006F004.c)
 *     sub_1800881C8 @ 0x1800881C8 (sub_1800881C8.c)
 *     sub_18008880C @ 0x18008880C (sub_18008880C.c)
 *     sub_18008A8AC @ 0x18008A8AC (sub_18008A8AC.c)
 *     sub_18008BD5C @ 0x18008BD5C (sub_18008BD5C.c)
 *     sub_18009BC28 @ 0x18009BC28 (sub_18009BC28.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 *     sub_18002920C @ 0x18002920C (sub_18002920C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180029290(_QWORD *a1, int a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax

  sub_18002920C((__int64)a1, a2, a3);
  *a1 = &Spectre::Engine::SharedResource::`vftable';
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  v4 = sub_180029054(1uLL);
  v5 = sub_18001090C(v4);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  a1[10] = v5;
  return a1;
}
