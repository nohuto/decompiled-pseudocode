/*
 * XREFs of MmUnlockPagableImageSection @ 0x14025A440
 * Callers:
 *     PnprUnlockPagesForReplace @ 0x140966FD4 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x140973808 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1409839F4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x140A35388 (MiApplyImageHotPatch.c)
 *     HalpPowerInitSystem @ 0x140A90A30 (HalpPowerInitSystem.c)
 *     IoUnregisterShutdownNotification @ 0x140A99DC0 (IoUnregisterShutdownNotification.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA6950 (PopUnlockAfterSleepWorker.c)
 *     ExQuerySystemLockInformation @ 0x140AAAD68 (ExQuerySystemLockInformation.c)
 *     MiShutdownSystem @ 0x140AABB70 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 *     VfClearDifWithoutReboot @ 0x140AC2BDC (VfClearDifWithoutReboot.c)
 *     VfInitDifWithoutReboot @ 0x140AC2C34 (VfInitDifWithoutReboot.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140AEF590 (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A7E0 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
