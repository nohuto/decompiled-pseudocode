/*
 * XREFs of _wcsnicmp @ 0x1403D9D70
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1405626AC (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x14059D9B0 (PopIdleWakeAreIdenticalWakeSources.c)
 *     VrpComparePath @ 0x14068D9A4 (VrpComparePath.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     LookupAccessMaskInTable @ 0x14069DD6C (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x14069DE04 (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x14069E4E0 (FContainCallBackAce.c)
 *     LookupSidInTable @ 0x1406C3690 (LookupSidInTable.c)
 *     WmipPrepareWnodeSI @ 0x1406C6514 (WmipPrepareWnodeSI.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407022B0 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140751B48 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     _RegRtlCreateTreeTransacted @ 0x140797C20 (_RegRtlCreateTreeTransacted.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407C3EA4 (WmipGetGuidObjectInstanceInfo.c)
 *     EtwpExpandFileName @ 0x1407F7050 (EtwpExpandFileName.c)
 *     BiOpenSystemStore @ 0x140803794 (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x1408069B0 (BiCreatePartitionDevice.c)
 *     BiIsValidDiskDevice @ 0x140807A34 (BiIsValidDiskDevice.c)
 *     BiCleanupLoadedStores @ 0x140807EB4 (BiCleanupLoadedStores.c)
 *     LocalGetSDControlForString @ 0x140809154 (LocalGetSDControlForString.c)
 *     PiSwIrpCleanup @ 0x14081A784 (PiSwIrpCleanup.c)
 *     LookupAceFlagsInTable @ 0x140840374 (LookupAceFlagsInTable.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140856594 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwFindSwDevice @ 0x14086A17C (PiSwFindSwDevice.c)
 *     IopCheckIfNotNativeDriver @ 0x1409447E4 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140948B68 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970388 (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1409BF8A0 (punycode_decode.c)
 *     punycode_encode @ 0x1409BFF08 (punycode_encode.c)
 *     GetAttributeName @ 0x1409D32F4 (GetAttributeName.c)
 *     GetOperandValue @ 0x1409D37CC (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1409D3DB8 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1409D48E8 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1409D6674 (LocalpGetStringForCondition.c)
 *     EtwpApplyContainerFilter @ 0x1409F4F88 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x1409F50D4 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F51A8 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140A00540 (NtSetSystemEnvironmentValueEx.c)
 *     CmpPreserveSystemHiveData @ 0x140A227AC (CmpPreserveSystemHiveData.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E3B0 (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EDB8 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpResolveMatchingFile @ 0x140A51A10 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140A520D8 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x140A550AC (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A56BD8 (AslpPathWildcardMakeLeaves.c)
 *     AslEnvVarQuery @ 0x140A577FC (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x140A57A74 (AslpEnvResolveVars.c)
 *     BiCreateFileDeviceElement @ 0x140A5D134 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x140A604B4 (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B98234 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  int v3; // r9d
  size_t v4; // rbx
  const wchar_t *v5; // r11
  signed __int64 v6; // r10
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8

  v3 = 0;
  v4 = MaxCount;
  v5 = Str2;
  if ( MaxCount )
  {
    v6 = (char *)Str1 - (char *)Str2;
    do
    {
      v7 = *(const wchar_t *)((char *)v5 + v6);
      v8 = v7 + 32;
      if ( (unsigned __int16)(v7 - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v5 + v6);
      v9 = *v5++;
      v10 = v9 + 32;
      if ( (unsigned __int16)(v9 - 65) > 0x19u )
        v10 = v9;
      --v4;
    }
    while ( v4 && v8 && v8 == v10 );
    return v8 - v10;
  }
  return v3;
}
