/*
 * XREFs of RtlCopyUnicodeString @ 0x1402AEFA0
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140225390 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x140225650 (AuthzBasepAllocateSecurityAttribute.c)
 *     PnpAllocateWatchdog @ 0x14031E0B8 (PnpAllocateWatchdog.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1403707B8 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     HalpInterruptRegisterController @ 0x140378D34 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x140379104 (HalpTimerRegister.c)
 *     IoQueryFullDriverPath @ 0x1403A6730 (IoQueryFullDriverPath.c)
 *     RtlPcToFileName @ 0x1403A9CA0 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x140517624 (HalpRegisterDmaController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14060FD50 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     PipProcessDevNodeTree @ 0x1406CB740 (PipProcessDevNodeTree.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopCheckTopDeviceHint @ 0x140768088 (IopCheckTopDeviceHint.c)
 *     PnpConcatenateUnicodeStrings @ 0x140793B34 (PnpConcatenateUnicodeStrings.c)
 *     FsRtlFindInTunnelCacheEx @ 0x14079F500 (FsRtlFindInTunnelCacheEx.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1407CB958 (SdbMakeIndexKeyFromStringEx.c)
 *     IopBootLog @ 0x1407E3A4C (IopBootLog.c)
 *     SepAddTokenOriginClaim @ 0x1407E3BD4 (SepAddTokenOriginClaim.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1407F483C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1407F510C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407F91F0 (EtwpGetLoggerInfoFromContext.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FB3F0 (RtlConvertSidToUnicodeString.c)
 *     CmpMergeVersionDescriptors @ 0x140810E1C (CmpMergeVersionDescriptors.c)
 *     IopInitializeDeviceInstanceKey @ 0x140814744 (IopInitializeDeviceInstanceKey.c)
 *     PsRegisterSiloMonitor @ 0x140821410 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140821770 (ObCreateObjectTypeEx.c)
 *     IoReportRootDevice @ 0x140836DC0 (IoReportRootDevice.c)
 *     AdtpObjsInitialize @ 0x140843E58 (AdtpObjsInitialize.c)
 *     PopConnectToPolicyDevice @ 0x14084DFB0 (PopConnectToPolicyDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x140866334 (PnpCopyDeviceInstancePath.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867948 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x140868F28 (PnpProcessRelation.c)
 *     PiDeferSetInterfaceState @ 0x140872260 (PiDeferSetInterfaceState.c)
 *     IopSymlinkUpdateECP @ 0x140880C2C (IopSymlinkUpdateECP.c)
 *     PiUEventHandleVetoEvent @ 0x140882E18 (PiUEventHandleVetoEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140884620 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408847A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     RtlPcToFilePath @ 0x1408A6570 (RtlPcToFilePath.c)
 *     IopSafebootDriverLoad @ 0x1409456F4 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14095674C (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1409591E8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x14096427C (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 *     PipRecordOpenHandleVeto @ 0x140971CC4 (PipRecordOpenHandleVeto.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140971EC8 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PopFxRegisterComponentPerfStates @ 0x1409859F8 (PopFxRegisterComponentPerfStates.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AD7C8 (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD83C (PspSiloInitializeSystemRootSymlink.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CE210 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     CmpLoadHiveVolatile @ 0x140A0C3E0 (CmpLoadHiveVolatile.c)
 *     CmpGetVirtualizationID @ 0x140A19DEC (CmpGetVirtualizationID.c)
 *     MiAllocateSecureImageActivePatch @ 0x140A3488C (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x140A36AF0 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x140A3B330 (MiQueryLoadedPatches.c)
 *     MiQuerySingleLoadedPatch @ 0x140A3BBCC (MiQuerySingleLoadedPatch.c)
 *     AhcCacheQueryHwId @ 0x140A71DBC (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73EB4 (ObGetSiloRootDirectoryPath.c)
 *     PopProcessWakeSourceWork @ 0x140AA13F8 (PopProcessWakeSourceWork.c)
 *     ExtEnvRegisterIommu @ 0x140B4B6E4 (ExtEnvRegisterIommu.c)
 *     StartFirstUserProcess @ 0x140B69B90 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 */

void __stdcall RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // r8d
  unsigned int MaximumLength; // eax
  wchar_t *Buffer; // rdx
  wchar_t *v6; // rsi
  unsigned __int64 v7; // rbx

  if ( SourceString )
  {
    Length = SourceString->Length;
    MaximumLength = DestinationString->MaximumLength;
    Buffer = SourceString->Buffer;
    if ( (unsigned __int16)Length <= (unsigned __int16)MaximumLength )
      MaximumLength = Length;
    v6 = DestinationString->Buffer;
    v7 = MaximumLength;
    DestinationString->Length = MaximumLength;
    memmove(v6, Buffer, MaximumLength);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      v6[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
