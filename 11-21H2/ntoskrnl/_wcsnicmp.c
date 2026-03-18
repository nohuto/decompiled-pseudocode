/*
 * XREFs of _wcsnicmp @ 0x1403E15D0
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x140561B8C (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x1405DBA8C (PopIdleWakeAreIdenticalWakeSources.c)
 *     LocalGetAclForString @ 0x140675DA8 (LocalGetAclForString.c)
 *     LocalGetSDControlForString @ 0x1406769E0 (LocalGetSDControlForString.c)
 *     LookupAccessMaskInTable @ 0x1406773CC (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1406774E8 (LookupAceTypeInTable.c)
 *     LookupSidInTable @ 0x1406775C8 (LookupSidInTable.c)
 *     LookupAceFlagsInTable @ 0x140677764 (LookupAceFlagsInTable.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14068BB80 (IoVolumeDeviceNameToGuidPath.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1406C1A74 (WmipGetGuidObjectInstanceInfo.c)
 *     FContainCallBackAce @ 0x1406C46B4 (FContainCallBackAce.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406C6268 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406DCB10 (NtSetSystemEnvironmentValueEx.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1406EA354 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     EtwpExpandFileName @ 0x1406F0FCC (EtwpExpandFileName.c)
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 *     PiSwFindSwDevice @ 0x140767130 (PiSwFindSwDevice.c)
 *     _RegRtlCreateTreeTransacted @ 0x140772B6C (_RegRtlCreateTreeTransacted.c)
 *     VrpComparePath @ 0x14077EAF0 (VrpComparePath.c)
 *     WmipPrepareWnodeSI @ 0x140783DB8 (WmipPrepareWnodeSI.c)
 *     BiIsValidDiskDevice @ 0x140802FBC (BiIsValidDiskDevice.c)
 *     BiCreatePartitionDevice @ 0x14080397C (BiCreatePartitionDevice.c)
 *     BiCleanupLoadedStores @ 0x140811F10 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140813744 (BiOpenSystemStore.c)
 *     CmpPreserveSystemHiveData @ 0x14091FEFC (CmpPreserveSystemHiveData.c)
 *     IopCheckIfNotNativeDriver @ 0x140933EEC (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x1409379A8 (IopReplaceSymlinkPath.c)
 *     PiSwIrpCleanup @ 0x140953700 (PiSwIrpCleanup.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14095C264 (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1409BBF5C (punycode_decode.c)
 *     punycode_encode @ 0x1409BC59C (punycode_encode.c)
 *     GetAttributeName @ 0x1409D0588 (GetAttributeName.c)
 *     GetOperandValue @ 0x1409D0A60 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1409D1048 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1409D1B40 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x1409D3874 (LocalpGetStringForCondition.c)
 *     EtwpApplyContainerFilter @ 0x1409F4B98 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x1409F4CD8 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4DA0 (EtwpApplyPackageIdFilter.c)
 *     SdbpResolveMatchingFile @ 0x140A12DA0 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140A13308 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x140A1582C (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A172D4 (AslpPathWildcardMakeLeaves.c)
 *     AslEnvVarQuery @ 0x140A17E60 (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x140A18114 (AslpEnvResolveVars.c)
 *     BiCreateFileDeviceElement @ 0x140A1DB40 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x140A22404 (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B4DE2C (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
