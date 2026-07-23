/*
 * XREFs of KeClearSystemPriorityThread @ 0x14057716C
 * Callers:
 *     MiZeroHugeRangeCore @ 0x140A2E1AC (MiZeroHugeRangeCore.c)
 * Callees:
 *     KiClearSystemPriority @ 0x140346270 (KiClearSystemPriority.c)
 */

char __fastcall KeClearSystemPriorityThread(ULONG_PTR a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return KiClearSystemPriority(a1, (char *)&v3);
}
