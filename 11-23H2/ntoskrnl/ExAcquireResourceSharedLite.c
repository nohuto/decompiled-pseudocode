/*
 * XREFs of ExAcquireResourceSharedLite @ 0x14023D680
 * Callers:
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1402265DC (SeTokenGetNoChildProcessRestricted.c)
 *     SepCanTokenMatchAllPackageSid @ 0x14022C79C (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x140297BE0 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByType @ 0x1402B3AC0 (SeAccessCheckByType.c)
 *     SepTrustLevelCheck @ 0x1402B5BA8 (SepTrustLevelCheck.c)
 *     SepFilterCheck @ 0x1402B5CA0 (SepFilterCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x1402F7214 (LdrpKrnGetDataTableEntry.c)
 *     SepAcquireOrderedReadLocks @ 0x140356CCC (SepAcquireOrderedReadLocks.c)
 *     IopCreateSecurityCheck @ 0x14035A74C (IopCreateSecurityCheck.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x14035BDF4 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1403654BC (SeTokenGetRedirectionTrustPolicy.c)
 *     MiDeleteBootRange @ 0x14038FEF8 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14039FF1C (MmVerifyCallbackFunctionCheckFlags.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x14053EED0 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x14053F190 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x14054FED0 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1405542C0 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x1405B8EBC (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1405B91F8 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CEEA0 (VfDriverRemoveAllDifVerification.c)
 *     DifExAcquireResourceSharedLiteWrapper @ 0x1405D71D0 (DifExAcquireResourceSharedLiteWrapper.c)
 *     MmLockRegistryRecoverySections @ 0x14061A888 (MmLockRegistryRecoverySections.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     IoOpenDeviceRegistryKey @ 0x140687CA0 (IoOpenDeviceRegistryKey.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14069E6A4 (IopSetDeviceSecurityDescriptor.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406A2AC0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x1406A3A44 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x1406A3C40 (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x1406A3C6C (PspLockRootJobShared.c)
 *     MiLogPinDriverAddress @ 0x1406ACDB8 (MiLogPinDriverAddress.c)
 *     MmIsDriverVerifyingByAddress @ 0x1406AD520 (MmIsDriverVerifyingByAddress.c)
 *     SeQuerySecurityAttributesToken @ 0x1406B7A00 (SeQuerySecurityAttributesToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA488 (SeIsTokenAssignableToProcess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 *     SeLockSubjectContext @ 0x1406C3170 (SeLockSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x1406C7934 (SepValidOwnerSubjectContext.c)
 *     PiGetRelatedDevice @ 0x1406C91E8 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9958 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1406C9990 (PpDevNodeLockTree.c)
 *     PiDmGetObject @ 0x1406D8120 (PiDmGetObject.c)
 *     ObpCreateHandle @ 0x1406E4510 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     IopMountVolume @ 0x1407014E8 (IopMountVolume.c)
 *     SeQueryUserSidToken @ 0x140714E00 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x1407196A0 (SeQueryInformationToken.c)
 *     SeQuerySessionIdToken @ 0x14071A060 (SeQuerySessionIdToken.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D4E0 (EtwpGetSidExtendedHeaderItem.c)
 *     NtQuerySecurityAttributesToken @ 0x1407264E0 (NtQuerySecurityAttributesToken.c)
 *     SepDuplicateToken @ 0x140729B80 (SepDuplicateToken.c)
 *     RtlpNewSecurityObject @ 0x14072A400 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14072BD70 (RtlpSetSecurityObject.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     NtQueryInformationToken @ 0x140730AD0 (NtQueryInformationToken.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     NtDuplicateToken @ 0x1407353C0 (NtDuplicateToken.c)
 *     AlpcpExposeTokenAttribute @ 0x14073C230 (AlpcpExposeTokenAttribute.c)
 *     PspInsertThread @ 0x14073EE9C (PspInsertThread.c)
 *     SeQuerySessionIdTokenEx @ 0x140741DD0 (SeQuerySessionIdTokenEx.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14077E8E0 (ExpGetSystemFirmwareTableInformation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407884D0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1407887CC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140789358 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140789460 (PiPnpRtlGetCurrentOperation.c)
 *     PiQueryAndAllocateBootResources @ 0x14078FA24 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140790344 (PiQueryResourceRequirements.c)
 *     PiProcessNewDeviceNode @ 0x140795748 (PiProcessNewDeviceNode.c)
 *     PiUpdateDevicePanel @ 0x140798C40 (PiUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x14079B9C4 (PipProcessStartPhase3.c)
 *     WmipGetSMBiosTableData @ 0x1407AB75C (WmipGetSMBiosTableData.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B44C8 (FsRtlAcquireFileForCcFlushEx.c)
 *     PiCreateDeviceInstanceKey @ 0x1407D75F8 (PiCreateDeviceInstanceKey.c)
 *     SeQueryServerSiloToken @ 0x1407DE9E0 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x1407E3860 (PspSetProcessPriorityClass.c)
 *     NtSetInformationToken @ 0x1407EF480 (NtSetInformationToken.c)
 *     SepFilterToken @ 0x1407F1C00 (SepFilterToken.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407F9F68 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmEnumObjectsWithCallback @ 0x1407FB440 (PiDmEnumObjectsWithCallback.c)
 *     IoCreateDriver @ 0x140810200 (IoCreateDriver.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140816154 (IopWriteAllocatedResourcesToRegistry.c)
 *     MmEnumerateSystemImages @ 0x140820BD0 (MmEnumerateSystemImages.c)
 *     SepGetLogonSessionAccountInfo @ 0x14083D4AC (SepGetLogonSessionAccountInfo.c)
 *     FsRtlCopyWrite @ 0x14084FAE0 (FsRtlCopyWrite.c)
 *     PnpDriverLoadingFailed @ 0x140862C44 (PnpDriverLoadingFailed.c)
 *     IopReleaseDeviceResources @ 0x14086977C (IopReleaseDeviceResources.c)
 *     PipMakeGloballyUniqueId @ 0x140870A20 (PipMakeGloballyUniqueId.c)
 *     IopInvalidateVolumesForDevice @ 0x140881E68 (IopInvalidateVolumesForDevice.c)
 *     PspValidateJobAffinityState @ 0x140884928 (PspValidateJobAffinityState.c)
 *     RtlPcToFilePath @ 0x1408A6090 (RtlPcToFilePath.c)
 *     SepRmGlobalSaclFind @ 0x1408A65B2 (SepRmGlobalSaclFind.c)
 *     SeExamineGlobalSacl @ 0x1408A670A (SeExamineGlobalSacl.c)
 *     FsRtlCopyRead @ 0x14093CD60 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093D350 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D5B0 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140944E48 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x1409521FC (PnpShutdownDevices.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A184 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x14095AD10 (PiDmGetObjectCount.c)
 *     PsSwapProcessWorkingSet @ 0x1409AE6AC (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x1409AF8C0 (PspSetProcessAffinitySafe.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C9660 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x1409CDC98 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1409CF1F0 (SeGetTokenControlInformation.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1409D2424 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     WmipFindSMBiosStructure @ 0x1409DF70C (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x140A03210 (NtMapCMFModule.c)
 *     MmGetSectionRange @ 0x140A30678 (MmGetSectionRange.c)
 *     VfDriverApplyDifVerification @ 0x140ACA308 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACA4C8 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACA648 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140ACA7A8 (VfDriverRemoveDifVerification.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     VslRegisterBootDrivers @ 0x140B729B8 (VslRegisterBootDrivers.c)
 *     ExpPrmInitialization @ 0x140B74A6C (ExpPrmInitialization.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14023DDC0 (ExpAcquireResourceSharedLite.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C88E4 (ExpFastResourceLegacyAcquireShared.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  __int64 Flag; // r8
  unsigned __int8 v5; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v9; // cl
  struct _KTHREAD *v10; // rdx

  Flag = Resource->Flag;
  v5 = (Wait == 0) + 1;
  if ( FeatureFastResource2 )
  {
    if ( (Flag & 0x41) != 1 )
    {
      if ( (Flag & 1) == 0 )
        return ExpAcquireResourceSharedLite(Resource, Wait, Flag, v5);
      CurrentIrql = KeGetCurrentIrql();
      CurrentThread = KeGetCurrentThread();
      if ( CurrentIrql > v5 )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v5, 0LL);
      if ( CurrentIrql < 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        if ( (CurrentThread->ApcState.InProgressFlags & 2) == 0 )
        {
          if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
          {
            Flag = Resource->Flag;
            goto LABEL_12;
          }
LABEL_30:
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
LABEL_29:
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      }
LABEL_28:
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
LABEL_26:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( (Flag & 0x41) == 1 )
    goto LABEL_26;
  Flag = (unsigned __int16)Flag;
  if ( (Flag & 1) != 0 )
  {
    v9 = KeGetCurrentIrql();
    v10 = KeGetCurrentThread();
    if ( v9 > v5 )
      KeBugCheckEx(0x1C6u, 0LL, v9, v5, 0LL);
    if ( v9 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      goto LABEL_28;
    if ( (v10->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_29;
    if ( !v9 && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
      goto LABEL_30;
  }
LABEL_12:
  if ( (Flag & 1) != 0 )
    return ExpFastResourceLegacyAcquireShared((ULONG_PTR)Resource);
  return ExpAcquireResourceSharedLite(Resource, Wait, Flag, v5);
}
