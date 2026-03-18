/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x140877B0C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140374E40 (PipUpdateDeviceProducts.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140812FA0 (PiDrvDbResolveFilePathKeyValues.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140877798 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiCMEnumerateSubKeys @ 0x14096999C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970188 (PiDrvDbOverlayCopyKeys.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A642C4 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140A6477C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140A66D04 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140A6703C (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A67E0C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140A686E4 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6AFBC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140A6B4F8 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A6C510 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6C9F8 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x140B3FFDC (PipResetDevices.c)
 *     PipMigrateCleanServiceCallback @ 0x140B943C0 (PipMigrateCleanServiceCallback.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x14086B3E4 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(
        __int64 a1,
        void *a2,
        _DWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, a7);
}
