/*
 * XREFs of sub_14063F338 @ 0x14063F338
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140558910 (IoQueueWorkItemToNode.c)
 * Callees:
 *     sub_1402EF0CC @ 0x1402EF0CC (sub_1402EF0CC.c)
 *     sub_1402EF304 @ 0x1402EF304 (sub_1402EF304.c)
 *     sub_140346210 @ 0x140346210 (sub_140346210.c)
 */

char __fastcall sub_14063F338(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v5; // esi
  int v6; // eax

  v5 = (int)a1;
  sub_140346210(a1, a2);
  v6 = sub_1402EF304(a2);
  return sub_1402EF0CC(*((_QWORD *)qword_140D06C40 + 2), v5, v6, a3, 1u);
}
