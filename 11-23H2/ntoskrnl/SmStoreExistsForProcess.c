/*
 * XREFs of SmStoreExistsForProcess @ 0x140344A94
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140342000 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140619278 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x1407417B0 (PfpPrivSourceEnum.c)
 *     SmProcessProcessStoreInfoRequest @ 0x1409D7134 (SmProcessProcessStoreInfoRequest.c)
 *     VmpPauseResumeNotify @ 0x1409DD314 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140344AE4 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 __fastcall SmStoreExistsForProcess(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 2520) + 24LL);
  return a1 != *(_QWORD *)(v1 + 2008) && SmpKeyedStoreEntryGet(v1 + 2072) != 0;
}
