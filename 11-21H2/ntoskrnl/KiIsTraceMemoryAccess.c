/*
 * XREFs of KiIsTraceMemoryAccess @ 0x140230C30
 * Callers:
 *     KeInvalidAccessAllowed @ 0x140230BA0 (KeInvalidAccessAllowed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return KiDynamicTraceEnabled && a1 >= qword_140D070E8 && a1 < qword_140D070F0 && KeGetCurrentIrql() == 15;
}
