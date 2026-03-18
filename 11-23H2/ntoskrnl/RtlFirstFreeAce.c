/*
 * XREFs of RtlFirstFreeAce @ 0x1407F2FF0
 * Callers:
 *     RtlpInheritAcl2 @ 0x1406C40D0 (RtlpInheritAcl2.c)
 *     RtlDeleteAce @ 0x1407EF120 (RtlDeleteAce.c)
 *     RtlAddMandatoryAce @ 0x1407F2E70 (RtlAddMandatoryAce.c)
 *     SddlAddMandatoryAce @ 0x1408A6832 (SddlAddMandatoryAce.c)
 *     RtlAddAccessFilterAce @ 0x1409BAEA0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB1C0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB4F0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409D24E0 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409D271C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409D287C (SddlAddScopedPolicyIDAce.c)
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
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v3 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      *a2 = v3;
    return 1;
  }
}
