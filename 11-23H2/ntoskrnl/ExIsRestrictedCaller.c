/*
 * XREFs of ExIsRestrictedCaller @ 0x1407D8AF4
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     ExpGetProcessInformation @ 0x140742FB0 (ExpGetProcessInformation.c)
 *     PspQueryWorkingSetWatch @ 0x1409AF754 (PspQueryWorkingSetWatch.c)
 *     ExProcessCounterSetCallback @ 0x1409F6060 (ExProcessCounterSetCallback.c)
 *     ExpProfileCreate @ 0x140A03F08 (ExpProfileCreate.c)
 * Callees:
 *     SeAccessCheck @ 0x140231720 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall ExIsRestrictedCaller(char a1)
{
  unsigned int v1; // edi
  BOOLEAN v3; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  v1 = 0;
  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 )
    return 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  v3 = SeAccessCheck(
         SeMediumDaclSd,
         &SubjectContext,
         0,
         0x20000u,
         0,
         0LL,
         (PGENERIC_MAPPING)&ExpRestrictedGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v3 )
    return 1LL;
  LOBYTE(v1) = AccessStatus < 0;
  return v1;
}
