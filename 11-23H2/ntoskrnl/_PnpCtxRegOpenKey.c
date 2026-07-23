/*
 * XREFs of _PnpCtxRegOpenKey @ 0x140812A90
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140374FE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140674410 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PiPnpRtlInit @ 0x1408114E4 (PiPnpRtlInit.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140876728 (DrvDbGetDriverPackageMappedProperty.c)
 *     PipMigratePnpState @ 0x140B3FB4C (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x140B3FC30 (PpDevCfgInit.c)
 *     PipProcessPendingServices @ 0x140B3FEC4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B3FF50 (PipProcessPendingOsExtensionResources.c)
 *     PipResetDevices @ 0x140B3FFDC (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x140B94274 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B943C0 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B94B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B94D90 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140B95120 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
