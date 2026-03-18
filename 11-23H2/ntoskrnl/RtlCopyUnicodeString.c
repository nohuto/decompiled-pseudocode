/*
 * XREFs of RtlCopyUnicodeString @ 0x1402AEFD0
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140225370 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x140225630 (AuthzBasepAllocateSecurityAttribute.c)
 *     PnpAllocateWatchdog @ 0x14031E298 (PnpAllocateWatchdog.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140370E08 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     HalpInterruptRegisterController @ 0x1403786E4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x140378AB4 (HalpTimerRegister.c)
 *     IoQueryFullDriverPath @ 0x1403A6EC0 (IoQueryFullDriverPath.c)
 *     RtlPcToFileName @ 0x1403AA390 (RtlPcToFileName.c)
 *     HalpRegisterDmaController @ 0x140517564 (HalpRegisterDmaController.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14060FCE0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     VrpBuildKeyPath @ 0x14068DE10 (VrpBuildKeyPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0530 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     PipProcessDevNodeTree @ 0x1406CB690 (PipProcessDevNodeTree.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopCheckTopDeviceHint @ 0x140767B78 (IopCheckTopDeviceHint.c)
 *     PnpConcatenateUnicodeStrings @ 0x140793624 (PnpConcatenateUnicodeStrings.c)
 *     FsRtlFindInTunnelCacheEx @ 0x14079EFF0 (FsRtlFindInTunnelCacheEx.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1407CB3C8 (SdbMakeIndexKeyFromStringEx.c)
 *     IopBootLog @ 0x1407E34CC (IopBootLog.c)
 *     SepAddTokenOriginClaim @ 0x1407E3654 (SepAddTokenOriginClaim.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1407F41C8 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1407F4A9C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407F8B3C (EtwpGetLoggerInfoFromContext.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FAD40 (RtlConvertSidToUnicodeString.c)
 *     CmpMergeVersionDescriptors @ 0x14080E89C (CmpMergeVersionDescriptors.c)
 *     IopInitializeDeviceInstanceKey @ 0x1408121C4 (IopInitializeDeviceInstanceKey.c)
 *     PsRegisterSiloMonitor @ 0x14081EE90 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x14081F1F0 (ObCreateObjectTypeEx.c)
 *     IoReportRootDevice @ 0x140835270 (IoReportRootDevice.c)
 *     AdtpObjsInitialize @ 0x1408420C8 (AdtpObjsInitialize.c)
 *     PopConnectToPolicyDevice @ 0x14084CD50 (PopConnectToPolicyDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x140865E64 (PnpCopyDeviceInstancePath.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867478 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x140868A58 (PnpProcessRelation.c)
 *     PiDeferSetInterfaceState @ 0x140871D90 (PiDeferSetInterfaceState.c)
 *     IopSymlinkUpdateECP @ 0x14088075C (IopSymlinkUpdateECP.c)
 *     PiUEventHandleVetoEvent @ 0x140882948 (PiUEventHandleVetoEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140884150 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408842D4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     RtlPcToFilePath @ 0x1408A6090 (RtlPcToFilePath.c)
 *     IopSafebootDriverLoad @ 0x140945644 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14095669C (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140959138 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x1409641CC (PnpFinalizeVetoedRemove.c)
 *     PiInitializeDevice @ 0x14096DAE4 (PiInitializeDevice.c)
 *     PipRecordOpenHandleVeto @ 0x140971C14 (PipRecordOpenHandleVeto.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140971E18 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PopFxRegisterComponentPerfStates @ 0x140985948 (PopFxRegisterComponentPerfStates.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AD718 (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD78C (PspSiloInitializeSystemRootSymlink.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CE160 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     CmpLoadHiveVolatile @ 0x140A0C330 (CmpLoadHiveVolatile.c)
 *     CmpGetVirtualizationID @ 0x140A19D3C (CmpGetVirtualizationID.c)
 *     MiAllocateSecureImageActivePatch @ 0x140A3481C (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x140A36A80 (MiFillActivePatchesQueryBuffer.c)
 *     MiQueryLoadedPatches @ 0x140A3B2C0 (MiQueryLoadedPatches.c)
 *     MiQuerySingleLoadedPatch @ 0x140A3BB5C (MiQuerySingleLoadedPatch.c)
 *     AhcCacheQueryHwId @ 0x140A71D4C (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73E44 (ObGetSiloRootDirectoryPath.c)
 *     PopProcessWakeSourceWork @ 0x140AA1338 (PopProcessWakeSourceWork.c)
 *     ExtEnvRegisterIommu @ 0x140B47FE4 (ExtEnvRegisterIommu.c)
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
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
