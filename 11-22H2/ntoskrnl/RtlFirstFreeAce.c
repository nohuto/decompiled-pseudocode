/*
 * XREFs of RtlFirstFreeAce @ 0x1407F3570
 * Callers:
 *     RtlpInheritAcl2 @ 0x1406C4180 (RtlpInheritAcl2.c)
 *     RtlDeleteAce @ 0x1407EF6A0 (RtlDeleteAce.c)
 *     RtlAddMandatoryAce @ 0x1407F33F0 (RtlAddMandatoryAce.c)
 *     SddlAddMandatoryAce @ 0x1408A6D12 (SddlAddMandatoryAce.c)
 *     RtlAddAccessFilterAce @ 0x1409BAF50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB270 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB5A0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409D2590 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409D27CC (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409D292C (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlFirstFreeAce(PACL Acl, PVOID *FirstFree)
{
  unsigned int v2; // r10d
  PACL v3; // r8
  unsigned int AceCount; // ecx

  v2 = 0;
  v3 = Acl + 1;
  *FirstFree = 0LL;
  AceCount = Acl->AceCount;
  if ( AceCount )
  {
    while ( v3 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v2;
      v3 = (PACL)((char *)v3 + v3->AclSize);
      if ( v2 >= AceCount )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v3 <= (PACL)((char *)Acl + Acl->AclSize) )
      *FirstFree = v3;
    return 1;
  }
}
