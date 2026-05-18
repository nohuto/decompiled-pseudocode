/*
 * XREFs of sub_18006B5A8 @ 0x18006B5A8
 * Callers:
 *     sub_18006A444 @ 0x18006A444 (sub_18006A444.c)
 *     sub_18006DFB0 @ 0x18006DFB0 (sub_18006DFB0.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 */

// Hidden C++ exception states: #wind=7
_UNKNOWN **__fastcall sub_18006B5A8(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r9
  _UNKNOWN **result; // rax
  __int64 *v6; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp+10h]

  v7 = a1;
  memset(a1 + 1, 0, 0x140uLL);
  *a1 = &Spectre::Engine::ViewerEngine::ViewerSceneData::`vftable';
  sub_18000C8D4((__int64)(a1 + 1), 16LL, 3LL);
  sub_18000C8D4((__int64)(a1 + 7), 16LL, 3LL);
  v6 = a1 + 13;
  a1[13] = 0LL;
  a1[14] = 0LL;
  v6 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v6, (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v2 + 8), (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v3 + 16), (__int64 *)&v6);
  *(_WORD *)(v4 + 24) = 257;
  a1[13] = v4;
  a1[15] = 0LL;
  a1[16] = 0LL;
  result = sub_18000C8D4((__int64)(a1 + 17), 16LL, 3LL);
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
  return result;
}
