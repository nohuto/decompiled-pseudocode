/*
 * XREFs of sub_140346260 @ 0x140346260
 * Callers:
 *     sub_1402EF2BC @ 0x1402EF2BC (sub_1402EF2BC.c)
 *     sub_140345DA0 @ 0x140345DA0 (sub_140345DA0.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14083ECE0 @ 0x14083ECE0 (sub_14083ECE0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140346260(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 712);
  return v2 < (2 * *(_DWORD *)(a1 + 716)) >> 1
      || v2 < a2 && *(_QWORD *)(a1 + 8) == a1 + 8 && (*(_DWORD *)(a1 + 4) || *(int *)(a1 + 716) < 0);
}
