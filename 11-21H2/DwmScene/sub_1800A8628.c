/*
 * XREFs of sub_1800A8628 @ 0x1800A8628
 * Callers:
 *     sub_1800A3CB8 @ 0x1800A3CB8 (sub_1800A3CB8.c)
 *     sub_1800A5F34 @ 0x1800A5F34 (sub_1800A5F34.c)
 *     sub_1800ACBA8 @ 0x1800ACBA8 (sub_1800ACBA8.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800A8628(__int64 a1)
{
  __int64 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffect::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
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
  v2 = (__int64 *)(a1 + 104);
  v2[2] = 0LL;
  v2[3] = 15LL;
  *(_BYTE *)v2 = 0;
  sub_180012190(v2, byte_180128042, 0LL);
  *(_BYTE *)(a1 + 136) = 1;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 2;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_DWORD *)(a1 + 176) = 0;
  return a1;
}
