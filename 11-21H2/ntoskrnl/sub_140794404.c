/*
 * XREFs of sub_140794404 @ 0x140794404
 * Callers:
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_140790CA8 @ 0x140790CA8 (sub_140790CA8.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 *     sub_1409EB814 @ 0x1409EB814 (sub_1409EB814.c)
 * Callees:
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall sub_140794404(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+20h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  if ( a3 )
  {
    p_SubjectSecurityContext = a3;
  }
  else
  {
    SeCaptureSubjectContext(&SubjectSecurityContext);
    p_SubjectSecurityContext = &SubjectSecurityContext;
  }
  SeAccessCheck(
    SecurityDescriptor,
    p_SubjectSecurityContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&stru_140010DA8,
    1,
    &GrantedAccess,
    &AccessStatus);
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectSecurityContext);
  return (unsigned int)AccessStatus;
}
