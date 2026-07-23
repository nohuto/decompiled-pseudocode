/*
 * XREFs of ExAcquireResourceSharedLite @ 0x14023D750
 * Callers:
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1402266EC (SeTokenGetNoChildProcessRestricted.c)
 *     SepCanTokenMatchAllPackageSid @ 0x14022C8AC (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x140297E70 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     SepTrustLevelCheck @ 0x1402B5E38 (SepTrustLevelCheck.c)
 *     SepFilterCheck @ 0x1402B5F30 (SepFilterCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x1402F74A4 (LdrpKrnGetDataTableEntry.c)
 *     SepAcquireOrderedReadLocks @ 0x140356E6C (SepAcquireOrderedReadLocks.c)
 *     IopCreateSecurityCheck @ 0x14035A8EC (IopCreateSecurityCheck.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x14035BF94 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14036565C (SeTokenGetRedirectionTrustPolicy.c)
 *     MiDeleteBootRange @ 0x1403900D8 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403A00FC (MmVerifyCallbackFunctionCheckFlags.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x14053F590 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x14053F850 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x140550590 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x140554980 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x1405B942C (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1405B9768 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CF410 (VfDriverRemoveAllDifVerification.c)
 *     DifExAcquireResourceSharedLiteWrapper @ 0x1405D7740 (DifExAcquireResourceSharedLiteWrapper.c)
 *     MmLockRegistryRecoverySections @ 0x14061ADD8 (MmLockRegistryRecoverySections.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     IoOpenDeviceRegistryKey @ 0x140687CA0 (IoOpenDeviceRegistryKey.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14069E6A4 (IopSetDeviceSecurityDescriptor.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406A2AC0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x1406A3A44 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x1406A3C40 (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x1406A3C6C (PspLockRootJobShared.c)
 *     MiLogPinDriverAddress @ 0x1406ACDB8 (MiLogPinDriverAddress.c)
 *     MmIsDriverVerifyingByAddress @ 0x1406AD550 (MmIsDriverVerifyingByAddress.c)
 *     SeQuerySecurityAttributesToken @ 0x1406B7A30 (SeQuerySecurityAttributesToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA4B8 (SeIsTokenAssignableToProcess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     SeLockSubjectContext @ 0x1406C31A0 (SeLockSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x1406C7964 (SepValidOwnerSubjectContext.c)
 *     PiGetRelatedDevice @ 0x1406C9218 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406C9988 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1406C99C0 (PpDevNodeLockTree.c)
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     IopMountVolume @ 0x1407016F8 (IopMountVolume.c)
 *     SeQueryUserSidToken @ 0x140715010 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     SeQuerySessionIdToken @ 0x14071A260 (SeQuerySessionIdToken.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D6E0 (EtwpGetSidExtendedHeaderItem.c)
 *     NtQuerySecurityAttributesToken @ 0x1407266E0 (NtQuerySecurityAttributesToken.c)
 *     SepDuplicateToken @ 0x140729D80 (SepDuplicateToken.c)
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14072BF70 (RtlpSetSecurityObject.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     NtQueryInformationToken @ 0x140730CC0 (NtQueryInformationToken.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     NtDuplicateToken @ 0x1407355B0 (NtDuplicateToken.c)
 *     AlpcpExposeTokenAttribute @ 0x14073C420 (AlpcpExposeTokenAttribute.c)
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 *     SeQuerySessionIdTokenEx @ 0x140741FC0 (SeQuerySessionIdTokenEx.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14077EAD0 (ExpGetSystemFirmwareTableInformation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407886C0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140789548 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140789650 (PiPnpRtlGetCurrentOperation.c)
 *     PiQueryAndAllocateBootResources @ 0x14078FC14 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140790534 (PiQueryResourceRequirements.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PiUpdateDevicePanel @ 0x140798E30 (PiUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 *     WmipGetSMBiosTableData @ 0x1407AB94C (WmipGetSMBiosTableData.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B47A8 (FsRtlAcquireFileForCcFlushEx.c)
 *     PiCreateDeviceInstanceKey @ 0x1407D78C8 (PiCreateDeviceInstanceKey.c)
 *     SeQueryServerSiloToken @ 0x1407DECB0 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x1407E3B30 (PspSetProcessPriorityClass.c)
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 *     SepFilterToken @ 0x1407F1ED0 (SepFilterToken.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA238 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmEnumObjectsWithCallback @ 0x1407FB710 (PiDmEnumObjectsWithCallback.c)
 *     IoCreateDriver @ 0x1408104D0 (IoCreateDriver.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140816424 (IopWriteAllocatedResourcesToRegistry.c)
 *     MmEnumerateSystemImages @ 0x140820ED0 (MmEnumerateSystemImages.c)
 *     SepGetLogonSessionAccountInfo @ 0x14083D7AC (SepGetLogonSessionAccountInfo.c)
 *     FsRtlCopyWrite @ 0x14084FDE0 (FsRtlCopyWrite.c)
 *     PnpDriverLoadingFailed @ 0x140862E84 (PnpDriverLoadingFailed.c)
 *     IopReleaseDeviceResources @ 0x1408699BC (IopReleaseDeviceResources.c)
 *     PipMakeGloballyUniqueId @ 0x140870C60 (PipMakeGloballyUniqueId.c)
 *     IopInvalidateVolumesForDevice @ 0x1408820A8 (IopInvalidateVolumesForDevice.c)
 *     PspValidateJobAffinityState @ 0x140884B68 (PspValidateJobAffinityState.c)
 *     RtlPcToFilePath @ 0x1408A62E0 (RtlPcToFilePath.c)
 *     SepRmGlobalSaclFind @ 0x1408A6802 (SepRmGlobalSaclFind.c)
 *     SeExamineGlobalSacl @ 0x1408A695A (SeExamineGlobalSacl.c)
 *     FsRtlCopyRead @ 0x14093CF60 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093D550 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D7B0 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140945048 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x1409523FC (PnpShutdownDevices.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A384 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x14095AF10 (PiDmGetObjectCount.c)
 *     PsSwapProcessWorkingSet @ 0x1409AE8AC (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x1409AFAC0 (PspSetProcessAffinitySafe.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C9860 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x1409CDE98 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1409CF3F0 (SeGetTokenControlInformation.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1409D2624 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     WmipFindSMBiosStructure @ 0x1409DF90C (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x140A034A0 (NtMapCMFModule.c)
 *     MmGetSectionRange @ 0x140A30928 (MmGetSectionRange.c)
 *     VfDriverApplyDifVerification @ 0x140ACA2F8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACA4B8 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACA638 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140ACA798 (VfDriverRemoveDifVerification.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     VslRegisterBootDrivers @ 0x140B729B8 (VslRegisterBootDrivers.c)
 *     ExpPrmInitialization @ 0x140B74A6C (ExpPrmInitialization.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14023DE90 (ExpAcquireResourceSharedLite.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C8AC4 (ExpFastResourceLegacyAcquireShared.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
