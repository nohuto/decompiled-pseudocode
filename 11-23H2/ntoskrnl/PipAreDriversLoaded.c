/*
 * XREFs of PipAreDriversLoaded @ 0x14022B0E8
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CBF34 (PiControlGetUserFlagsFromDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140842950 (PiDevCfgProcessDeviceCallback.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867478 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x14022B10C (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304), a3, a4);
}
