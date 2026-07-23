/*
 * XREFs of RtlCopyUnicodeString @ 0x1402AF260
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140225480 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x140225740 (AuthzBasepAllocateSecurityAttribute.c)
 *     PnpAllocateWatchdog @ 0x14031E528 (PnpAllocateWatchdog.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140370FA8 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     HalpInterruptRegisterController @ 0x140378884 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x140378C54 (HalpTimerRegister.c)
 *     IoQueryFullDriverPath @ 0x1403A70A0 (IoQueryFullDriverPath.c)
 *     RtlPcToFileName @ 0x1403AA570 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x140517AB4 (HalpRegisterDmaController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x140610230 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0560 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopCheckTopDeviceHint @ 0x140767D68 (IopCheckTopDeviceHint.c)
 *     PnpConcatenateUnicodeStrings @ 0x140793814 (PnpConcatenateUnicodeStrings.c)
 *     FsRtlFindInTunnelCacheEx @ 0x14079F1E0 (FsRtlFindInTunnelCacheEx.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1407CB698 (SdbMakeIndexKeyFromStringEx.c)
 *     IopBootLog @ 0x1407E379C (IopBootLog.c)
 *     SepAddTokenOriginClaim @ 0x1407E3924 (SepAddTokenOriginClaim.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1407F4498 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1407F4D6C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407F8E0C (EtwpGetLoggerInfoFromContext.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FB010 (RtlConvertSidToUnicodeString.c)
 *     CmpMergeVersionDescriptors @ 0x14080EB6C (CmpMergeVersionDescriptors.c)
 *     IopInitializeDeviceInstanceKey @ 0x140812494 (IopInitializeDeviceInstanceKey.c)
 *     PsRegisterSiloMonitor @ 0x14081F190 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x14081F4F0 (ObCreateObjectTypeEx.c)
 *     IoReportRootDevice @ 0x140835570 (IoReportRootDevice.c)
 *     AdtpObjsInitialize @ 0x1408423C8 (AdtpObjsInitialize.c)
 *     PopConnectToPolicyDevice @ 0x14084D050 (PopConnectToPolicyDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x1408660A4 (PnpCopyDeviceInstancePath.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408676B8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x140868C98 (PnpProcessRelation.c)
 *     PiDeferSetInterfaceState @ 0x140871FD0 (PiDeferSetInterfaceState.c)
 *     IopSymlinkUpdateECP @ 0x14088099C (IopSymlinkUpdateECP.c)
 *     PiUEventHandleVetoEvent @ 0x140882B88 (PiUEventHandleVetoEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140884390 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140884514 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     RtlPcToFilePath @ 0x1408A62E0 (RtlPcToFilePath.c)
 *     IopSafebootDriverLoad @ 0x140945844 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14095689C (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140959338 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x1409643CC (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 *     PipRecordOpenHandleVeto @ 0x140971E14 (PipRecordOpenHandleVeto.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140972018 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PopFxRegisterComponentPerfStates @ 0x140985B48 (PopFxRegisterComponentPerfStates.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AD918 (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD98C (PspSiloInitializeSystemRootSymlink.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CE360 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmpGetVirtualizationID @ 0x140A19FEC (CmpGetVirtualizationID.c)
 *     MiAllocateSecureImageActivePatch @ 0x140A34ACC (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x140A36D30 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x140A3B570 (MiQueryLoadedPatches.c)
 *     MiQuerySingleLoadedPatch @ 0x140A3BE0C (MiQuerySingleLoadedPatch.c)
 *     AhcCacheQueryHwId @ 0x140A71FFC (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A740F4 (ObGetSiloRootDirectoryPath.c)
 *     PopProcessWakeSourceWork @ 0x140AA11A8 (PopProcessWakeSourceWork.c)
 *     ExtEnvRegisterIommu @ 0x140B47FE4 (ExtEnvRegisterIommu.c)
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
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
