/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x140363F44
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1407EF74C (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x140363F5C (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
