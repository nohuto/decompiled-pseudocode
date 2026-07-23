/*
 * XREFs of RtlValidAcl @ 0x140736D80
 * Callers:
 *     SepCheckAcl @ 0x1406BA460 (SepCheckAcl.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14070DBD0 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x14072A470 (RtlpNewSecurityObject.c)
 *     RtlpAddKnownAce @ 0x140735770 (RtlpAddKnownAce.c)
 *     RtlAddAce @ 0x140736C40 (RtlAddAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140736ED0 (RtlAddProcessTrustLabelAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140737050 (SeCaptureSecurityDescriptor.c)
 *     SeValidSecurityDescriptor @ 0x1407B4510 (SeValidSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1407B52C0 (RtlValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1407EF6A0 (RtlDeleteAce.c)
 *     RtlAddMandatoryAce @ 0x1407F33F0 (RtlAddMandatoryAce.c)
 *     SddlAddMandatoryAce @ 0x1408A6D12 (SddlAddMandatoryAce.c)
 *     RtlAddAccessFilterAce @ 0x1409BAF50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB270 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB5A0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409D2590 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409D27CC (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409D292C (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01BFC (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x14085B6F0 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x1409BBAB4 (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x1409BBCB4 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x1409BBD24 (RtlpValidObjectAce.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  USHORT *p_AclSize; // rsi
  unsigned int v3; // ebp
  PACL v4; // rdi
  int v6; // r15d
  ACL *v7; // rdx
  USHORT *v8; // r14
  unsigned __int64 v9; // rcx
  unsigned int AclRevision; // edx
  __int64 Sbz1; // rax

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (USHORT *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) == &Acl->AclSize && *p_AclSize >= 8u )
    {
      v3 = 0;
      v4 = Acl + 1;
      if ( !Acl->AceCount )
        return 1;
      v6 = 1730063;
      while ( 1 )
      {
        v7 = (PACL)((char *)Acl + *p_AclSize);
        if ( &v4->AceCount >= (USHORT *)v7 )
          break;
        v8 = &v4->AclSize;
        if ( (USHORT *)(((unsigned __int64)&v4->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v4->AclSize )
          break;
        v9 = *v8;
        if ( (PACL)((char *)v4 + v9) > v7 )
          break;
        AclRevision = v4->AclRevision;
        if ( (unsigned __int8)AclRevision <= 0x14u && _bittest(&v6, AclRevision) )
        {
          if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 )
            return 0;
          if ( (unsigned int)v9 < 0x10 )
            return 0;
          if ( v4[1].AclRevision != 1 )
            return 0;
          Sbz1 = v4[1].Sbz1;
          if ( (unsigned __int8)Sbz1 > 0xFu || v9 < 4 * Sbz1 + 16 )
            return 0;
        }
        else if ( (_BYTE)AclRevision == 4 )
        {
          if ( Acl->AclRevision < 3u || !(unsigned __int8)RtlpValidCompoundAce(v4) )
            return 0;
        }
        else if ( (unsigned __int8)(AclRevision - 5) <= 3u
               || (unsigned __int8)(AclRevision - 11) <= 1u
               || (unsigned __int8)(AclRevision - 15) <= 1u )
        {
          if ( Acl->AclRevision < 4u || !(unsigned __int8)RtlpValidObjectAce(v4) )
            return 0;
        }
        else if ( (_BYTE)AclRevision == 18 )
        {
          if ( !(unsigned __int8)RtlpValidAttributeAce(v4) )
            return 0;
        }
        else if ( (_BYTE)AclRevision == 21 )
        {
          if ( !(unsigned __int8)RtlpValidAccessFilterAce(v4) )
            return 0;
        }
        else if ( (unsigned int)v9 < 4 )
        {
          return 0;
        }
        ++v3;
        v4 = (PACL)((char *)v4 + *v8);
        if ( v3 >= Acl->AceCount )
          return 1;
      }
    }
  }
  return 0;
}
