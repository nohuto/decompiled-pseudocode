/*
 * XREFs of SmStoreExistsForProcess @ 0x1402A10EC
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140260144 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140581158 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x140711614 (PfpPrivSourceEnum.c)
 *     SmProcessProcessStoreInfoRequest @ 0x1409D41CC (SmProcessProcessStoreInfoRequest.c)
 *     VmpPauseResumeNotify @ 0x1409DA178 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1402A1124 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 SmStoreExistsForProcess()
{
  return SmpKeyedStoreEntryGet((ULONG_PTR)&qword_140D321C8) != 0;
}
