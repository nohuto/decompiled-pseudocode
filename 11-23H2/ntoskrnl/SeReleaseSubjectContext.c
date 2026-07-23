/*
 * XREFs of SeReleaseSubjectContext @ 0x140737DB0
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     SeReportSecurityEventWithSubCategory @ 0x140226C90 (SeReportSecurityEventWithSubCategory.c)
 *     NtSetInformationFile @ 0x1402A6E80 (NtSetInformationFile.c)
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     RtlCheckTokenMembershipEx @ 0x14031D480 (RtlCheckTokenMembershipEx.c)
 *     CmQueryLayeredKey @ 0x14035DE24 (CmQueryLayeredKey.c)
 *     FsRtlCancelNotify @ 0x14035E360 (FsRtlCancelNotify.c)
 *     RtlCheckTokenCapability @ 0x1403707D0 (RtlCheckTokenCapability.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B071C (ExCpuSetResourceManagerAccessCheck.c)
 *     IoCheckRedirectionTrustLevel @ 0x1403D1210 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x140559200 (IoComputeRedirectionTrustLevel.c)
 *     WdipAccessCheck @ 0x1405FBD78 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1406168E8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpLogHiveFileInaccessible @ 0x14068F4C0 (CmpLogHiveFileInaccessible.c)
 *     CmpFlushNotify @ 0x140699940 (CmpFlushNotify.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     SeSubProcessToken @ 0x1406B722C (SeSubProcessToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7ED8 (PspOneDirectionSecurityDomainCombine.c)
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     PspInsertProcess @ 0x1406B9FD4 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x1406BB18C (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB280 (SeAuditingWithTokenForSubcategory.c)
 *     EtwpAccessCheck @ 0x1406BDC0C (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1406BF720 (EtwpFindOrCreateGuidEntry.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0560 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     ObReferenceObjectByName @ 0x1406C2C80 (ObReferenceObjectByName.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406C3500 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1406C3580 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     WmipCreateGuidObject @ 0x1406C5060 (WmipCreateGuidObject.c)
 *     NtSetValueKey @ 0x1406D2A30 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmQueryKey @ 0x1406D7200 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2330 (CmKeyBodyRemapToVirtualForEnum.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 *     PsOpenProcess @ 0x1406F3D30 (PsOpenProcess.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     NtDeleteValueKey @ 0x14070EC50 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FEC0 (NtDeleteKey.c)
 *     ExpWnfCheckCallerAccess @ 0x140713A44 (ExpWnfCheckCallerAccess.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715C00 (AlpcpCheckConnectionSecurity.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1407376C0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077EE78 (PiUEventFreeClientRegistrationContext.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14078117C (EtwpCheckProviderLoggingAccess.c)
 *     PiDqQueryRelease @ 0x14078741C (PiDqQueryRelease.c)
 *     IopGetDeviceInterfaces @ 0x1407875E0 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlObjectEventRelease @ 0x140788B38 (PiPnpRtlObjectEventRelease.c)
 *     PiCMValidateDeviceInstance @ 0x14079A0A8 (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x14079AABC (PiAuVerifyAccessToObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407A5DD0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtSetInformationKey @ 0x1407ACBE0 (NtSetInformationKey.c)
 *     CmpIsSystemEntity @ 0x1407BA7DC (CmpIsSystemEntity.c)
 *     PsOpenThread @ 0x1407BBAB0 (PsOpenThread.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC4F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1407C3B80 (NtCloseObjectAuditAlarm.c)
 *     FsRtlNotifyCleanup @ 0x1407C4D40 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1407C4DD0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407C57A0 (IoGetDeviceInterfaceAlias.c)
 *     PspCombineSecurityDomains @ 0x1407C6FDC (PspCombineSecurityDomains.c)
 *     PiCMGetDeviceIdList @ 0x1407C7C4C (PiCMGetDeviceIdList.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1407C8520 (NtPrivilegedServiceAuditAlarm.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C8DD8 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1407C8F84 (ObpCaptureBoundaryDescriptor.c)
 *     PspIsContextAdmin @ 0x1407D0548 (PspIsContextAdmin.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D064C (MiIsUserQueryVmCallerTrusted.c)
 *     NtGetNextProcess @ 0x1407D4930 (NtGetNextProcess.c)
 *     ExIsRestrictedCaller @ 0x1407D8AF4 (ExIsRestrictedCaller.c)
 *     SeDeleteAccessState @ 0x1407DB210 (SeDeleteAccessState.c)
 *     NtGetNextThread @ 0x1407DF2E0 (NtGetNextThread.c)
 *     NtOpenObjectAuditAlarm @ 0x1407DF750 (NtOpenObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x1407E0334 (SeCheckPrivilegedObject.c)
 *     ExCheckFullProcessInformationAccess @ 0x1407E0D38 (ExCheckFullProcessInformationAccess.c)
 *     PspSetQuotaLimits @ 0x1407E3BE4 (PspSetQuotaLimits.c)
 *     ExpCheckWakeTimerAccess @ 0x1407EBB98 (ExpCheckWakeTimerAccess.c)
 *     PopBootStatAccessCheck @ 0x1407EBE24 (PopBootStatAccessCheck.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F16D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepFilterToken @ 0x1407F1ED0 (SepFilterToken.c)
 *     ObpGetIntegrityLevel @ 0x1407F39C4 (ObpGetIntegrityLevel.c)
 *     RtlIsSandboxedToken @ 0x1407F3A60 (RtlIsSandboxedToken.c)
 *     SepCheckCreateLowBox @ 0x1407F46E4 (SepCheckCreateLowBox.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5280 (NtImpersonateAnonymousToken.c)
 *     PiDqOpenUserObjectRegKey @ 0x1407FA7A8 (PiDqOpenUserObjectRegKey.c)
 *     SeAuditBootConfiguration @ 0x14084088C (SeAuditBootConfiguration.c)
 *     SepAuditAssignPrimaryToken @ 0x140840DA0 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140840FC4 (SeAuditProcessCreation.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1408445C0 (NtPrivilegeObjectAuditAlarm.c)
 *     NtSetUuidSeed @ 0x140850B10 (NtSetUuidSeed.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140851F60 (FsRtlNotifyFilterChangeDirectory.c)
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085CA00 (PspCreateProcess.c)
 *     FsRtlNotifyCleanupAll @ 0x1409401A0 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x140958BE0 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x14095B910 (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095BAB8 (PiAuDoesClientHavePrivilege.c)
 *     PspIumVerifyParentSd @ 0x1409B65E4 (PspIumVerifyParentSd.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9560 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA214 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA7D0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1409CA99C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409CAB90 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1409CAD48 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x1409CB298 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409CB460 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB69C (SeOperationAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1409CE0C0 (NtDeleteObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CE1D0 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CE290 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E8BC8 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140A01B74 (CMFCheckAccess.c)
 *     NtRenameKey @ 0x140A0E260 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x140A120DC (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A123EC (CmUpdateFeatureUsageSubscription.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18224 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A184E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A191DC (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140A1936C (CmpDoBuildVirtualStack.c)
 *     VfUtilIsLocalSystem @ 0x140AC2744 (VfUtilIsLocalSystem.c)
 *     CmFcInitSystem2 @ 0x140B36B2C (CmFcInitSystem2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
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
