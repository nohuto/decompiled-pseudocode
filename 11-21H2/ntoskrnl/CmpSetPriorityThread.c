/*
 * XREFs of CmpSetPriorityThread @ 0x14025C448
 * Callers:
 *     CmpDoFileWrite @ 0x140714594 (CmpDoFileWrite.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 */

__int64 __fastcall CmpSetPriorityThread(ULONG_PTR a1)
{
  return KeSetActualBasePriorityThread(a1);
}
