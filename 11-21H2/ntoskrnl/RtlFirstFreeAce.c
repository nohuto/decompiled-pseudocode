/*
 * XREFs of RtlFirstFreeAce @ 0x140724CE0
 * Callers:
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x1406DC070 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x140724B00 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x140724BB0 (RtlAddAce.c)
 *     sub_140727FB0 @ 0x140727FB0 (sub_140727FB0.c)
 *     RtlAddProcessTrustLabelAce @ 0x140848A40 (RtlAddProcessTrustLabelAce.c)
 *     sub_140882C7A @ 0x140882C7A (sub_140882C7A.c)
 *     RtlAddAccessFilterAce @ 0x1409B7E50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 *     sub_1409B84A4 @ 0x1409B84A4 (sub_1409B84A4.c)
 *     sub_1409CF980 @ 0x1409CF980 (sub_1409CF980.c)
 *     sub_1409CFB98 @ 0x1409CFB98 (sub_1409CFB98.c)
 *     sub_1409CFCF8 @ 0x1409CFCF8 (sub_1409CFCF8.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlFirstFreeAce(PACL Acl, PVOID *FirstFree)
{
  unsigned int v3; // ecx
  PACL v4; // r8

  v3 = 0;
  *FirstFree = 0LL;
  v4 = Acl + 1;
  if ( Acl->AceCount )
  {
    while ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v3;
      v4 = (PACL)((char *)v4 + v4->AclSize);
      if ( v3 >= Acl->AceCount )
        goto LABEL_4;
    }
    return 0;
  }
  else
  {
LABEL_4:
    if ( v4 <= (PACL)((char *)Acl + Acl->AclSize) )
      *FirstFree = v4;
    return 1;
  }
}
