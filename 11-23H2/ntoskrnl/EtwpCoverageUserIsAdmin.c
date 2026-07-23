/*
 * XREFs of EtwpCoverageUserIsAdmin @ 0x1409E8BC8
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1408740A8 (EtwSetProcessTelemetryCoverage.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1409E8328 (EtwQueryProcessTelemetryCoverage.c)
 * Callees:
 *     SeUnlockSubjectContext @ 0x1406C3160 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406C31A0 (SeLockSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     SeTokenIsAdmin @ 0x1407D0770 (SeTokenIsAdmin.c)
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
