/*
 * XREFs of sub_14025C448 @ 0x14025C448
 * Callers:
 *     sub_140714594 @ 0x140714594 (sub_140714594.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 */

__int64 __fastcall sub_14025C448(ULONG_PTR a1)
{
  return KeSetActualBasePriorityThread(a1);
}
