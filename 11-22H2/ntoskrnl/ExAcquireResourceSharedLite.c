/*
 * XREFs of ExAcquireResourceSharedLite @ 0x14023D660
 * Callers:
 *     MiLookupDataTableEntry @ 0x1402136C0 (MiLookupDataTableEntry.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1402265FC (SeTokenGetNoChildProcessRestricted.c)
 *     SepCanTokenMatchAllPackageSid @ 0x14022C7BC (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x140297AC0 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 *     SepTrustLevelCheck @ 0x1402B5B78 (SepTrustLevelCheck.c)
 *     SepFilterCheck @ 0x1402B5C70 (SepFilterCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x1402F7214 (LdrpKrnGetDataTableEntry.c)
 *     SepAcquireOrderedReadLocks @ 0x1403566CC (SepAcquireOrderedReadLocks.c)
 *     IopCreateSecurityCheck @ 0x14035A14C (IopCreateSecurityCheck.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x14035B7A4 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x140364E6C (SeTokenGetRedirectionTrustPolicy.c)
 *     MiDeleteBootRange @ 0x14038E378 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14039FC2C (MmVerifyCallbackFunctionCheckFlags.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x14053EF80 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x14053F240 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x14054FF70 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x140554360 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x1405B8F4C (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1405B9288 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CEF30 (VfDriverRemoveAllDifVerification.c)
 *     DifExAcquireResourceSharedLiteWrapper @ 0x1405D7260 (DifExAcquireResourceSharedLiteWrapper.c)
 *     MmLockRegistryRecoverySections @ 0x14061A8F8 (MmLockRegistryRecoverySections.c)
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
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 *     SeLockSubjectContext @ 0x1406C3220 (SeLockSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x1406C79E4 (SepValidOwnerSubjectContext.c)
 *     PiGetRelatedDevice @ 0x1406C9298 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9A08 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1406C9A40 (PpDevNodeLockTree.c)
 *     PiDmGetObject @ 0x1406D81D0 (PiDmGetObject.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 *     SeQueryUserSidToken @ 0x140714EB0 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x140719710 (SeQueryInformationToken.c)
 *     SeQuerySessionIdToken @ 0x14071A0D0 (SeQuerySessionIdToken.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D550 (EtwpGetSidExtendedHeaderItem.c)
 *     NtQuerySecurityAttributesToken @ 0x140726550 (NtQuerySecurityAttributesToken.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     RtlpNewSecurityObject @ 0x14072A470 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14072BDE0 (RtlpSetSecurityObject.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     NtQueryInformationToken @ 0x140730A90 (NtQueryInformationToken.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     NtDuplicateToken @ 0x1407358C0 (NtDuplicateToken.c)
 *     AlpcpExposeTokenAttribute @ 0x14073C740 (AlpcpExposeTokenAttribute.c)
 *     PspInsertThread @ 0x14073F3AC (PspInsertThread.c)
 *     SeQuerySessionIdTokenEx @ 0x1407422E0 (SeQuerySessionIdTokenEx.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14077EDF0 (ExpGetSystemFirmwareTableInformation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407889E0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x140788CDC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140789868 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140789970 (PiPnpRtlGetCurrentOperation.c)
 *     PiQueryAndAllocateBootResources @ 0x14078FF34 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140790854 (PiQueryResourceRequirements.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     PiUpdateDevicePanel @ 0x140799150 (PiUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x14079BED4 (PipProcessStartPhase3.c)
 *     WmipGetSMBiosTableData @ 0x1407ABD0C (WmipGetSMBiosTableData.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B4A78 (FsRtlAcquireFileForCcFlushEx.c)
 *     PiCreateDeviceInstanceKey @ 0x1407D7B78 (PiCreateDeviceInstanceKey.c)
 *     SeQueryServerSiloToken @ 0x1407DEF60 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x1407E3DE0 (PspSetProcessPriorityClass.c)
 *     NtSetInformationToken @ 0x1407EFA00 (NtSetInformationToken.c)
 *     SepFilterToken @ 0x1407F2180 (SepFilterToken.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA618 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmEnumObjectsWithCallback @ 0x1407FBAF0 (PiDmEnumObjectsWithCallback.c)
 *     IoCreateDriver @ 0x140812780 (IoCreateDriver.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x1408186D4 (IopWriteAllocatedResourcesToRegistry.c)
 *     MmEnumerateSystemImages @ 0x140828110 (MmEnumerateSystemImages.c)
 *     SepGetLogonSessionAccountInfo @ 0x14083F23C (SepGetLogonSessionAccountInfo.c)
 *     FsRtlCopyWrite @ 0x1408509C0 (FsRtlCopyWrite.c)
 *     PnpDriverLoadingFailed @ 0x140862E64 (PnpDriverLoadingFailed.c)
 *     IopReleaseDeviceResources @ 0x140869C4C (IopReleaseDeviceResources.c)
 *     PipMakeGloballyUniqueId @ 0x140870EF0 (PipMakeGloballyUniqueId.c)
 *     IopInvalidateVolumesForDevice @ 0x140882338 (IopInvalidateVolumesForDevice.c)
 *     PspValidateJobAffinityState @ 0x140884DF8 (PspValidateJobAffinityState.c)
 *     RtlPcToFilePath @ 0x1408A6570 (RtlPcToFilePath.c)
 *     SepRmGlobalSaclFind @ 0x1408A6A92 (SepRmGlobalSaclFind.c)
 *     SeExamineGlobalSacl @ 0x1408A6BEA (SeExamineGlobalSacl.c)
 *     FsRtlCopyRead @ 0x14093CE10 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093D400 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D660 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140944EF8 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x1409522AC (PnpShutdownDevices.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A234 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x14095ADC0 (PiDmGetObjectCount.c)
 *     PsSwapProcessWorkingSet @ 0x1409AE75C (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x1409AF970 (PspSetProcessAffinitySafe.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C9710 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x1409CDD48 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1409CF2A0 (SeGetTokenControlInformation.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1409D24D4 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     WmipFindSMBiosStructure @ 0x1409DF7BC (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x140A032C0 (NtMapCMFModule.c)
 *     MmGetSectionRange @ 0x140A306E8 (MmGetSectionRange.c)
 *     VfDriverApplyDifVerification @ 0x140ACB2D8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACB498 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACB618 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140ACB778 (VfDriverRemoveDifVerification.c)
 *     CmpLockRegistry @ 0x140AF64A0 (CmpLockRegistry.c)
 *     VslRegisterBootDrivers @ 0x140B73A00 (VslRegisterBootDrivers.c)
 *     ExpPrmInitialization @ 0x140B7580C (ExpPrmInitialization.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14023DDA0 (ExpAcquireResourceSharedLite.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C8284 (ExpFastResourceLegacyAcquireShared.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
