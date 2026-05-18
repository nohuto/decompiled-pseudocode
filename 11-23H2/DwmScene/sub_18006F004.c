/*
 * XREFs of sub_18006F004 @ 0x18006F004
 * Callers:
 *     sub_1800253A4 @ 0x1800253A4 (sub_1800253A4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18001D3C8 @ 0x18001D3C8 (sub_18001D3C8.c)
 *     sub_1800211EC @ 0x1800211EC (sub_1800211EC.c)
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_18006F004(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // eax
  void **v4; // rax
  _QWORD v6[4]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v7[32]; // [rsp+60h] [rbp-38h] BYREF

  sub_180029290(a1, 7, 3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::DepthBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  sub_18000C8C8((__int64)(a1 + 16), 16LL, 4LL);
  sub_18000C8C8((__int64)(a1 + 24), 16LL, 4LL);
  a1[32] = 0LL;
  a1[33] = 0LL;
  v2 = sub_18001090C(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  a1[32] = v2;
  sub_1800211EC((__int64)&unk_1801D3424);
  v3 = sub_18001D3C8();
  sub_180027C80((__int64)v7, v3);
  v4 = (void **)sub_18001C6E8(v6, (__int64)"DepthBuffer", v7);
  sub_180029824((__int64)a1, v4);
  sub_180011B24((__int64)v7);
  return a1;
}
