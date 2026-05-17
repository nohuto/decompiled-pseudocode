/*
 * XREFs of RtlFirstFreeAce @ 0x18001B170
 * Callers:
 *     RtlpCombineAcls @ 0x180012E6C (RtlpCombineAcls.c)
 *     RtlpInheritAcl2 @ 0x180018114 (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x18001A100 (RtlpGenerateInheritedAce.c)
 *     RtlpAddKnownAce @ 0x18001AA04 (RtlpAddKnownAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800685E0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAce @ 0x180068A60 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x180069070 (RtlAddMandatoryAce.c)
 *     RtlpCopyAces @ 0x18006EEF4 (RtlpCopyAces.c)
 *     RtlQueryInformationAcl @ 0x180078570 (RtlQueryInformationAcl.c)
 *     RtlDeleteAce @ 0x18007C520 (RtlDeleteAce.c)
 *     RtlAddAccessFilterAce @ 0x1800F5200 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800F5480 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800F55F0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800F5940 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800F5C00 (RtlpAddKnownObjectAce.c)
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
