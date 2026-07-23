/*
 * XREFs of KeSetSystemPriorityThread @ 0x1405771A0
 * Callers:
 *     MiZeroHugeRangeCore @ 0x140A2E1AC (MiZeroHugeRangeCore.c)
 * Callees:
 *     KiSetSystemPriorityThread @ 0x140356070 (KiSetSystemPriorityThread.c)
 */

char __fastcall KeSetSystemPriorityThread(ULONG_PTR a1, int a2)
{
  return KiSetSystemPriorityThread(a1, a2, 0);
}
