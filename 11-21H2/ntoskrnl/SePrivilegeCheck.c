/*
 * XREFs of SePrivilegeCheck @ 0x14072B5E0
 * Callers:
 *     sub_14065FC74 @ 0x14065FC74 (sub_14065FC74.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406E856C @ 0x1406E856C (sub_1406E856C.c)
 *     sub_1407227B0 @ 0x1407227B0 (sub_1407227B0.c)
 *     sub_140724418 @ 0x140724418 (sub_140724418.c)
 *     sub_1407292A0 @ 0x1407292A0 (sub_1407292A0.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     sub_1407F3230 @ 0x1407F3230 (sub_1407F3230.c)
 *     sub_140A03FB4 @ 0x140A03FB4 (sub_140A03FB4.c)
 * Callees:
 *     sub_1402A70F0 @ 0x1402A70F0 (sub_1402A70F0.c)
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
    return sub_1402A70F0(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  }
  if ( SubjectSecurityContext->ImpersonationLevel >= SecurityImpersonation )
    return sub_1402A70F0(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  return 0;
}
