/*
 * XREFs of SeUnlockSubjectContext @ 0x1406C31E0
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228D00 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402316A0 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x1402B5B78 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x14035A14C (IopCreateSecurityCheck.c)
 *     CmpCheckCreateAccess @ 0x1406C0898 (CmpCheckCreateAccess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 *     ObpCheckObjectReference @ 0x1406C301C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406C4FC0 (ObCheckCreateObjectAccess.c)
 *     RtlpNewSecurityObject @ 0x14072A470 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x1407B6810 (ObCheckObjectAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C9098 (ObpVerifyCreatorAccessCheck.c)
 *     PspIsContextAdmin @ 0x1407D07D8 (PspIsContextAdmin.c)
 *     ObpCheckTraverseAccess @ 0x14097B7C8 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E89E8 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140A01994 (CMFCheckAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B198 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
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
