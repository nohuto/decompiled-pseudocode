/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x140364594
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1407EF1CC (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x1403645AC (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
