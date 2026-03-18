/*
 * XREFs of SeUnlockSubjectContext @ 0x1406C3130
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228CE0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402316C0 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x1402B5BA8 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x14035A74C (IopCreateSecurityCheck.c)
 *     CmpCheckCreateAccess @ 0x1406C0848 (CmpCheckCreateAccess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 *     ObpCheckObjectReference @ 0x1406C2F6C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406C4F10 (ObCheckCreateObjectAccess.c)
 *     RtlpNewSecurityObject @ 0x14072A400 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x1407B6260 (ObCheckObjectAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C8B08 (ObpVerifyCreatorAccessCheck.c)
 *     PspIsContextAdmin @ 0x1407D0278 (PspIsContextAdmin.c)
 *     ObpCheckTraverseAccess @ 0x14097B718 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E8938 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140A018E4 (CMFCheckAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B0E8 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
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
