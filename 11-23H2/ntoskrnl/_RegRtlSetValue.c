/*
 * XREFs of _RegRtlSetValue @ 0x1407D4CA4
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x140795388 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140797E34 (_PnpSetPropertyWorker.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1408108D8 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140813270 (PiDrvDbResolveFilePathKeyValues.c)
 *     _SysCtxOpenControlSet @ 0x140855528 (_SysCtxOpenControlSet.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1408667D4 (DrvDbSetRegValueMappedProperty.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086CBE0 (_CmSetDeviceRegPropWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087BE40 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140881188 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiCMCreateDevice @ 0x140968630 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140969DBC (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970388 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970EE0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _PnpCtxRegSetValue @ 0x140A60E34 (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A63640 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140A65C50 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A69A18 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140A69DE4 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A69FC0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A6A42C (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A948 (_RegRtlCopyTreeInternal.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6CCA8 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6D464 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x14041BCF0 (ZwSetValueKey.c)
 */

int __fastcall RegRtlSetValue(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, void *a4, ULONG DataSize)
{
  int result; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  ValueName = 0LL;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
    return ZwSetValueKey(KeyHandle, &ValueName, 0, a3, a4, DataSize);
  return result;
}
