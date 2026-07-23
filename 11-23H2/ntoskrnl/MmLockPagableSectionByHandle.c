/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1406F5960
 * Callers:
 *     PoRunDownDeviceObject @ 0x1403051E8 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403B08B0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x140505140 (HalStartDynamicProcessor.c)
 *     DifMmLockPagableSectionByHandleWrapper @ 0x1405E7980 (DifMmLockPagableSectionByHandleWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140A99C30 (IoUnregisterShutdownNotification.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     ExQuerySystemLockInformation @ 0x140AAABD8 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140AAAFC0 (ExpSystemErrorHandler2.c)
 *     MiShutdownSystem @ 0x140AAB9E0 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AAC6BC (MmDuplicateMemory.c)
 *     KiInitializeMTRR @ 0x140B5F650 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025AA70 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
