/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x14082B3C0
 * Callers:
 *     PiCreateDriverSwDevices @ 0x14079C080 (PiCreateDriverSwDevices.c)
 *     _PnpGetGenericObjectList @ 0x14082A148 (_PnpGetGenericObjectList.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14082A1F0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14082A3C0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14082A4EC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14082A834 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14082A990 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14082ACC0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14082AF70 (_CmDeviceClassesSubkeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1408764E8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140951E3C (PipHardwareConfigClearStartOverrides.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A6C510 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbGetObjectSubKeyList @ 0x140A6C850 (DrvDbGetObjectSubKeyList.c)
 *     PipMigratePnpState @ 0x140B3FB4C (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x14082B418 (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpCtxRegEnumKeyWithCallback(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *(_QWORD *)(a1 + 224);
  v6[3] = v4;
  v6[4] = PnpCtxInternalEnumKeyCallback;
  v6[0] = a1;
  v6[1] = a3;
  v6[5] = v6;
  v6[2] = a4;
  return RegRtlEnumKeyWithCallback(a2);
}
