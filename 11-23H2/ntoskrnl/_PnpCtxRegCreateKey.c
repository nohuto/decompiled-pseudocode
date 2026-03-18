/*
 * XREFs of _PnpCtxRegCreateKey @ 0x140797EC0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140374E40 (PipUpdateDeviceProducts.c)
 *     _PnpOpenPropertiesKey @ 0x1406CDC40 (_PnpOpenPropertiesKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x140795198 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140797C44 (_PnpSetPropertyWorker.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140876E58 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14087FF70 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140880F48 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970188 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140970728 (PiDrvDbOverlayNodeHive.c)
 *     _CmAddPanelDeviceWorker @ 0x140A659A0 (_CmAddPanelDeviceWorker.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140B3FB4C (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B94B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B94D90 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x140797F3C (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(__int64 a1, __int64 a2)
{
  return RegRtlCreateKeyTransacted(a2);
}
