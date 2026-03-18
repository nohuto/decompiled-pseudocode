/*
 * XREFs of _RegRtlSetValue @ 0x1407D4F54
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x1407956A8 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140798154 (_PnpSetPropertyWorker.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140812B88 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140815520 (PiDrvDbResolveFilePathKeyValues.c)
 *     _SysCtxOpenControlSet @ 0x140856138 (_SysCtxOpenControlSet.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140866A64 (DrvDbSetRegValueMappedProperty.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086CE70 (_CmSetDeviceRegPropWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087C0D0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140881418 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140969C6C (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970238 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970D90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _PnpCtxRegSetValue @ 0x140A60BF4 (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A63400 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140A65A10 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A697D8 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140A69BA4 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A69D80 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A6A1EC (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A708 (_RegRtlCopyTreeInternal.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6CA68 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6D224 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x14041B2A0 (ZwSetValueKey.c)
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
