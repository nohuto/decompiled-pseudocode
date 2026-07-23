/*
 * XREFs of KiIsTraceMemoryAccess @ 0x140342020
 * Callers:
 *     KeInvalidAccessAllowed @ 0x140341F80 (KeInvalidAccessAllowed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return KiDynamicTraceEnabled && a1 >= ControlPc && a1 < qword_140D1F2B0 && KeGetCurrentIrql() == 15;
}
