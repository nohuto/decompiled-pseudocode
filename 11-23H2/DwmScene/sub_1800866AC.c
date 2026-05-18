/*
 * XREFs of sub_1800866AC @ 0x1800866AC
 * Callers:
 *     sub_18005F710 @ 0x18005F710 (sub_18005F710.c)
 * Callees:
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_1800866AC(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

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
  sub_18000C8C8(a1 + 192, 32LL, 6LL);
  sub_18000C8C8(a1 + 384, 16LL, 6LL);
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  v3 = sub_18001090C(0x38uLL);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *(_QWORD *)(a1 + 480) = v3;
  sub_18000C8C8(a1 + 496, 16LL, 10LL);
  return a1;
}
