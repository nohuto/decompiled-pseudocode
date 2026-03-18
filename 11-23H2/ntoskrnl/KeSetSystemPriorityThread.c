/*
 * XREFs of KeSetSystemPriorityThread @ 0x140576CB0
 * Callers:
 *     MiZeroHugeRangeCore @ 0x140A2DEFC (MiZeroHugeRangeCore.c)
 * Callees:
 *     KiSetSystemPriorityThread @ 0x140355ED0 (KiSetSystemPriorityThread.c)
 */

char __fastcall KeSetSystemPriorityThread(ULONG_PTR a1, int a2)
{
  return KiSetSystemPriorityThread(a1, a2, 0);
}
