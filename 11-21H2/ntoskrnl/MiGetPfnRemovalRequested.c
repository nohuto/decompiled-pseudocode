/*
 * XREFs of MiGetPfnRemovalRequested @ 0x1405AD99C
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiGetPfnRemovalRequested(__int64 a1)
{
  return (*(_BYTE *)(a1 + 35) & 0x40) != 0;
}
