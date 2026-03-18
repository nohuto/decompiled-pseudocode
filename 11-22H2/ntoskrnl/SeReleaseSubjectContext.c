/*
 * XREFs of SeReleaseSubjectContext @ 0x140738340
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     SeReportSecurityEventWithSubCategory @ 0x140226BA0 (SeReportSecurityEventWithSubCategory.c)
 *     NtSetInformationFile @ 0x1402A6AD0 (NtSetInformationFile.c)
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 *     RtlCheckTokenMembershipEx @ 0x14031D010 (RtlCheckTokenMembershipEx.c)
 *     CmQueryLayeredKey @ 0x14035D634 (CmQueryLayeredKey.c)
 *     FsRtlCancelNotify @ 0x14035DB70 (FsRtlCancelNotify.c)
 *     RtlCheckTokenCapability @ 0x14036FFE0 (RtlCheckTokenCapability.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403AFEAC (ExCpuSetResourceManagerAccessCheck.c)
 *     IoCheckRedirectionTrustLevel @ 0x1403D09D0 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x140558BE0 (IoComputeRedirectionTrustLevel.c)
 *     WdipAccessCheck @ 0x1405FB898 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140616408 (CmpCheckHivePrimaryFileReadWriteAccess.c)
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
 *     EtwpFindOrCreateGuidEntry @ 0x1406BF740 (EtwpFindOrCreateGuidEntry.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 *     ObReferenceObjectByName @ 0x1406C2D00 (ObReferenceObjectByName.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406C3580 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1406C3600 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     WmipCreateGuidObject @ 0x1406C50E0 (WmipCreateGuidObject.c)
 *     NtSetValueKey @ 0x1406D2AB0 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmQueryKey @ 0x1406D7280 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 *     PsOpenProcess @ 0x1406F3DB0 (PsOpenProcess.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     NtDeleteValueKey @ 0x14070EAF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FD60 (NtDeleteKey.c)
 *     ExpWnfCheckCallerAccess @ 0x1407138E4 (ExpWnfCheckCallerAccess.c)
 *     ObReferenceObjectByNameEx @ 0x1407153CC (ObReferenceObjectByNameEx.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A70 (AlpcpCheckConnectionSecurity.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1407379D0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     PspInsertThread @ 0x14073F3AC (PspInsertThread.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14077F198 (PiUEventFreeClientRegistrationContext.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14078149C (EtwpCheckProviderLoggingAccess.c)
 *     PiDqQueryRelease @ 0x14078773C (PiDqQueryRelease.c)
 *     IopGetDeviceInterfaces @ 0x140787900 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlObjectEventRelease @ 0x140788E58 (PiPnpRtlObjectEventRelease.c)
 *     PiCMValidateDeviceInstance @ 0x14079A3C8 (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x14079ADDC (PiAuVerifyAccessToObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407A60F0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtSetInformationKey @ 0x1407ACFA0 (NtSetInformationKey.c)
 *     CmpIsSystemEntity @ 0x1407BAAAC (CmpIsSystemEntity.c)
 *     PsOpenThread @ 0x1407BBD70 (PsOpenThread.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC7B0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1407C3E40 (NtCloseObjectAuditAlarm.c)
 *     FsRtlNotifyCleanup @ 0x1407C5000 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1407C5090 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407C5A60 (IoGetDeviceInterfaceAlias.c)
 *     PspCombineSecurityDomains @ 0x1407C729C (PspCombineSecurityDomains.c)
 *     PiCMGetDeviceIdList @ 0x1407C7F0C (PiCMGetDeviceIdList.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1407C87E0 (NtPrivilegedServiceAuditAlarm.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C9098 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1407C9244 (ObpCaptureBoundaryDescriptor.c)
 *     PspIsContextAdmin @ 0x1407D07D8 (PspIsContextAdmin.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D08DC (MiIsUserQueryVmCallerTrusted.c)
 *     NtGetNextProcess @ 0x1407D4BE0 (NtGetNextProcess.c)
 *     ExIsRestrictedCaller @ 0x1407D8DA4 (ExIsRestrictedCaller.c)
 *     SeDeleteAccessState @ 0x1407DB4C0 (SeDeleteAccessState.c)
 *     NtGetNextThread @ 0x1407DF590 (NtGetNextThread.c)
 *     NtOpenObjectAuditAlarm @ 0x1407DFA00 (NtOpenObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x1407E05E4 (SeCheckPrivilegedObject.c)
 *     ExCheckFullProcessInformationAccess @ 0x1407E0FE8 (ExCheckFullProcessInformationAccess.c)
 *     PspSetQuotaLimits @ 0x1407E3E94 (PspSetQuotaLimits.c)
 *     ExpCheckWakeTimerAccess @ 0x1407EBE48 (ExpCheckWakeTimerAccess.c)
 *     PopBootStatAccessCheck @ 0x1407EC0D4 (PopBootStatAccessCheck.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F1980 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepFilterToken @ 0x1407F2180 (SepFilterToken.c)
 *     ObpGetIntegrityLevel @ 0x1407F3C74 (ObpGetIntegrityLevel.c)
 *     RtlIsSandboxedToken @ 0x1407F3D10 (RtlIsSandboxedToken.c)
 *     SepCheckCreateLowBox @ 0x1407F4A84 (SepCheckCreateLowBox.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5620 (NtImpersonateAnonymousToken.c)
 *     PiDqOpenUserObjectRegKey @ 0x1407FAB88 (PiDqOpenUserObjectRegKey.c)
 *     SeAuditBootConfiguration @ 0x14084231C (SeAuditBootConfiguration.c)
 *     SepAuditAssignPrimaryToken @ 0x140842830 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140842A54 (SeAuditProcessCreation.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140846050 (NtPrivilegeObjectAuditAlarm.c)
 *     NtSetUuidSeed @ 0x140851720 (NtSetUuidSeed.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140852B70 (FsRtlNotifyFilterChangeDirectory.c)
 *     PsCreateMinimalProcess @ 0x140853DBC (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085CC20 (PspCreateProcess.c)
 *     FsRtlNotifyCleanupAll @ 0x140940050 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x140958A90 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x14095B7C0 (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095B968 (PiAuDoesClientHavePrivilege.c)
 *     PspIumVerifyParentSd @ 0x1409B6494 (PspIumVerifyParentSd.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9410 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA0C4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA680 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1409CA84C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409CAA40 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1409CABF8 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x1409CB148 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409CB310 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB54C (SeOperationAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1409CDF70 (NtDeleteObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CE080 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CE140 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E89E8 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140A01994 (CMFCheckAccess.c)
 *     NtRenameKey @ 0x140A0E060 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x140A11EDC (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A121EC (CmUpdateFeatureUsageSubscription.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18024 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A182E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A18FDC (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140A1916C (CmpDoBuildVirtualStack.c)
 *     VfUtilIsLocalSystem @ 0x140AC3724 (VfUtilIsLocalSystem.c)
 *     CmFcInitSystem2 @ 0x140B3A224 (CmFcInitSystem2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
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
