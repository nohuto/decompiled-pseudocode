/*
 * XREFs of SePrivilegeCheck @ 0x14072B5E0
 * Callers:
 *     PiAuDoesClientHavePrivilege @ 0x14065FC74 (PiAuDoesClientHavePrivilege.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     SeCheckPrivilegedObject @ 0x1406E856C (SeCheckPrivilegedObject.c)
 *     ObpAdjustCreatorAccessState @ 0x1407227B0 (ObpAdjustCreatorAccessState.c)
 *     SeSinglePrivilegeCheckEx @ 0x140724418 (SeSinglePrivilegeCheckEx.c)
 *     PsOpenProcess @ 0x1407292A0 (PsOpenProcess.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 *     PspSinglePrivCheck @ 0x1407F3230 (PspSinglePrivCheck.c)
 *     CMFCheckAccess @ 0x140A03FB4 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1402A70F0 (SepPrivilegeCheck.c)
 */

BOOLEAN __stdcall SePrivilegeCheck(
        PPRIVILEGE_SET RequiredPrivileges,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        KPROCESSOR_MODE AccessMode)
{
  PACCESS_TOKEN ClientToken; // rcx

  if ( !AccessMode )
    return 1;
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
  {
    ClientToken = SubjectSecurityContext->PrimaryToken;
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  }
  if ( SubjectSecurityContext->ImpersonationLevel >= SecurityImpersonation )
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  return 0;
}
