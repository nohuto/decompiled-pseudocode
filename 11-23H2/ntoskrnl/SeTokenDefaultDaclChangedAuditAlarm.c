/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F16D0
 * Callers:
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 * Callees:
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406C3500 (SepAdtAuditThisEventWithContext.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x140736D40 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1407375C0 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCE40 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x1409CD5F0 (SepQueryTypeString.c)
 *     SepIsAclEqual @ 0x1409D13D8 (SepIsAclEqual.c)
 *     SepAuditFailed @ 0x1409D1E40 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, ACL *a4, PACL Dacl)
{
  PVOID v5; // rsi
  void *v6; // rdi
  void *v7; // r14
  int v10; // r15d
  _QWORD **PrimaryToken; // r13
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  void *v18; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-11h]
  _OWORD v22[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+17h]
  void *v24; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v25; // [rsp+128h] [rbp+6Fh]

  v25 = a3;
  v5 = 0LL;
  v21 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v24 = 0LL;
  v18 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v10 = 0;
  memset(v22, 0, sizeof(v22));
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    if ( !SepAdtAuditThisEventWithContext(142LL, 1u, 0, &SubjectContext) || (unsigned __int8)SepIsAclEqual(a4, Dacl) )
    {
LABEL_5:
      SeReleaseSubjectContext(&SubjectContext);
      return;
    }
    if ( a2 )
    {
      v14 = SepQueryTypeString(a2, &P, v12, v13);
      v5 = P;
      v15 = v14;
      if ( v14 < 0 )
      {
LABEL_20:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        if ( v6 )
          SeReleaseSecurityDescriptor(v6, 0, 1);
        if ( v7 )
          SeReleaseSecurityDescriptor(v7, 0, 1);
        if ( v15 < 0 )
          SepAuditFailed((unsigned int)v15);
        goto LABEL_5;
      }
      if ( P )
        v10 = (int)P;
    }
    v15 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v15 >= 0 )
    {
      v15 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, a4, 0);
      if ( v15 >= 0 )
      {
        v15 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, 1, 1, &v24);
        if ( v15 < 0
          || (v15 = RtlCreateSecurityDescriptor(v22, 1u), v15 < 0)
          || (v15 = RtlSetDaclSecurityDescriptor(v22, 1u, Dacl, 0), v15 < 0) )
        {
          v6 = v24;
        }
        else
        {
          v16 = SeCaptureSecurityDescriptor((__int64)v22, 0, 1, 1, &v18);
          v7 = v18;
          v15 = v16;
          v6 = v24;
          if ( v16 >= 0 )
            SepAdtSecurityDescriptorChangedAuditAlarm(
              (unsigned int)&SubjectContext,
              (unsigned int)&SeSubsystemName,
              v10,
              0,
              v25,
              *PrimaryToken[19],
              (__int64)v24,
              4,
              (__int64)v18);
        }
      }
    }
    goto LABEL_20;
  }
  SepAuditFailed(3221225596LL);
}
