/*
 * XREFs of CmpSetPriorityThread @ 0x1402079DC
 * Callers:
 *     CmpDoFileWrite @ 0x1406895CC (CmpDoFileWrite.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 */

__int64 __fastcall CmpSetPriorityThread(ULONG_PTR a1)
{
  return KeSetActualBasePriorityThread(a1);
}
