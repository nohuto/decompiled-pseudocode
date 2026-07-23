/*
 * XREFs of sub_1406C5900 @ 0x1406C5900
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1409AE584 @ 0x1409AE584 (sub_1409AE584.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 *     sub_140A062C8 @ 0x140A062C8 (sub_140A062C8.c)
 * Callees:
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

_BOOL8 __fastcall sub_1406C5900(char a1)
{
  BOOLEAN v1; // bl
  _BOOL8 result; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  result = 0;
  if ( a1 )
  {
    SeCaptureSubjectContext(&SubjectSecurityContext);
    v1 = SeAccessCheck(
           qword_140D3CC48,
           &SubjectSecurityContext,
           0,
           0x20000u,
           0,
           0LL,
           (PGENERIC_MAPPING)&stru_140A37FA0,
           1,
           &GrantedAccess,
           &AccessStatus);
    SeReleaseSubjectContext(&SubjectSecurityContext);
    if ( !v1 || AccessStatus < 0 )
      return 1;
  }
  return result;
}
