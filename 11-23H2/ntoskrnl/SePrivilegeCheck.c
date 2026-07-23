/*
 * XREFs of SePrivilegeCheck @ 0x14072F4B0
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     ObpAdjustCreatorAccessState @ 0x1406C2B38 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheckEx @ 0x14070FE3C (SeSinglePrivilegeCheckEx.c)
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D064C (MiIsUserQueryVmCallerTrusted.c)
 *     SeCheckPrivilegedObject @ 0x1407E0334 (SeCheckPrivilegedObject.c)
 *     PspSinglePrivCheck @ 0x1407E4058 (PspSinglePrivCheck.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095BAB8 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x140A01B74 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1402AF920 (SepPrivilegeCheck.c)
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
