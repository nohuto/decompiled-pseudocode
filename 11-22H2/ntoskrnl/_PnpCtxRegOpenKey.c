/*
 * XREFs of _PnpCtxRegOpenKey @ 0x140814D40
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140673F30 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PiPnpRtlInit @ 0x140813794 (PiPnpRtlInit.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1408769B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PipMigratePnpState @ 0x140B4324C (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140B43330 (PpDevCfgInit.c)
 *     PipProcessPendingServices @ 0x140B435C4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B43650 (PipProcessPendingOsExtensionResources.c)
 *     PipResetDevices @ 0x140B436DC (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140B95274 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B953C0 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B95B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B95D90 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140B96120 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1406CEDD0 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
