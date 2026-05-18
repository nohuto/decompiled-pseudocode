/*
 * XREFs of sub_180063EF4 @ 0x180063EF4
 * Callers:
 *     sub_180063804 @ 0x180063804 (sub_180063804.c)
 * Callees:
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_180063EF4(_QWORD *a1)
{
  __int64 v2; // rax

  *a1 = &Spectre::Engine::ViewerEngine::ViewerSceneData::`vftable';
  sub_18000C8C8((__int64)(a1 + 1), 16LL, 3LL);
  sub_18000C8C8((__int64)(a1 + 7), 16LL, 3LL);
  a1[13] = 0LL;
  a1[14] = 0LL;
  v2 = sub_18001090C(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[13] = v2;
  a1[15] = 0LL;
  a1[16] = 0LL;
  sub_18000C8C8((__int64)(a1 + 17), 16LL, 3LL);
  a1[23] = 0LL;
  a1[24] = 0LL;
  a1[25] = 0LL;
  a1[26] = 0LL;
  a1[27] = 0LL;
  a1[28] = 0LL;
  a1[29] = 0LL;
  a1[30] = 0LL;
  a1[31] = 0LL;
  a1[32] = 0LL;
  a1[33] = 0LL;
  a1[34] = 0LL;
  a1[35] = 0LL;
  a1[36] = 0LL;
  a1[37] = 0LL;
  a1[38] = 0LL;
  a1[39] = 0LL;
  a1[40] = 0LL;
  return a1;
}
