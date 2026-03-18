/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1406F5750
 * Callers:
 *     PoRunDownDeviceObject @ 0x140304F58 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403B06D0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x140504BF0 (HalStartDynamicProcessor.c)
 *     DifMmLockPagableSectionByHandleWrapper @ 0x1405E7410 (DifMmLockPagableSectionByHandleWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140A99DC0 (IoUnregisterShutdownNotification.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 *     ExQuerySystemLockInformation @ 0x140AAAD68 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB150 (ExpSystemErrorHandler2.c)
 *     MiShutdownSystem @ 0x140AABB70 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 *     KiInitializeMTRR @ 0x140B5F650 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A7E0 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
