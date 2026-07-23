/*
 * XREFs of RtlValidAcl @ 0x1407B4A50
 * Callers:
 *     SeValidSecurityDescriptor @ 0x1406ACC40 (SeValidSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x1406DC070 (RtlDeleteAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140715E20 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlAddAce @ 0x140724BB0 (RtlAddAce.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     sub_140753F64 @ 0x140753F64 (sub_140753F64.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     RtlAddProcessTrustLabelAce @ 0x140848A40 (RtlAddProcessTrustLabelAce.c)
 *     sub_140882C7A @ 0x140882C7A (sub_140882C7A.c)
 *     RtlAddAccessFilterAce @ 0x1409B7E50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 *     sub_1409B84A4 @ 0x1409B84A4 (sub_1409B84A4.c)
 *     sub_1409CF980 @ 0x1409CF980 (sub_1409CF980.c)
 *     sub_1409CFB98 @ 0x1409CFB98 (sub_1409CFB98.c)
 *     sub_1409CFCF8 @ 0x1409CFCF8 (sub_1409CFCF8.c)
 *     sub_140A04204 @ 0x140A04204 (sub_140A04204.c)
 * Callees:
 *     sub_14076369C @ 0x14076369C (sub_14076369C.c)
 *     sub_1409B89A8 @ 0x1409B89A8 (sub_1409B89A8.c)
 *     sub_1409B8BA4 @ 0x1409B8BA4 (sub_1409B8BA4.c)
 *     sub_1409B8C20 @ 0x1409B8C20 (sub_1409B8C20.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  USHORT *p_AclSize; // r14
  unsigned int v3; // ebp
  PACL v4; // rbx
  int v5; // r15d
  ACL *v6; // rdx
  USHORT *v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned int AclRevision; // edx
  __int64 Sbz1; // rax
  BOOLEAN result; // al

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (USHORT *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) == &Acl->AclSize && *p_AclSize >= 8u )
    {
      v3 = 0;
      v4 = Acl + 1;
      if ( !Acl->AceCount )
        return 1;
      v5 = 1730063;
      while ( 1 )
      {
        v6 = (PACL)((char *)Acl + *p_AclSize);
        if ( &v4->AceCount >= (USHORT *)v6 )
          break;
        v7 = &v4->AclSize;
        if ( (USHORT *)(((unsigned __int64)&v4->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v4->AclSize )
          break;
        v8 = *v7;
        if ( (PACL)((char *)v4 + v8) > v6 )
          break;
        AclRevision = v4->AclRevision;
        if ( (unsigned __int8)AclRevision <= 0x14u && _bittest(&v5, AclRevision) )
        {
          if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
            return 0;
          if ( (unsigned int)v8 < 0x10 )
            return 0;
          if ( v4[1].AclRevision != 1 )
            return 0;
          Sbz1 = v4[1].Sbz1;
          if ( (unsigned __int8)Sbz1 > 0xFu || v8 < 4 * Sbz1 + 16 )
            return 0;
        }
        else if ( (_BYTE)AclRevision == 4 )
        {
          if ( Acl->AclRevision < 3u || !(unsigned __int8)sub_1409B8BA4(v4) )
            return 0;
        }
        else if ( (unsigned __int8)(AclRevision - 5) <= 3u
               || (unsigned __int8)(AclRevision - 11) <= 1u
               || (unsigned __int8)(AclRevision - 15) <= 1u )
        {
          if ( Acl->AclRevision < 4u || !(unsigned __int8)sub_1409B8C20(v4) )
            return 0;
        }
        else if ( (_BYTE)AclRevision == 18 )
        {
          result = sub_14076369C((__int64)v4);
          if ( !result )
            return result;
        }
        else if ( (_BYTE)AclRevision == 21 )
        {
          if ( !(unsigned __int8)sub_1409B89A8(v4) )
            return 0;
        }
        else if ( (unsigned int)v8 < 4 )
        {
          return 0;
        }
        ++v3;
        v4 = (PACL)((char *)v4 + *v7);
        if ( v3 >= Acl->AceCount )
          return 1;
      }
    }
  }
  return 0;
}
