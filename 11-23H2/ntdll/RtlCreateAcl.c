/*
 * XREFs of RtlCreateAcl @ 0x1800184E0
 * Callers:
 *     RtlDefaultNpAcl @ 0x1800019D0 (RtlDefaultNpAcl.c)
 *     RtlpCombineAcls @ 0x180012E6C (RtlpCombineAcls.c)
 *     RtlCheckTokenMembershipEx @ 0x180014350 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x180018114 (RtlpInheritAcl2.c)
 *     RtlCheckTokenCapability @ 0x180018530 (RtlCheckTokenCapability.c)
 *     RtlCreateAndSetSD @ 0x180068770 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18006C5B8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpComputeMergedAcl2 @ 0x18008C740 (RtlpComputeMergedAcl2.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F3290 (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800F4038 (RtlpCreateServerAcl.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  NTSTATUS result; // eax

  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  result = 0;
  Acl->AclRevision = AclRevision;
  Acl->Sbz1 = 0;
  Acl->AclSize = AclLength & 0xFFFC;
  *(_DWORD *)&Acl->AceCount = 0;
  return result;
}
