/*
 * XREFs of sub_180047BE4 @ 0x180047BE4
 * Callers:
 *     sub_180017288 @ 0x180017288 (sub_180017288.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180047BE4(__int64 a1)
{
  __int64 v2; // rax

  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  sub_180029290((_QWORD *)a1, 5, 12);
  *(_QWORD *)a1 = &Spectre::Engine::Mesh::`vftable';
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  v2 = sub_18001090C(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)(a1 + 128) = v2;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 1LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = 1;
  *(_WORD *)(a1 + 308) = 0;
  *(_BYTE *)(a1 + 310) = 0;
  return a1;
}
