/*
 * XREFs of SeReleaseSubjectContext @ 0x1407CA9B0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     IoComputeRedirectionTrustLevel @ 0x140201F40 (IoComputeRedirectionTrustLevel.c)
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_14024CCD0 @ 0x14024CCD0 (sub_14024CCD0.c)
 *     IoCheckRedirectionTrustLevel @ 0x140252BD0 (IoCheckRedirectionTrustLevel.c)
 *     sub_140258040 @ 0x140258040 (sub_140258040.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1402EC620 (SeReportSecurityEventWithSubCategory.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_14053EFBC @ 0x14053EFBC (sub_14053EFBC.c)
 *     sub_14062C598 @ 0x14062C598 (sub_14062C598.c)
 *     sub_14065FC74 @ 0x14065FC74 (sub_14065FC74.c)
 *     sub_1406634A0 @ 0x1406634A0 (sub_1406634A0.c)
 *     sub_140668294 @ 0x140668294 (sub_140668294.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeDeleteAccessState @ 0x14066C150 (SeDeleteAccessState.c)
 *     sub_14066D0AC @ 0x14066D0AC (sub_14066D0AC.c)
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406950FC @ 0x1406950FC (sub_1406950FC.c)
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 *     sub_1406998CC @ 0x1406998CC (sub_1406998CC.c)
 *     sub_14069F668 @ 0x14069F668 (sub_14069F668.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406AAE50 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1406AB5E0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406ABE00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     sub_1406B5158 @ 0x1406B5158 (sub_1406B5158.c)
 *     sub_1406B5B9C @ 0x1406B5B9C (sub_1406B5B9C.c)
 *     sub_1406B67A0 @ 0x1406B67A0 (sub_1406B67A0.c)
 *     sub_1406BC4A0 @ 0x1406BC4A0 (sub_1406BC4A0.c)
 *     sub_1406C0B60 @ 0x1406C0B60 (sub_1406C0B60.c)
 *     sub_1406C0D00 @ 0x1406C0D00 (sub_1406C0D00.c)
 *     sub_1406C5404 @ 0x1406C5404 (sub_1406C5404.c)
 *     sub_1406C5900 @ 0x1406C5900 (sub_1406C5900.c)
 *     sub_1406C5CA0 @ 0x1406C5CA0 (sub_1406C5CA0.c)
 *     sub_1406CFE50 @ 0x1406CFE50 (sub_1406CFE50.c)
 *     sub_1406D2920 @ 0x1406D2920 (sub_1406D2920.c)
 *     sub_1406D2D00 @ 0x1406D2D00 (sub_1406D2D00.c)
 *     sub_1406D6C24 @ 0x1406D6C24 (sub_1406D6C24.c)
 *     sub_1406D7150 @ 0x1406D7150 (sub_1406D7150.c)
 *     sub_1406D75F4 @ 0x1406D75F4 (sub_1406D75F4.c)
 *     sub_1406D7990 @ 0x1406D7990 (sub_1406D7990.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     sub_1406DD8D0 @ 0x1406DD8D0 (sub_1406DD8D0.c)
 *     sub_1406E6DFC @ 0x1406E6DFC (sub_1406E6DFC.c)
 *     sub_1406E856C @ 0x1406E856C (sub_1406E856C.c)
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     sub_1407243A0 @ 0x1407243A0 (sub_1407243A0.c)
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     sub_1407292A0 @ 0x1407292A0 (sub_1407292A0.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072ACC0 @ 0x14072ACC0 (sub_14072ACC0.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407527F4 @ 0x1407527F4 (sub_1407527F4.c)
 *     sub_140753358 @ 0x140753358 (sub_140753358.c)
 *     sub_140775854 @ 0x140775854 (sub_140775854.c)
 *     sub_140779B80 @ 0x140779B80 (sub_140779B80.c)
 *     sub_140782F2C @ 0x140782F2C (sub_140782F2C.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_140789AEC @ 0x140789AEC (sub_140789AEC.c)
 *     sub_14078A644 @ 0x14078A644 (sub_14078A644.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_140790C44 @ 0x140790C44 (sub_140790C44.c)
 *     sub_140794404 @ 0x140794404 (sub_140794404.c)
 *     sub_140794654 @ 0x140794654 (sub_140794654.c)
 *     sub_140796798 @ 0x140796798 (sub_140796798.c)
 *     sub_14079D470 @ 0x14079D470 (sub_14079D470.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     sub_1407C0160 @ 0x1407C0160 (sub_1407C0160.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1407EF848 @ 0x1407EF848 (sub_1407EF848.c)
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 *     sub_1407F4160 @ 0x1407F4160 (sub_1407F4160.c)
 *     sub_14081A150 @ 0x14081A150 (sub_14081A150.c)
 *     sub_140847400 @ 0x140847400 (sub_140847400.c)
 *     sub_1408476A0 @ 0x1408476A0 (sub_1408476A0.c)
 *     sub_140847BB4 @ 0x140847BB4 (sub_140847BB4.c)
 *     sub_140855FA0 @ 0x140855FA0 (sub_140855FA0.c)
 *     sub_140882484 @ 0x140882484 (sub_140882484.c)
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 *     sub_1409113B4 @ 0x1409113B4 (sub_1409113B4.c)
 *     sub_140911544 @ 0x140911544 (sub_140911544.c)
 *     sub_140915DB8 @ 0x140915DB8 (sub_140915DB8.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     sub_140916788 @ 0x140916788 (sub_140916788.c)
 *     FsRtlNotifyCleanupAll @ 0x14092FFC0 (FsRtlNotifyCleanupAll.c)
 *     sub_140946F98 @ 0x140946F98 (sub_140946F98.c)
 *     sub_140949950 @ 0x140949950 (sub_140949950.c)
 *     sub_1409B3230 @ 0x1409B3230 (sub_1409B3230.c)
 *     sub_1409C6000 @ 0x1409C6000 (sub_1409C6000.c)
 *     sub_1409C6D8C @ 0x1409C6D8C (sub_1409C6D8C.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7340 (SeAuditFipsCryptoSelftests.c)
 *     sub_1409C750C @ 0x1409C750C (sub_1409C750C.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409C7700 (SeAuditHardLinkCreationWithTransaction.c)
 *     sub_1409C78B8 @ 0x1409C78B8 (sub_1409C78B8.c)
 *     sub_1409C7E08 @ 0x1409C7E08 (sub_1409C7E08.c)
 *     SeAuditTransactionStateChange @ 0x1409C7FD0 (SeAuditTransactionStateChange.c)
 *     sub_1409C820C @ 0x1409C820C (sub_1409C820C.c)
 *     sub_1409CAC10 @ 0x1409CAC10 (sub_1409CAC10.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CAD20 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CADE0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     sub_1409E57B8 @ 0x1409E57B8 (sub_1409E57B8.c)
 *     sub_140A03FB4 @ 0x140A03FB4 (sub_140A03FB4.c)
 *     sub_140A81DB4 @ 0x140A81DB4 (sub_140A81DB4.c)
 *     sub_140B152D4 @ 0x140B152D4 (sub_140B152D4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 */

void __stdcall SeReleaseSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rdx
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
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)qword_140D04940 )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)qword_140D04940 )
        __debugbreak();
    }
  }
  v2 = (unsigned __int64)SubjectContext->PrimaryToken;
  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  _m_prefetchw((const void *)(v3 + 1208));
  v4 = *(_QWORD *)(v3 + 1208);
  if ( (v2 ^ v4) >= 0xF )
  {
LABEL_9:
    ObfDereferenceObjectWithTag((PVOID)v2, 0x75536553u);
  }
  else
  {
    while ( 1 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 1208), v4 + 1, v4);
      if ( v5 == v4 )
        break;
      if ( (v2 ^ v4) >= 0xF )
        goto LABEL_9;
    }
    sub_140347B50(v2 - 48);
  }
  ClientToken = SubjectContext->ClientToken;
  SubjectContext->PrimaryToken = 0LL;
  if ( ClientToken )
    ObfDereferenceObjectWithTag(ClientToken, 0x75536553u);
  SubjectContext->ClientToken = 0LL;
}
