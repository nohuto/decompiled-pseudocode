/*
 * XREFs of SeCaptureSubjectContext @ 0x14072A600
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     IoComputeRedirectionTrustLevel @ 0x140201F40 (IoComputeRedirectionTrustLevel.c)
 *     IoCheckRedirectionTrustLevel @ 0x140252BD0 (IoCheckRedirectionTrustLevel.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1402EC620 (SeReportSecurityEventWithSubCategory.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_14053EFBC @ 0x14053EFBC (sub_14053EFBC.c)
 *     sub_14062C598 @ 0x14062C598 (sub_14062C598.c)
 *     sub_14065FC74 @ 0x14065FC74 (sub_14065FC74.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_1406950FC @ 0x1406950FC (sub_1406950FC.c)
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 *     sub_1406998CC @ 0x1406998CC (sub_1406998CC.c)
 *     sub_1406B5B9C @ 0x1406B5B9C (sub_1406B5B9C.c)
 *     sub_1406BC4A0 @ 0x1406BC4A0 (sub_1406BC4A0.c)
 *     sub_1406C5404 @ 0x1406C5404 (sub_1406C5404.c)
 *     sub_1406C5900 @ 0x1406C5900 (sub_1406C5900.c)
 *     sub_1406C5CA0 @ 0x1406C5CA0 (sub_1406C5CA0.c)
 *     sub_1406CFE50 @ 0x1406CFE50 (sub_1406CFE50.c)
 *     sub_1406D2D00 @ 0x1406D2D00 (sub_1406D2D00.c)
 *     sub_1406D6C24 @ 0x1406D6C24 (sub_1406D6C24.c)
 *     sub_1406D7990 @ 0x1406D7990 (sub_1406D7990.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     sub_1406E6DFC @ 0x1406E6DFC (sub_1406E6DFC.c)
 *     sub_1406E856C @ 0x1406E856C (sub_1406E856C.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     sub_1407243A0 @ 0x1407243A0 (sub_1407243A0.c)
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 *     sub_140753358 @ 0x140753358 (sub_140753358.c)
 *     sub_140776C38 @ 0x140776C38 (sub_140776C38.c)
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_140789AEC @ 0x140789AEC (sub_140789AEC.c)
 *     sub_14078A644 @ 0x14078A644 (sub_14078A644.c)
 *     sub_14078D764 @ 0x14078D764 (sub_14078D764.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_140794404 @ 0x140794404 (sub_140794404.c)
 *     sub_140794654 @ 0x140794654 (sub_140794654.c)
 *     sub_140796798 @ 0x140796798 (sub_140796798.c)
 *     sub_14079D470 @ 0x14079D470 (sub_14079D470.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     sub_1407C0160 @ 0x1407C0160 (sub_1407C0160.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     sub_1407E5F70 @ 0x1407E5F70 (sub_1407E5F70.c)
 *     sub_1407EF848 @ 0x1407EF848 (sub_1407EF848.c)
 *     sub_1407F3230 @ 0x1407F3230 (sub_1407F3230.c)
 *     sub_14081A150 @ 0x14081A150 (sub_14081A150.c)
 *     sub_140847400 @ 0x140847400 (sub_140847400.c)
 *     sub_1408476A0 @ 0x1408476A0 (sub_1408476A0.c)
 *     sub_140847BB4 @ 0x140847BB4 (sub_140847BB4.c)
 *     sub_140855FA0 @ 0x140855FA0 (sub_140855FA0.c)
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 *     sub_1409113B4 @ 0x1409113B4 (sub_1409113B4.c)
 *     sub_140911544 @ 0x140911544 (sub_140911544.c)
 *     sub_140946F98 @ 0x140946F98 (sub_140946F98.c)
 *     sub_140949950 @ 0x140949950 (sub_140949950.c)
 *     sub_1409B3230 @ 0x1409B3230 (sub_1409B3230.c)
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
 *     sub_140B152D4 @ 0x140B152D4 (sub_140B152D4.c)
 *     sub_140B22DD4 @ 0x140B22DD4 (sub_140B22DD4.c)
 * Callees:
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_14072A6B0 @ 0x14072A6B0 (sub_14072A6B0.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rcx
  void *v3; // rdx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  char v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v7 = 0;
  v6 = 0;
  v4 = *((_QWORD *)CurrentThread + 23);
  SubjectContext->ProcessAuditId = *(PVOID *)(v4 + 1088);
  if ( CurrentThread )
    v3 = (void *)sub_14072A6B0(CurrentThread, 0LL, 1968399699LL, &v7, &v6, &SubjectContext->ImpersonationLevel, 0LL);
  SubjectContext->ClientToken = v3;
  v5 = (_QWORD *)sub_140347920(v4, 0x75536553u);
  SubjectContext->PrimaryToken = v5;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)qword_140D04940 )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)qword_140D04940 )
        __debugbreak();
    }
  }
}
