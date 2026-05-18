/*
 * XREFs of sub_180084484 @ 0x180084484
 * Callers:
 *     sub_1800829E4 @ 0x1800829E4 (sub_1800829E4.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 *     sub_180082FBC @ 0x180082FBC (sub_180082FBC.c)
 *     sub_1800830D4 @ 0x1800830D4 (sub_1800830D4.c)
 *     sub_180084650 @ 0x180084650 (sub_180084650.c)
 *     sub_18008467C @ 0x18008467C (sub_18008467C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180084484(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rax

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  *(_QWORD *)(a1 + 8) = sub_180082FBC(*a2);
  sub_18001246C((_QWORD *)(a1 + 16), v4);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v5 = sub_180029054(1uLL);
  v6 = sub_18001090C(v5);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 88) = v6;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = sub_1800830D4(*a2);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(*a2 + 1242);
  sub_180084650(a1 + 32, *a2 + 80);
  sub_18008467C(a1 + 56, *a2 + 104);
  return a1;
}
