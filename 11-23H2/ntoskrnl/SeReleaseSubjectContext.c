/*
 * XREFs of SeReleaseSubjectContext @ 0x140737BC0
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     SeReportSecurityEventWithSubCategory @ 0x140226B80 (SeReportSecurityEventWithSubCategory.c)
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     SeAccessCheckByType @ 0x1402B3AC0 (SeAccessCheckByType.c)
 *     RtlCheckTokenMembershipEx @ 0x14031D1F0 (RtlCheckTokenMembershipEx.c)
 *     CmQueryLayeredKey @ 0x14035DC84 (CmQueryLayeredKey.c)
 *     FsRtlCancelNotify @ 0x14035E1C0 (FsRtlCancelNotify.c)
 *     RtlCheckTokenCapability @ 0x140370630 (RtlCheckTokenCapability.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B053C (ExCpuSetResourceManagerAccessCheck.c)
 *     IoCheckRedirectionTrustLevel @ 0x1403D1030 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x140558B40 (IoComputeRedirectionTrustLevel.c)
 *     WdipAccessCheck @ 0x1405FB808 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140616398 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpLogHiveFileInaccessible @ 0x14068F4C0 (CmpLogHiveFileInaccessible.c)
 *     CmpFlushNotify @ 0x140699940 (CmpFlushNotify.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7EA8 (PspOneDirectionSecurityDomainCombine.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     PspInsertProcess @ 0x1406B9FA4 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x1406BB15C (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB250 (SeAuditingWithTokenForSubcategory.c)
 *     EtwpAccessCheck @ 0x1406BDBDC (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1406BF6F0 (EtwpFindOrCreateGuidEntry.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0530 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 *     ObReferenceObjectByName @ 0x1406C2C50 (ObReferenceObjectByName.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406C34D0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1406C3550 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     WmipCreateGuidObject @ 0x1406C5030 (WmipCreateGuidObject.c)
 *     NtSetValueKey @ 0x1406D2A00 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmQueryKey @ 0x1406D71D0 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2300 (CmKeyBodyRemapToVirtualForEnum.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     sub_1406EF570 @ 0x1406EF570 (sub_1406EF570.c)
 *     PsOpenProcess @ 0x1406F3D00 (PsOpenProcess.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     NtDeleteValueKey @ 0x14070EA40 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FCB0 (NtDeleteKey.c)
 *     ExpWnfCheckCallerAccess @ 0x140713834 (ExpWnfCheckCallerAccess.c)
 *     ObReferenceObjectByNameEx @ 0x14071535C (ObReferenceObjectByNameEx.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A00 (AlpcpCheckConnectionSecurity.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1407374D0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140737B00 (SeSinglePrivilegeCheck.c)
 *     PspInsertThread @ 0x14073EE9C (PspInsertThread.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077EC88 (PiUEventFreeClientRegistrationContext.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140780F8C (EtwpCheckProviderLoggingAccess.c)
 *     PiDqQueryRelease @ 0x14078722C (PiDqQueryRelease.c)
 *     IopGetDeviceInterfaces @ 0x1407873F0 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlObjectEventRelease @ 0x140788948 (PiPnpRtlObjectEventRelease.c)
 *     PiCMValidateDeviceInstance @ 0x140799EB8 (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x14079A8CC (PiAuVerifyAccessToObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407A5BE0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtSetInformationKey @ 0x1407AC9F0 (NtSetInformationKey.c)
 *     CmpIsSystemEntity @ 0x1407BA4FC (CmpIsSystemEntity.c)
 *     PsOpenThread @ 0x1407BB7E0 (PsOpenThread.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC220 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1407C38B0 (NtCloseObjectAuditAlarm.c)
 *     FsRtlNotifyCleanup @ 0x1407C4A70 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1407C4B00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407C54D0 (IoGetDeviceInterfaceAlias.c)
 *     PspCombineSecurityDomains @ 0x1407C6D0C (PspCombineSecurityDomains.c)
 *     PiCMGetDeviceIdList @ 0x1407C797C (PiCMGetDeviceIdList.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1407C8250 (NtPrivilegedServiceAuditAlarm.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C8B08 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1407C8CB4 (ObpCaptureBoundaryDescriptor.c)
 *     PspIsContextAdmin @ 0x1407D0278 (PspIsContextAdmin.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D037C (MiIsUserQueryVmCallerTrusted.c)
 *     NtGetNextProcess @ 0x1407D4660 (NtGetNextProcess.c)
 *     ExIsRestrictedCaller @ 0x1407D8824 (ExIsRestrictedCaller.c)
 *     SeDeleteAccessState @ 0x1407DAF40 (SeDeleteAccessState.c)
 *     NtGetNextThread @ 0x1407DF010 (NtGetNextThread.c)
 *     NtOpenObjectAuditAlarm @ 0x1407DF480 (NtOpenObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x1407E0064 (SeCheckPrivilegedObject.c)
 *     ExCheckFullProcessInformationAccess @ 0x1407E0A68 (ExCheckFullProcessInformationAccess.c)
 *     PspSetQuotaLimits @ 0x1407E3914 (PspSetQuotaLimits.c)
 *     ExpCheckWakeTimerAccess @ 0x1407EB8C8 (ExpCheckWakeTimerAccess.c)
 *     PopBootStatAccessCheck @ 0x1407EBB54 (PopBootStatAccessCheck.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F1400 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepFilterToken @ 0x1407F1C00 (SepFilterToken.c)
 *     ObpGetIntegrityLevel @ 0x1407F36F4 (ObpGetIntegrityLevel.c)
 *     RtlIsSandboxedToken @ 0x1407F3790 (RtlIsSandboxedToken.c)
 *     SepCheckCreateLowBox @ 0x1407F4414 (SepCheckCreateLowBox.c)
 *     NtImpersonateAnonymousToken @ 0x1407F4FB0 (NtImpersonateAnonymousToken.c)
 *     PiDqOpenUserObjectRegKey @ 0x1407FA4D8 (PiDqOpenUserObjectRegKey.c)
 *     SeAuditBootConfiguration @ 0x14084058C (SeAuditBootConfiguration.c)
 *     SepAuditAssignPrimaryToken @ 0x140840AA0 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140840CC4 (SeAuditProcessCreation.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1408442C0 (NtPrivilegeObjectAuditAlarm.c)
 *     NtSetUuidSeed @ 0x140850810 (NtSetUuidSeed.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140851C60 (FsRtlNotifyFilterChangeDirectory.c)
 *     PsCreateMinimalProcess @ 0x140852EAC (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085C7C0 (PspCreateProcess.c)
 *     FsRtlNotifyCleanupAll @ 0x14093FFA0 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x1409589E0 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x14095B710 (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095B8B8 (PiAuDoesClientHavePrivilege.c)
 *     PspIumVerifyParentSd @ 0x1409B63E4 (PspIumVerifyParentSd.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9360 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA014 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA5D0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1409CA79C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409CA990 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1409CAB48 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x1409CB098 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409CB260 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB49C (SeOperationAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1409CDEC0 (NtDeleteObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CDFD0 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CE090 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E8938 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140A018E4 (CMFCheckAccess.c)
 *     NtRenameKey @ 0x140A0DFB0 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x140A11E2C (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A1213C (CmUpdateFeatureUsageSubscription.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A17F74 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A18238 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A18F2C (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140A190BC (CmpDoBuildVirtualStack.c)
 *     VfUtilIsLocalSystem @ 0x140AC2754 (VfUtilIsLocalSystem.c)
 *     CmFcInitSystem2 @ 0x140B36B2C (CmFcInitSystem2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
 */

void __stdcall SeReleaseSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  signed __int64 v2; // r8
  _KPROCESS *Process; // rdx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  PACCESS_TOKEN ClientToken; // rcx
  _QWORD *PrimaryToken; // rax

  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    PrimaryToken = SubjectContext->PrimaryToken;
    if ( PrimaryToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v2 = (signed __int64)SubjectContext->PrimaryToken;
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&Process[1].Affinity.StaticBitmap[5]);
  v4 = Process[1].Affinity.StaticBitmap[5];
  if ( (v2 ^ (unsigned __int64)v4) >= 0xF )
  {
LABEL_10:
    ObfDereferenceObjectWithTag((PVOID)v2, 0x75536553u);
  }
  else
  {
    while ( 1 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[5], v4 + 1, v4);
      if ( v5 == v4 )
        break;
      if ( (v2 ^ (unsigned __int64)v4) >= 0xF )
        goto LABEL_10;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo(v2 - 48, 0, 1u, 0x75536553u);
  }
  ClientToken = SubjectContext->ClientToken;
  SubjectContext->PrimaryToken = 0LL;
  if ( ClientToken )
    ObfDereferenceObjectWithTag(ClientToken, 0x75536553u);
  SubjectContext->ClientToken = 0LL;
}
