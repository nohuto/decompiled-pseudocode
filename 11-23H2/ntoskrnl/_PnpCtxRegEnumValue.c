/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1408779A4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140374E40 (PipUpdateDeviceProducts.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140812FA0 (PiDrvDbResolveFilePathKeyValues.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140839FC4 (_PnpGetGenericStorePropertyLocales.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140875BC4 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140877798 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970188 (PiDrvDbOverlayCopyKeys.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140A63E34 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140A642C4 (_CmGetDevicesInBaseContainerList.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140A6703C (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6AFBC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6C9F8 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x140B3FFDC (PipResetDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x14086E5D0 (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        void *a2,
        ULONG a3,
        void *a4,
        _DWORD *a5,
        _DWORD *a6,
        void *a7,
        unsigned int *a8)
{
  return RegRtlEnumValue(a2, a3, a4, a5, a6, a7, a8);
}
