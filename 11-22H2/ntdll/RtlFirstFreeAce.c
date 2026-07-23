/*
 * XREFs of RtlFirstFreeAce @ 0x18001B350
 * Callers:
 *     RtlpCombineAcls @ 0x18001307C (RtlpCombineAcls.c)
 *     RtlpInheritAcl2 @ 0x180018324 (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x18001A2E0 (RtlpGenerateInheritedAce.c)
 *     RtlpAddKnownAce @ 0x18001ABE4 (RtlpAddKnownAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180068600 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAce @ 0x180068A80 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x180069090 (RtlAddMandatoryAce.c)
 *     RtlpCopyAces @ 0x18006EEF4 (RtlpCopyAces.c)
 *     RtlQueryInformationAcl @ 0x180077F00 (RtlQueryInformationAcl.c)
 *     RtlDeleteAce @ 0x18007BEB0 (RtlDeleteAce.c)
 *     RtlAddAccessFilterAce @ 0x1800F3DF0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800F4070 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800F41E0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800F4530 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800F47F0 (RtlpAddKnownObjectAce.c)
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
        goto LABEL_4;
    }
    return 0;
  }
  else
  {
LABEL_4:
    if ( v3 <= (PACL)((char *)Acl + Acl->AclSize) )
      *FirstFree = v3;
    return 1;
  }
}
