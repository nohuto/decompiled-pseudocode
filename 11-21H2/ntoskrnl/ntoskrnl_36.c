/*
 * XREFs of ntoskrnl_36 @ 0x1402EEBC0
 * Callers:
 *     sub_1402519B0 @ 0x1402519B0 (sub_1402519B0.c)
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     sub_14045E5B0 @ 0x14045E5B0 (sub_14045E5B0.c)
 * Callees:
 *     sub_1402EF0CC @ 0x1402EF0CC (sub_1402EF0CC.c)
 *     sub_1402EF304 @ 0x1402EF304 (sub_1402EF304.c)
 *     sub_140346210 @ 0x140346210 (sub_140346210.c)
 */

__int64 __fastcall ntoskrnl_36(ULONG_PTR a1, unsigned int a2, int a3)
{
  int v5; // esi
  int v6; // eax

  v5 = a1;
  sub_140346210(a1);
  v6 = sub_1402EF304(a2);
  return sub_1402EF0CC(*((_QWORD *)qword_140D06C40 + 2), v5, v6, a3, 0);
}
