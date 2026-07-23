/*
 * XREFs of _PnpCtxRegQueryValue @ 0x14087791C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140374FE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140674410 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140876728 (DrvDbGetDriverPackageMappedProperty.c)
 *     PipMigratePnpState @ 0x140B3FB4C (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140B3FC30 (PpDevCfgInit.c)
 *     PipResetDevices @ 0x140B3FFDC (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140B94274 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B943C0 (PipMigrateCleanServiceCallback.c)
 *     PipProcessPendingObjects @ 0x140B95120 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x1406CE898 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
