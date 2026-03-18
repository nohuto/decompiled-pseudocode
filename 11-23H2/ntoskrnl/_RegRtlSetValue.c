/*
 * XREFs of _RegRtlSetValue @ 0x1407D49D4
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x140795198 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140797C44 (_PnpSetPropertyWorker.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140810608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140812FA0 (PiDrvDbResolveFilePathKeyValues.c)
 *     _SysCtxOpenControlSet @ 0x140855228 (_SysCtxOpenControlSet.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140866594 (DrvDbSetRegValueMappedProperty.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086C9A0 (_CmSetDeviceRegPropWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087BC00 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140880F48 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140969BBC (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970188 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140970CE0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _PnpCtxRegSetValue @ 0x140A60B84 (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A63390 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140A659A0 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A69768 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140A69B34 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A69D10 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A6A17C (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A698 (_RegRtlCopyTreeInternal.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140A6C9F8 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6D1B4 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6C0 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x14041B960 (ZwSetValueKey.c)
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
