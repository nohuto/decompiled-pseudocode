/*
 * XREFs of RtlFindAceByType @ 0x1402AD1C0
 * Callers:
 *     RtlIsUntrustedObject @ 0x140200EE0 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x140225BD0 (SepMandatorySubProcessToken.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x1402B3540 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepGetScopedPolicySid @ 0x1405B7C84 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B81D4 (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140670CE0 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpGenerateInheritAcl @ 0x1406C3B40 (RtlpGenerateInheritAcl.c)
 *     RtlpCopyAces @ 0x1406C4630 (RtlpCopyAces.c)
 *     RtlpNewSecurityObject @ 0x14072A470 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14072BDE0 (RtlpSetSecurityObject.c)
 *     SeQueryMandatoryLabel @ 0x1407DD960 (SeQueryMandatoryLabel.c)
 *     SepSDContainsAttributeACE @ 0x1409D1338 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v3; // r9
  unsigned int v4; // r10d

  if ( !Acl )
    return 0LL;
  v3 = Acl + 1;
  v4 = 0;
  if ( !Acl->AceCount )
    return 0LL;
  while ( !Index )
  {
    if ( v3->AclRevision == AceType )
      return v3;
LABEL_6:
    ++v4;
    v3 = (PACL)((char *)v3 + v3->AclSize);
    if ( v4 >= Acl->AceCount )
      return 0LL;
  }
  if ( v4 < *Index || v3->AclRevision != AceType )
    goto LABEL_6;
  *Index = v4;
  return v3;
}
