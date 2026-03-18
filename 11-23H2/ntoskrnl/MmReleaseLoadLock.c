/*
 * XREFs of MmReleaseLoadLock @ 0x140704930
 * Callers:
 *     MmProtectDriverSection @ 0x14036E870 (MmProtectDriverSection.c)
 *     MmLockRegistryRecoverySections @ 0x14061A888 (MmLockRegistryRecoverySections.c)
 *     MmWriteSystemImageTracepoint @ 0x14064336C (MmWriteSystemImageTracepoint.c)
 *     MiSessionUnloadAllImages @ 0x140681CD8 (MiSessionUnloadAllImages.c)
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140703DC0 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x1407047B8 (MiObtainSectionForDriver.c)
 *     MmChangeImageProtection @ 0x140723E40 (MmChangeImageProtection.c)
 *     IopLoadDriver @ 0x1407945D8 (IopLoadDriver.c)
 *     MmEnumerateSystemImages @ 0x140820BD0 (MmEnumerateSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x14084D9FC (MmFreeBootDriverInitializationCode.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x140865494 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmBackSystemImageWithPagefile @ 0x140871A9C (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2D430 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140A2D540 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x140A37F60 (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x140A396B0 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140A3B59C (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x140A3BF34 (MiUnloadHotPatch.c)
 *     MiShutdownSystem @ 0x140AABB70 (MiShutdownSystem.c)
 *     VfAddVerifierEntry @ 0x140ADD660 (VfAddVerifierEntry.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE7FB0 (MmApplyVerifierToRunningImage.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140AE806C (MmEnableOrDisableVerifierForDriver.c)
 *     MiInitializeRetpoline @ 0x140B44F88 (MiInitializeRetpoline.c)
 *     MiReloadBootLoadedDrivers @ 0x140B469CC (MiReloadBootLoadedDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x140B5CCDC (MiInitializeLoadedModuleList.c)
 *     MmRegisterHotPatches @ 0x140B73D38 (MmRegisterHotPatches.c)
 *     MmReapplyBootPatchImports @ 0x140B743BC (MmReapplyBootPatchImports.c)
 *     MmDiscardDriverSection @ 0x140B74914 (MmDiscardDriverSection.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B75990 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140B99A6C (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MmReleaseLoadLock(__int64 a1)
{
  _QWORD *result; // rax

  if ( dword_140C658E0-- == 1 )
  {
    qword_140C658D8 |= 1uLL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C658D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C658D0);
    KeAbPostRelease((ULONG_PTR)&qword_140C658D0);
    return KeLeaveCriticalRegionThread(a1);
  }
  return result;
}
