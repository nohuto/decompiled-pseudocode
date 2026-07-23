/*
 * XREFs of MmUnlockPagableImageSection @ 0x14025A6D0
 * Callers:
 *     PnprUnlockPagesForReplace @ 0x1409671D4 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x140973A08 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140983BF4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x140A35638 (MiApplyImageHotPatch.c)
 *     HalpPowerInitSystem @ 0x140A908B0 (HalpPowerInitSystem.c)
 *     IoUnregisterShutdownNotification @ 0x140A99C30 (IoUnregisterShutdownNotification.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA67C0 (PopUnlockAfterSleepWorker.c)
 *     ExQuerySystemLockInformation @ 0x140AAABD8 (ExQuerySystemLockInformation.c)
 *     MiShutdownSystem @ 0x140AAB9E0 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AAC6BC (MmDuplicateMemory.c)
 *     VfClearDifWithoutReboot @ 0x140AC2BCC (VfClearDifWithoutReboot.c)
 *     VfInitDifWithoutReboot @ 0x140AC2C24 (VfInitDifWithoutReboot.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140AEF590 (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025AA70 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
