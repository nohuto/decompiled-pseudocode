/*
 * XREFs of RtlAppendUnicodeToString @ 0x14022A970
 * Callers:
 *     LdrpGetResourceFileName @ 0x1403A7404 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x1403AF96C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FF90 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     MiShowBadMapper @ 0x14063160C (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14067081C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140671268 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140671614 (AdtpFormatPrefix.c)
 *     CmpGetCompleteFileName @ 0x14068BFFC (CmpGetCompleteFileName.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140695B38 (CmpQueryHiveRedirectionFileList.c)
 *     RtlpGetRegistryHandle @ 0x1406C61F0 (RtlpGetRegistryHandle.c)
 *     VrpPreLoadKey @ 0x14077A634 (VrpPreLoadKey.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140793DAC (IopBuildGlobalSymbolicLinkString.c)
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     pIoQueryDeviceDescription @ 0x1407CE854 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407CECF8 (pIoQueryBusDescription.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407E2C28 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1407FADA0 (RtlFormatCurrentUserKeyPath.c)
 *     CmpFinishSystemHivesLoad @ 0x14080B1E0 (CmpFinishSystemHivesLoad.c)
 *     CmpMachineHiveListInitialize @ 0x14080E648 (CmpMachineHiveListInitialize.c)
 *     CmpBuildMachineHiveMountPoint @ 0x14080E828 (CmpBuildMachineHiveMountPoint.c)
 *     MmCallDllInitialize @ 0x140811130 (MmCallDllInitialize.c)
 *     PiDrvDbSetupNodeHive @ 0x140811C48 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbCreateNode @ 0x140811FAC (PiDrvDbCreateNode.c)
 *     PnpBuildCmResourceList @ 0x14081768C (PnpBuildCmResourceList.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835570 (IoReportRootDevice.c)
 *     IopGetRootDeviceId @ 0x1408357B8 (IopGetRootDeviceId.c)
 *     AslRegistryBuildMachinePath @ 0x14084E830 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084E99C (AslRegistryBuildUserPath.c)
 *     CmpMountPreloadedHives @ 0x1408632EC (CmpMountPreloadedHives.c)
 *     IopSymlinkRememberJunction @ 0x14087F658 (IopSymlinkRememberJunction.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140884514 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopSafebootDriverLoad @ 0x140945844 (IopSafebootDriverLoad.c)
 *     PnpLogVetoInformation @ 0x1409645E0 (PnpLogVetoInformation.c)
 *     PiDrvDbMountNode @ 0x140970250 (PiDrvDbMountNode.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCDCC (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDEF8 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1409DF400 (IoWMISuggestInstanceName.c)
 *     ApiSetpConstructPathToExtension @ 0x140A0A140 (ApiSetpConstructPathToExtension.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmRealKCBToVirtualPath @ 0x140A188B8 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x140A19FEC (CmpGetVirtualizationID.c)
 *     CmpFlushBackupHive @ 0x140A1AB98 (CmpFlushBackupHive.c)
 *     SdbResolveDatabaseEx @ 0x140A52A20 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x140A56D90 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x140A5B420 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140A5B730 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x140A5BB84 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A5C22C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A5C2C8 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x140A5CCA4 (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x140B37A4C (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140B37CBC (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x140B5A278 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B71B08 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B94930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ebp
  wchar_t *v5; // rsi

  if ( !Source )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( Source[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = (unsigned __int16)(2 * v3);
    if ( Destination->Length + v4 <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, (unsigned __int16)(2 * v3));
      Destination->Length += v4;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)v4 >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
