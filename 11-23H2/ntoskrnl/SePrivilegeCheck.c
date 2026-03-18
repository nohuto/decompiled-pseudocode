/*
 * XREFs of SePrivilegeCheck @ 0x14072F2B0
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     ObpAdjustCreatorAccessState @ 0x1406C2B08 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1406E4510 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheckEx @ 0x14070FC2C (SeSinglePrivilegeCheckEx.c)
 *     RtlpNewSecurityObject @ 0x14072A400 (RtlpNewSecurityObject.c)
 *     SeSinglePrivilegeCheck @ 0x140737B00 (SeSinglePrivilegeCheck.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D037C (MiIsUserQueryVmCallerTrusted.c)
 *     SeCheckPrivilegedObject @ 0x1407E0064 (SeCheckPrivilegedObject.c)
 *     PspSinglePrivCheck @ 0x1407E3D88 (PspSinglePrivCheck.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095B8B8 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x140A018E4 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1402AF690 (SepPrivilegeCheck.c)
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
