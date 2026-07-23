/*
 * XREFs of sub_140864F80 @ 0x140864F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EBF8 @ 0x14022EBF8 (sub_14022EBF8.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 */

NTSTATUS __fastcall sub_140864F80(__int64 a1)
{
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 0x10u);
  return sub_14022EBF8(a1, 0xFFFFFFFF);
}
