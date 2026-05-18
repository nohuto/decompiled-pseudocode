/*
 * XREFs of sub_1800942C4 @ 0x1800942C4
 * Callers:
 *     sub_180066E6C @ 0x180066E6C (sub_180066E6C.c)
 * Callees:
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_1800942C4(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 *v7; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 2;
  *(_DWORD *)(a1 + 120) = 3;
  *(_WORD *)(a1 + 124) = 257;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  sub_18000C8D4(a1 + 192, 32LL, 6LL);
  sub_18000C8D4(a1 + 384, 16LL, 6LL);
  v7 = (__int64 *)(a1 + 480);
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  v7 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v7, (__int64 *)&v7);
  sub_18001DE8C((__int64 *)(v3 + 8), (__int64 *)&v7);
  sub_18001DE8C((__int64 *)(v4 + 16), (__int64 *)&v7);
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 480) = v5;
  sub_18000C8D4(a1 + 496, 16LL, 10LL);
  return a1;
}
