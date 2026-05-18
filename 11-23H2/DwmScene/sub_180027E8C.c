/*
 * XREFs of sub_180027E8C @ 0x180027E8C
 * Callers:
 *     sub_180010CE4 @ 0x180010CE4 (sub_180010CE4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18001D3C8 @ 0x18001D3C8 (sub_18001D3C8.c)
 *     sub_1800211EC @ 0x1800211EC (sub_1800211EC.c)
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180027E8C(__int64 a1)
{
  __int64 v2; // rax
  int v3; // eax
  _QWORD *v4; // rax
  _QWORD v6[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v7[32]; // [rsp+50h] [rbp-38h] BYREF

  sub_180029290(a1, 10LL, 3LL);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::FrameBuffer::`vftable';
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v2 = sub_18001090C(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)(a1 + 120) = v2;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  sub_1800211EC((__int64)&unk_1801D33D0);
  v3 = sub_18001D3C8();
  sub_180027C80((__int64)v7, v3);
  v4 = sub_18001C6E8(v6, (__int64)"FrameBuffer", v7);
  sub_180029824(a1, v4);
  sub_180011B24((__int64)v7);
  return a1;
}
