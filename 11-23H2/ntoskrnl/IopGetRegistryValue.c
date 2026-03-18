/*
 * XREFs of IopGetRegistryValue @ 0x14068CE78
 * Callers:
 *     PnpBootDeviceWait @ 0x140374B4C (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x140395A04 (IopReadDumpRegistry.c)
 *     PnpGetRegistryDword @ 0x1403A09FC (PnpGetRegistryDword.c)
 *     IoInitializeLiveDump @ 0x1403AEC60 (IoInitializeLiveDump.c)
 *     SecureDump_ReadRegistry @ 0x1403B0498 (SecureDump_ReadRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403B0D3C (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x1403B37D8 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140558BC4 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x1405622C8 (PiDevCfgQueryResolveValue.c)
 *     IoOpenDriverRegistryKey @ 0x14068A0E0 (IoOpenDriverRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x14068DB7C (IopBuildFullDriverPath.c)
 *     PnpPrepareDriverLoading @ 0x14068F654 (PnpPrepareDriverLoading.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14078FFDC (PnpGetDeviceResourcesFromRegistry.c)
 *     IopLoadDriver @ 0x1407945D8 (IopLoadDriver.c)
 *     PiFindDevInstMatch @ 0x1407C1FB4 (PiFindDevInstMatch.c)
 *     IopGetRegistryValues @ 0x1407CF034 (IopGetRegistryValues.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1407D8A5C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopInitializeDeviceInstanceKey @ 0x1408121C4 (IopInitializeDeviceInstanceKey.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140812FA0 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A5F0 (PiCreateDriverSwDeviceCallback.c)
 *     IopIsReportedAlready @ 0x1408355C0 (IopIsReportedAlready.c)
 *     IopQuerySecureDeviceClassState @ 0x14083AE7C (IopQuerySecureDeviceClassState.c)
 *     PnpReadDeviceConfiguration @ 0x1408435D8 (PnpReadDeviceConfiguration.c)
 *     PipApplyFunctionToServiceInstances @ 0x14084900C (PipApplyFunctionToServiceInstances.c)
 *     PnpCheckPossibleBootStartDriver @ 0x14084CC70 (PnpCheckPossibleBootStartDriver.c)
 *     IopInitializeDumpPolicySettings @ 0x140861344 (IopInitializeDumpPolicySettings.c)
 *     PipUpdateSetupInProgress @ 0x1408626E8 (PipUpdateSetupInProgress.c)
 *     PnpDriverLoadingFailed @ 0x140862C44 (PnpDriverLoadingFailed.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408655B8 (IopCopyBootLogRegistryToFile.c)
 *     PipCheckForDenyExecute @ 0x140866CA4 (PipCheckForDenyExecute.c)
 *     PiGetServiceNameInfo @ 0x140872060 (PiGetServiceNameInfo.c)
 *     PipUpdateAsyncOptionsCallback @ 0x1408756E0 (PipUpdateAsyncOptionsCallback.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140878BF0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyService @ 0x14087985C (PiDevCfgVerifyService.c)
 *     PiDevCfgBuildIndirectString @ 0x14087B7D4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgMigrateDevice @ 0x14087BF7C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14087E0E4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E424 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x14087EC00 (PiDevCfgResolveVariable.c)
 *     PiRearrangeDeviceInstances @ 0x140882E38 (PiRearrangeDeviceInstances.c)
 *     NtEnableLastKnownGood @ 0x140883E70 (NtEnableLastKnownGood.c)
 *     IopSafebootDriverLoad @ 0x140945644 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14094E7CC (IopLiveDumpInitRegistrySettings.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x140953298 (PipGetDriverKsrGuidRegistryValue.c)
 *     PiGetDeviceRegistryProperty @ 0x140954D18 (PiGetDeviceRegistryProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140957980 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140958320 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x14095B0F0 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DA8C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095E9BC (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14095EBE4 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F208 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14095F678 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095F6E8 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x140960080 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960150 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1409613E0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140961A10 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961AEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140962280 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140962460 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiInitCacheGroupInformation @ 0x140B3C1E8 (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140B3C53C (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeSystemDrivers @ 0x140B3CA80 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140B3CCE8 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140B3E124 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140B3E238 (PipCheckDependencies.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x140B6C43C (PipHardwareConfigInit.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6C0 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x14041B040 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
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
    Pool2 = (void *)ExAllocatePool2(256LL, Length, 1699442505LL);
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
      v14 = (void *)ExAllocatePool2(256LL, ResultLength, 1699442505LL);
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
