/*
 * XREFs of IopGetRegistryValue @ 0x14067B838
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403B83F0 (IopInitializeOfflineCrashDump.c)
 *     PnpBootDeviceWait @ 0x1403C5C64 (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x1403CF9A0 (IopReadDumpRegistry.c)
 *     PnpGetRegistryDword @ 0x1403D2D2C (PnpGetRegistryDword.c)
 *     SecureDump_ReadRegistry @ 0x1403DB834 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403DD580 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140559190 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x140561D38 (PiDevCfgQueryResolveValue.c)
 *     PnpPrepareDriverLoading @ 0x1406797C8 (PnpPrepareDriverLoading.c)
 *     PiDevCfgVerifyService @ 0x14067996C (PiDevCfgVerifyService.c)
 *     PiDevCfgCopyDeviceKey @ 0x140679BEC (PiDevCfgCopyDeviceKey.c)
 *     IopQuerySecureDeviceClassState @ 0x14067A4C4 (IopQuerySecureDeviceClassState.c)
 *     IoOpenDriverRegistryKey @ 0x14067A670 (IoOpenDriverRegistryKey.c)
 *     PiFindDevInstMatch @ 0x14067A98C (PiFindDevInstMatch.c)
 *     IopBuildFullDriverPath @ 0x14067B1DC (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x14067B694 (IopGetDriverNameFromKeyNode.c)
 *     PiDevCfgResolveVariable @ 0x14069A1F8 (PiDevCfgResolveVariable.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     IopGetRegistryValues @ 0x1406DE9B8 (IopGetRegistryValues.c)
 *     PiDevCfgMigrateDevice @ 0x1406E2EEC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406E67F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiRearrangeDeviceInstances @ 0x1406E74D0 (PiRearrangeDeviceInstances.c)
 *     PiDevCfgBuildIndirectString @ 0x1407468A0 (PiDevCfgBuildIndirectString.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140748B18 (PnpGetDeviceResourcesFromRegistry.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     PipCheckForDenyExecute @ 0x14076A520 (PipCheckForDenyExecute.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14076B1A8 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgResolveVariableExpression @ 0x140804350 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140804E80 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140805024 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableConstant @ 0x140805210 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14080A890 (PiDevCfgResolveMultiSzValue.c)
 *     NtEnableLastKnownGood @ 0x14080B090 (NtEnableLastKnownGood.c)
 *     PipUpdateAsyncOptionsCallback @ 0x140811B60 (PipUpdateAsyncOptionsCallback.c)
 *     IopIsReportedAlready @ 0x14081EFBC (IopIsReportedAlready.c)
 *     IopCopyBootLogRegistryToFile @ 0x14082848C (IopCopyBootLogRegistryToFile.c)
 *     PnpReadDeviceConfiguration @ 0x14084D6C0 (PnpReadDeviceConfiguration.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140851818 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x140851A60 (PipApplyFunctionToServiceInstances.c)
 *     IopInitializeDumpPolicySettings @ 0x140860A10 (IopInitializeDumpPolicySettings.c)
 *     PipUpdateSetupInProgress @ 0x140862728 (PipUpdateSetupInProgress.c)
 *     PnpDriverLoadingFailed @ 0x140862BA0 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x140934EA4 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14093CA08 (IopLiveDumpInitRegistrySettings.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x140941588 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiGetDeviceRegistryProperty @ 0x140943248 (PiGetDeviceRegistryProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140945E70 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140946900 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x140949330 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14094B864 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14094C79C (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14094C9C4 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14094CFE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14094D458 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14094D4C8 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14094DE60 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14094E490 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14094E570 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14095A750 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14095D488 (PiDrvDbResolveFilePathKeyValues.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B10490 (PipCheckSystemFirmwareUpdated.c)
 *     PiInitCacheGroupInformation @ 0x140B10A4C (PiInitCacheGroupInformation.c)
 *     IopInitializeSystemDrivers @ 0x140B110B4 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140B1131C (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140B1244C (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140B12560 (PipCheckDependencies.c)
 *     PipHardwareConfigInit @ 0x140B28AB0 (PipHardwareConfigInit.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall IopGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  int v10; // ebx
  ULONG Length; // ebx
  void *Pool2; // rdi
  NTSTATUS v13; // ebx
  void *v14; // rbx
  NTSTATUS v15; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-20h] BYREF

  ValueName = 0LL;
  ResultLength = 0;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v10 = (2 * v9 + 31) & 0xFFFFFFF8;
    if ( a3 )
      Length = (a3 + v10 + 7) & 0xFFFFFFF8;
    else
      Length = v10 + 4;
    Pool2 = (void *)ExAllocatePool2(256LL, Length, 538996553LL);
    if ( Pool2 )
    {
      v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool2, Length, &ResultLength);
      if ( v13 >= 0 )
      {
        *a4 = Pool2;
        return 0;
      }
      ExFreePoolWithTag(Pool2, 0);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        return v13;
      v14 = (void *)ExAllocatePool2(256LL, ResultLength, 538996553LL);
      if ( v14 )
      {
        v15 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v14, ResultLength, &ResultLength);
        if ( v15 < 0 )
        {
          ExFreePoolWithTag(v14, 0);
          return v15;
        }
        *a4 = v14;
        return 0;
      }
    }
    return -1073741670;
  }
  return result;
}
