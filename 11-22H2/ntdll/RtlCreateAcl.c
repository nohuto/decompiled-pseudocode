/*
 * XREFs of RtlCreateAcl @ 0x1800186F0
 * Callers:
 *     RtlDefaultNpAcl @ 0x1800019A0 (RtlDefaultNpAcl.c)
 *     RtlpCombineAcls @ 0x18001307C (RtlpCombineAcls.c)
 *     RtlCheckTokenMembershipEx @ 0x180014560 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x180018324 (RtlpInheritAcl2.c)
 *     RtlCheckTokenCapability @ 0x180018740 (RtlCheckTokenCapability.c)
 *     RtlCreateAndSetSD @ 0x180068790 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18006C5B8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpComputeMergedAcl2 @ 0x18008BF40 (RtlpComputeMergedAcl2.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F1E80 (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800F2C28 (RtlpCreateServerAcl.c)
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
