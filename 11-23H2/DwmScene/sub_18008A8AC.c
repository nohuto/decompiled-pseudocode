/*
 * XREFs of sub_18008A8AC @ 0x18008A8AC
 * Callers:
 *     sub_18004DF58 @ 0x18004DF58 (sub_18004DF58.c)
 *     sub_18004E040 @ 0x18004E040 (sub_18004E040.c)
 *     sub_18004E128 @ 0x18004E128 (sub_18004E128.c)
 *     sub_18004E210 @ 0x18004E210 (sub_18004E210.c)
 *     sub_18004E5C4 @ 0x18004E5C4 (sub_18004E5C4.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008A8AC(__int64 a1, int a2)
{
  __int64 v4; // rax

  sub_180029290((_QWORD *)a1, 2, 8);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v4 = sub_18001090C(0x38uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)(a1 + 136) = v4;
  *(_BYTE *)(a1 + 152) = 0;
  sub_180029870(a1, 2, 0);
  return a1;
}
