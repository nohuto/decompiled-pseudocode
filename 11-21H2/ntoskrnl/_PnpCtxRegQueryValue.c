/*
 * XREFs of _PnpCtxRegQueryValue @ 0x14082EB54
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14064F770 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x140B0EC60 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140B0ED44 (PpDevCfgInit.c)
 *     PipResetDevices @ 0x140B105C4 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140B4F8C4 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B4FA10 (PipMigrateCleanServiceCallback.c)
 *     PipProcessPendingObjects @ 0x140B50770 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x14077FC64 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
