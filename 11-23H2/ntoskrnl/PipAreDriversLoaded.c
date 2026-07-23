/*
 * XREFs of PipAreDriversLoaded @ 0x14022B1F8
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CBF64 (PiControlGetUserFlagsFromDeviceNode.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140842C50 (PiDevCfgProcessDeviceCallback.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408676B8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x14022B21C (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304), a3, a4);
}
