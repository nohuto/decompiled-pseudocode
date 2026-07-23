/*
 * XREFs of MmReplaceImportEntry @ 0x14062D018
 * Callers:
 *     KsepPatchImportTableEntry @ 0x140977524 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140ADC008 (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140ADC068 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140ADC128 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiReplaceImportEntry @ 0x14062CC00 (MiReplaceImportEntry.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR a1, ULONG_PTR a2)
{
  return MiReplaceImportEntry(a1, a2);
}
