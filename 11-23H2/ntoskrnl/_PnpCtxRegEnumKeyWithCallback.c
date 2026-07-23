/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x14082B6C0
 * Callers:
 *     PiCreateDriverSwDevices @ 0x14079C270 (PiCreateDriverSwDevices.c)
 *     _PnpGetGenericObjectList @ 0x14082A448 (_PnpGetGenericObjectList.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14082A4F0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14082A6C0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14082A7EC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14082AB34 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14082AC90 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14082AFC0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14082B270 (_CmDeviceClassesSubkeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140876728 (DrvDbGetDriverPackageMappedProperty.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14095203C (PipHardwareConfigClearStartOverrides.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A6C7C0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbGetObjectSubKeyList @ 0x140A6CB00 (DrvDbGetObjectSubKeyList.c)
 *     PipMigratePnpState @ 0x140B3FB4C (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x14082B718 (_RegRtlEnumKeyWithCallback.c)
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
