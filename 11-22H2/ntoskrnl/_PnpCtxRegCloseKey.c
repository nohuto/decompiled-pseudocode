/*
 * XREFs of _PnpCtxRegCloseKey @ 0x140876DE4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140673F30 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipInitComputerIds @ 0x140B3D92C (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B3FC3C (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140B4324C (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x140B435C4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B43650 (PipProcessPendingOsExtensionResources.c)
 *     PipResetDevices @ 0x140B436DC (PipResetDevices.c)
 *     PipMigrateCleanServiceCallback @ 0x140B953C0 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B95B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B95D90 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
