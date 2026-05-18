/*
 * XREFs of sub_1800552D8 @ 0x1800552D8
 * Callers:
 *     sub_180017544 @ 0x180017544 (sub_180017544.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180012548 @ 0x180012548 (sub_180012548.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800552D8(__int64 a1)
{
  __int64 v2; // rax
  int v3; // eax

  sub_180029290((_QWORD *)a1, 1, 11);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v2 = sub_18001090C(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)(a1 + 112) = v2;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  v3 = sub_180012548((__int64)&unk_1801D3418);
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 152) = *(_QWORD *)&v3 | 0xFFFFFFFF00000000uLL;
  return a1;
}
