/*
 * XREFs of sub_180029368 @ 0x180029368
 * Callers:
 *     sub_1800280AC @ 0x1800280AC (sub_1800280AC.c)
 *     sub_180028138 @ 0x180028138 (sub_180028138.c)
 *     sub_180029460 @ 0x180029460 (sub_180029460.c)
 *     sub_1800E4F18 @ 0x1800E4F18 (sub_1800E4F18.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001D444 @ 0x18001D444 (sub_18001D444.c)
 *     sub_18002933C @ 0x18002933C (sub_18002933C.c)
 *     sub_180070B70 @ 0x180070B70 (sub_180070B70.c)
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 */

void **__fastcall sub_180029368(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  void **result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  v5 = sub_180070B94(a1, a2, a3, a4);
  sub_180070B70(v5, *(unsigned int *)(a1 + 48), 0LL, -1LL);
  sub_18001D444((__int64)&unk_1801D33D4 + 4 * *(int *)(a1 + 44));
  sub_18002933C((unsigned int *)(a1 + 56), v6, v7);
  sub_180011B24(a1 + 8);
  result = &Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}
