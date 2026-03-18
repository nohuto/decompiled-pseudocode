/*
 * XREFs of SeLockSubjectContext @ 0x1406C3220
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228D00 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402316A0 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x1402B5B78 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x14035A14C (IopCreateSecurityCheck.c)
 *     CmpCheckCreateAccess @ 0x1406C0898 (CmpCheckCreateAccess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 *     ObpCheckObjectReference @ 0x1406C301C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406C4FC0 (ObCheckCreateObjectAccess.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x1407B6810 (ObCheckObjectAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1407C9098 (ObpVerifyCreatorAccessCheck.c)
 *     PspIsContextAdmin @ 0x1407D07D8 (PspIsContextAdmin.c)
 *     ObpCheckTraverseAccess @ 0x14097B7C8 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E89E8 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140A01994 (CMFCheckAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B198 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 */

void __stdcall SeLockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6), 1u);
  if ( SubjectContext->ClientToken )
  {
    v3 = KeGetCurrentThread();
    --v3->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->ClientToken + 6), 1u);
  }
}
