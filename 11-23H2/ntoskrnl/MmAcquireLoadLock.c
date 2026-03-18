/*
 * XREFs of MmAcquireLoadLock @ 0x1407045B0
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
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == (struct _KTHREAD *)qword_140C658D8 )
  {
    ++dword_140C658E0;
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    v1 = KeAbPreAcquire((__int64)&qword_140C658D0, 0LL);
    v2 = v1;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C658D0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C658D0, v1, (__int64)&qword_140C658D0);
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
    qword_140C658D8 = (__int64)CurrentThread;
    dword_140C658E0 = 1;
  }
  return CurrentThread;
}
