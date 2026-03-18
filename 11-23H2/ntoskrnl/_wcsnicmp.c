/*
 * XREFs of _wcsnicmp @ 0x1403D9B90
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x140561FEC (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x14059D4C0 (PopIdleWakeAreIdenticalWakeSources.c)
 *     VrpComparePath @ 0x14068D9A4 (VrpComparePath.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     LookupAccessMaskInTable @ 0x14069DD6C (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x14069DE04 (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x14069E4E0 (FContainCallBackAce.c)
 *     LookupSidInTable @ 0x1406C3660 (LookupSidInTable.c)
 *     WmipPrepareWnodeSI @ 0x1406C64E4 (WmipPrepareWnodeSI.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1407020A0 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140751958 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     _RegRtlCreateTreeTransacted @ 0x140797A30 (_RegRtlCreateTreeTransacted.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407C3BD4 (WmipGetGuidObjectInstanceInfo.c)
 *     EtwpExpandFileName @ 0x1407F6D80 (EtwpExpandFileName.c)
 *     BiOpenSystemStore @ 0x1408034C4 (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x1408066E0 (BiCreatePartitionDevice.c)
 *     BiIsValidDiskDevice @ 0x140807764 (BiIsValidDiskDevice.c)
 *     BiCleanupLoadedStores @ 0x140807BE4 (BiCleanupLoadedStores.c)
 *     LocalGetSDControlForString @ 0x140808E84 (LocalGetSDControlForString.c)
 *     PiSwIrpCleanup @ 0x14081A4B4 (PiSwIrpCleanup.c)
 *     LookupAceFlagsInTable @ 0x140840074 (LookupAceFlagsInTable.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140856294 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwFindSwDevice @ 0x140869F3C (PiSwFindSwDevice.c)
 *     IopCheckIfNotNativeDriver @ 0x1409445E4 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140948968 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140970188 (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1409BF6A0 (punycode_decode.c)
 *     punycode_encode @ 0x1409BFD08 (punycode_encode.c)
 *     GetAttributeName @ 0x1409D30F4 (GetAttributeName.c)
 *     GetOperandValue @ 0x1409D35CC (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1409D3BB8 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1409D46E8 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1409D6474 (LocalpGetStringForCondition.c)
 *     EtwpApplyContainerFilter @ 0x1409F4CF8 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x1409F4E44 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4F18 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140A002B0 (NtSetSystemEnvironmentValueEx.c)
 *     CmpPreserveSystemHiveData @ 0x140A224FC (CmpPreserveSystemHiveData.c)
 *     SdbGetMergeRedirectPath @ 0x140A4E100 (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EB08 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpResolveMatchingFile @ 0x140A51760 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140A51E28 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x140A54DFC (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A56928 (AslpPathWildcardMakeLeaves.c)
 *     AslEnvVarQuery @ 0x140A5754C (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x140A577C4 (AslpEnvResolveVars.c)
 *     BiCreateFileDeviceElement @ 0x140A5CE84 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x140A60204 (SiIsValidDiskDevice.c)
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
