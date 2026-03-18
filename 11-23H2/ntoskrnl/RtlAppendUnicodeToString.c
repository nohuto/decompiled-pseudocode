/*
 * XREFs of RtlAppendUnicodeToString @ 0x14022A860
 * Callers:
 *     LdrpGetResourceFileName @ 0x1403A7224 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x1403AF78C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FA40 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     MiShowBadMapper @ 0x1406310BC (MiShowBadMapper.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1406702CC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140670D18 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1406710C4 (AdtpFormatPrefix.c)
 *     CmpGetCompleteFileName @ 0x14068BFFC (CmpGetCompleteFileName.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140695B38 (CmpQueryHiveRedirectionFileList.c)
 *     RtlpGetRegistryHandle @ 0x1406C61C0 (RtlpGetRegistryHandle.c)
 *     VrpPreLoadKey @ 0x14077A444 (VrpPreLoadKey.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140793BBC (IopBuildGlobalSymbolicLinkString.c)
 *     IopLoadDriver @ 0x1407945D8 (IopLoadDriver.c)
 *     pIoQueryDeviceDescription @ 0x1407CE584 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407CEA28 (pIoQueryBusDescription.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407E2958 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1407FAAD0 (RtlFormatCurrentUserKeyPath.c)
 *     CmpFinishSystemHivesLoad @ 0x14080AF10 (CmpFinishSystemHivesLoad.c)
 *     CmpMachineHiveListInitialize @ 0x14080E378 (CmpMachineHiveListInitialize.c)
 *     CmpBuildMachineHiveMountPoint @ 0x14080E558 (CmpBuildMachineHiveMountPoint.c)
 *     MmCallDllInitialize @ 0x140810E60 (MmCallDllInitialize.c)
 *     PiDrvDbSetupNodeHive @ 0x140811978 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbCreateNode @ 0x140811CDC (PiDrvDbCreateNode.c)
 *     PnpBuildCmResourceList @ 0x1408173BC (PnpBuildCmResourceList.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835270 (IoReportRootDevice.c)
 *     IopGetRootDeviceId @ 0x1408354B8 (IopGetRootDeviceId.c)
 *     AslRegistryBuildMachinePath @ 0x14084E530 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14084E69C (AslRegistryBuildUserPath.c)
 *     CmpMountPreloadedHives @ 0x1408630AC (CmpMountPreloadedHives.c)
 *     IopSymlinkRememberJunction @ 0x14087F418 (IopSymlinkRememberJunction.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408842D4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopSafebootDriverLoad @ 0x140945644 (IopSafebootDriverLoad.c)
 *     PnpLogVetoInformation @ 0x1409643E0 (PnpLogVetoInformation.c)
 *     PiDrvDbMountNode @ 0x140970050 (PiDrvDbMountNode.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCBCC (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDCF8 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1409DF200 (IoWMISuggestInstanceName.c)
 *     ApiSetpConstructPathToExtension @ 0x140A09E90 (ApiSetpConstructPathToExtension.c)
 *     CmpLoadHiveVolatile @ 0x140A0C330 (CmpLoadHiveVolatile.c)
 *     CmRealKCBToVirtualPath @ 0x140A18608 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x140A19D3C (CmpGetVirtualizationID.c)
 *     CmpFlushBackupHive @ 0x140A1A8E8 (CmpFlushBackupHive.c)
 *     SdbResolveDatabaseEx @ 0x140A52770 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x140A56AE0 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x140A5B170 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140A5B480 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x140A5B8D4 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A5BF7C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A5C018 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x140A5C9F4 (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x140B37A4C (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140B37CBC (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x140B5A278 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B71B08 (CmpOpenSystemDriverHiveContext.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B94930 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
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
