/*
 * XREFs of ZwSetSystemInformation @ 0x14041E810
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x1405CC0D0 (SmKmStoreTerminateWorker.c)
 *     DifZwSetSystemInformationWrapper @ 0x1405F7D80 (DifZwSetSystemInformationWrapper.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x1409D7C1C (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1409D7D24 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1409D7F10 (SmStoreResize.c)
 *     IoShutdownSystem @ 0x140A999A4 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140B721AC (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
