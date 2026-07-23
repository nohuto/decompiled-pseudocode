/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x140364734
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1407EF49C (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x14036474C (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
