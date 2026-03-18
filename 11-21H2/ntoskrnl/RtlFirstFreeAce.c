/*
 * XREFs of RtlFirstFreeAce @ 0x140724CE0
 * Callers:
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x1406DC070 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x140724B00 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x140724BB0 (RtlAddAce.c)
 *     RtlpInheritAcl2 @ 0x140727FB0 (RtlpInheritAcl2.c)
 *     RtlAddProcessTrustLabelAce @ 0x140848A40 (RtlAddProcessTrustLabelAce.c)
 *     SddlAddMandatoryAce @ 0x140882C7A (SddlAddMandatoryAce.c)
 *     RtlAddAccessFilterAce @ 0x1409B7E50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409B84A4 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409CF980 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409CFB98 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409CFCF8 (SddlAddScopedPolicyIDAce.c)
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
