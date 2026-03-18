/*
 * XREFs of MmReplaceImportEntry @ 0x14062CAC8
 * Callers:
 *     KsepPatchImportTableEntry @ 0x140977324 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140ADC018 (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140ADC078 (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140ADC138 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiReplaceImportEntry @ 0x14062C6B0 (MiReplaceImportEntry.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR a1, ULONG_PTR a2)
{
  return MiReplaceImportEntry(a1, a2);
}
