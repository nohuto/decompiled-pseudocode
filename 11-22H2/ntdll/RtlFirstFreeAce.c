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

char __fastcall RtlFirstFreeAce(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r10d
  unsigned __int64 v3; // r8
  unsigned int v5; // ecx

  v2 = 0;
  v3 = a1 + 8;
  *a2 = 0LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  if ( v5 )
  {
    while ( v3 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v2;
      v3 += *(unsigned __int16 *)(v3 + 2);
      if ( v2 >= v5 )
        goto LABEL_4;
    }
    return 0;
  }
  else
  {
LABEL_4:
    if ( v3 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      *a2 = v3;
    return 1;
  }
}
