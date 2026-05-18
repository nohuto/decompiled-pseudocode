/*
 * XREFs of sub_18002920C @ 0x18002920C
 * Callers:
 *     sub_1800291A0 @ 0x1800291A0 (sub_1800291A0.c)
 *     sub_180029290 @ 0x180029290 (sub_180029290.c)
 * Callees:
 *     sub_18001D3D4 @ 0x18001D3D4 (sub_18001D3D4.c)
 *     sub_1800291D8 @ 0x1800291D8 (sub_1800291D8.c)
 *     sub_180070B70 @ 0x180070B70 (sub_180070B70.c)
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 */

__int64 __fastcall sub_18002920C(__int64 a1, int a2, int a3)
{
  __int64 v4; // r11
  __int64 v5; // rax

  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 15LL;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 40) = 3;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 48) = a3;
  sub_1800291D8(a1 + 56, a3, 0LL);
  sub_18001D3D4((__int64)&unk_1801D33D4 + 4 * v4);
  v5 = sub_180070B94();
  sub_180070B70(v5, *(unsigned int *)(a1 + 48), 0LL, 1LL);
  return a1;
}
