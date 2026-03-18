/*
 * XREFs of _PnpCtxRegCloseKey @ 0x140876914
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140374E40 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140673EC0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipInitComputerIds @ 0x140B3A22C (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B3C53C (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140B3FB4C (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x140B3FEC4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B3FF50 (PipProcessPendingOsExtensionResources.c)
 *     PipResetDevices @ 0x140B3FFDC (PipResetDevices.c)
 *     PipMigrateCleanServiceCallback @ 0x140B943C0 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B94B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B94D90 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
