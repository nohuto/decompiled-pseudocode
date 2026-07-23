/*
 * XREFs of sub_1405BC4A4 @ 0x1405BC4A4
 * Callers:
 *     sub_140268C20 @ 0x140268C20 (sub_140268C20.c)
 *     sub_14037E338 @ 0x14037E338 (sub_14037E338.c)
 * Callees:
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 */

void __fastcall sub_1405BC4A4(ULONG_PTR a1)
{
  __int64 v1; // rax

  v1 = 48 * a1 - 0x220000000000LL;
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v1 + 32) = 0;
  sub_1402C6EB0(a1, 2);
}
