/*
 * XREFs of MmReleaseLoadLock @ 0x140704B40
 * Callers:
 *     MmProtectDriverSection @ 0x14036EA10 (MmProtectDriverSection.c)
 *     MmLockRegistryRecoverySections @ 0x14061ADD8 (MmLockRegistryRecoverySections.c)
 *     MmWriteSystemImageTracepoint @ 0x1406438BC (MmWriteSystemImageTracepoint.c)
 *     MiSessionUnloadAllImages @ 0x140681CD8 (MiSessionUnloadAllImages.c)
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x1407049C8 (MiObtainSectionForDriver.c)
 *     MmChangeImageProtection @ 0x140724040 (MmChangeImageProtection.c)
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     MmEnumerateSystemImages @ 0x140820ED0 (MmEnumerateSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x14084DCFC (MmFreeBootDriverInitializationCode.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1408656D4 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmBackSystemImageWithPagefile @ 0x140871CDC (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2D6E0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140A2D7F0 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x140A38210 (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x140A39960 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140A3B84C (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x140A3C1E4 (MiUnloadHotPatch.c)
 *     MiShutdownSystem @ 0x140AAB9E0 (MiShutdownSystem.c)
 *     VfAddVerifierEntry @ 0x140ADD650 (VfAddVerifierEntry.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE7FA0 (MmApplyVerifierToRunningImage.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140AE805C (MmEnableOrDisableVerifierForDriver.c)
 *     MiInitializeRetpoline @ 0x140B44F88 (MiInitializeRetpoline.c)
 *     MiReloadBootLoadedDrivers @ 0x140B469CC (MiReloadBootLoadedDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x140B5CCDC (MiInitializeLoadedModuleList.c)
 *     MmRegisterHotPatches @ 0x140B73D38 (MmRegisterHotPatches.c)
 *     MmReapplyBootPatchImports @ 0x140B743BC (MmReapplyBootPatchImports.c)
 *     MmDiscardDriverSection @ 0x140B74914 (MmDiscardDriverSection.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B75990 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140B99A6C (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
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
