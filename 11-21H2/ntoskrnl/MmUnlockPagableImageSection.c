/*
 * XREFs of MmUnlockPagableImageSection @ 0x140241620
 * Callers:
 *     PnprUnlockPagesForReplace @ 0x140953314 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x140971B68 (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14098C0DC (PopDirectedDripsNotifyAppsAndServices.c)
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 *     PopUnlockAfterSleepWorker @ 0x140A4E3A0 (PopUnlockAfterSleepWorker.c)
 *     HalpPowerInitSystem @ 0x140A5B230 (HalpPowerInitSystem.c)
 *     IoUnregisterShutdownNotification @ 0x140A65430 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x140A69FD8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x140A6C8B4 (ExQuerySystemLockInformation.c)
 *     VfClearDifWithoutReboot @ 0x140A82240 (VfClearDifWithoutReboot.c)
 *     VfInitDifWithoutReboot @ 0x140A82298 (VfInitDifWithoutReboot.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140AAB6EC (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
