/*
 * XREFs of ZwSetSystemInformation @ 0x14041E480
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x1405CBB60 (SmKmStoreTerminateWorker.c)
 *     DifZwSetSystemInformationWrapper @ 0x1405F7810 (DifZwSetSystemInformationWrapper.c)
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x1409D7A1C (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1409D7B24 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1409D7D10 (SmStoreResize.c)
 *     IoShutdownSystem @ 0x140A99B34 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140B721AC (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
