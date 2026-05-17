/*
 * XREFs of RtlFirstFreeAce @ 0x180048120
 * Callers:
 *     RtlAddAce @ 0x18000BAB0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x18000EFA0 (RtlAddMandatoryAce.c)
 *     RtlpInheritAcl2 @ 0x180010ACC (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x180010F38 (RtlpCombineAcls.c)
 *     RtlpCopyAces @ 0x1800118FC (RtlpCopyAces.c)
 *     RtlpGenerateInheritedAce @ 0x180044620 (RtlpGenerateInheritedAce.c)
 *     RtlpAddKnownAce @ 0x180047FD8 (RtlpAddKnownAce.c)
 *     RtlQueryInformationAcl @ 0x18007EA70 (RtlQueryInformationAcl.c)
 *     RtlDeleteAce @ 0x18007FD20 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008DE70 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1800F40B0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800F4330 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800F44A0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800F47F0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800F4AB0 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFirstFreeAce(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ecx
  unsigned __int64 v4; // r8

  v3 = 0;
  *a2 = 0LL;
  v4 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( v4 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v3;
      v4 += *(unsigned __int16 *)(v4 + 2);
      if ( v3 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_4;
    }
    return 0;
  }
  else
  {
LABEL_4:
    if ( v4 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      *a2 = v4;
    return 1;
  }
}
