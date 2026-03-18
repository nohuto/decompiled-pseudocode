/*
 * XREFs of EtwpCoverageUserIsAdmin @ 0x1409E8938
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140873E68 (EtwSetProcessTelemetryCoverage.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1409E8098 (EtwQueryProcessTelemetryCoverage.c)
 * Callees:
 *     SeUnlockSubjectContext @ 0x1406C3130 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406C3170 (SeLockSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737C70 (SeCaptureSubjectContext.c)
 *     SeTokenIsAdmin @ 0x1407D04A0 (SeTokenIsAdmin.c)
 */

BOOLEAN EtwpCoverageUserIsAdmin()
{
  PACCESS_TOKEN PrimaryToken; // rcx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin;
}
