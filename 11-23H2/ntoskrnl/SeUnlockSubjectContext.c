/*
 * XREFs of SeUnlockSubjectContext @ 0x1406C3160
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228DF0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x1402B5E38 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x14035A8EC (IopCreateSecurityCheck.c)
 *     CmpCheckCreateAccess @ 0x1406C0878 (CmpCheckCreateAccess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     ObpCheckObjectReference @ 0x1406C2F9C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406C4F40 (ObCheckCreateObjectAccess.c)
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x1407B6540 (ObCheckObjectAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C8DD8 (ObpVerifyCreatorAccessCheck.c)
 *     PspIsContextAdmin @ 0x1407D0548 (PspIsContextAdmin.c)
 *     ObpCheckTraverseAccess @ 0x14097B918 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E8BC8 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140A01B74 (CMFCheckAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B398 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 */

void __stdcall SeUnlockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6));
  KeLeaveCriticalRegion();
  if ( SubjectContext->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->ClientToken + 6));
    KeLeaveCriticalRegion();
  }
}
