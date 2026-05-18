/*
 * XREFs of sub_18004399C @ 0x18004399C
 * Callers:
 *     sub_18005F654 @ 0x18005F654 (sub_18005F654.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180012548 @ 0x180012548 (sub_180012548.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18004399C(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax

  sub_180029290((_QWORD *)a1, 0, 10);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Material::`vftable';
  *(_WORD *)(a1 + 112) = 2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_QWORD *)(a1 + 192) = sub_180012548((__int64)&unk_1801D3410);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v2 = sub_180029054(1uLL);
  v3 = sub_18001090C(v2);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *(_QWORD *)(a1 + 200) = v3;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 192) |= 0xFFFFFFFF00000000uLL;
  return a1;
}
