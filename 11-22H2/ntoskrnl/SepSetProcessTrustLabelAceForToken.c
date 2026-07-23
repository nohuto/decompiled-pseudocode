/*
 * XREFs of SepSetProcessTrustLabelAceForToken @ 0x1402B3710
 * Callers:
 *     SepFinalizeTokenAcls @ 0x14071DE50 (SepFinalizeTokenAcls.c)
 *     NtDuplicateToken @ 0x1407358C0 (NtDuplicateToken.c)
 * Callees:
 *     RtlEqualSid @ 0x14022A790 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlQueryInformationAcl @ 0x140736640 (RtlQueryInformationAcl.c)
 *     ObGetObjectSecurity @ 0x140736700 (ObGetObjectSecurity.c)
 *     ObReleaseObjectSecurity @ 0x140736930 (ObReleaseObjectSecurity.c)
 *     RtlCreateSecurityDescriptor @ 0x140736A80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140736AB0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736B20 (RtlCreateAcl.c)
 *     ObSetSecurityObjectByPointer @ 0x140736BA0 (ObSetSecurityObjectByPointer.c)
 *     RtlAddAce @ 0x140736C40 (RtlAddAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140736ED0 (RtlAddProcessTrustLabelAce.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall SepSetProcessTrustLabelAceForToken(_QWORD *Object)
{
  ACL *v2; // rbp
  unsigned __int8 *v3; // r12
  int v4; // r13d
  ULONG v5; // r15d
  NTSTATUS result; // eax
  _WORD *v7; // rsi
  NTSTATUS Acl; // ebx
  __int16 v9; // ax
  __int64 v10; // rax
  ACL *v11; // rdi
  ACL *v12; // rbx
  unsigned int v13; // ecx
  ULONG v14; // ebx
  ACL *Pool2; // rax
  ACL *v16; // rdi
  BOOLEAN v17[4]; // [rsp+30h] [rbp-78h] BYREF
  ULONG AclRevision; // [rsp+34h] [rbp-74h] BYREF
  PSECURITY_DESCRIPTOR v19; // [rsp+38h] [rbp-70h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]
  __int64 AclInformation; // [rsp+68h] [rbp-40h] BYREF
  int v23; // [rsp+70h] [rbp-38h]

  AclInformation = 0LL;
  v19 = 0LL;
  v17[0] = 0;
  v2 = 0LL;
  v23 = 0;
  AclRevision = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v21 = 0LL;
  if ( !Object )
    return -1073741811;
  v3 = (unsigned __int8 *)Object[138];
  v4 = 8;
  v5 = 2;
  result = ObGetObjectSecurity(Object, &v19, v17);
  v7 = v19;
  Acl = result;
  if ( result < 0 )
    goto LABEL_30;
  if ( !v19 )
    return result;
  v9 = *((_WORD *)v19 + 1);
  if ( (v9 & 0x10) == 0 )
    goto LABEL_20;
  if ( v9 >= 0 )
  {
    v11 = (ACL *)*((_QWORD *)v19 + 3);
  }
  else
  {
    v10 = *((unsigned int *)v19 + 3);
    if ( !(_DWORD)v10 )
      goto LABEL_20;
    v11 = (ACL *)((char *)v19 + v10);
  }
  if ( !v11 )
  {
LABEL_20:
    if ( v3 )
    {
      v14 = v4 + 4 * v3[1] + 16;
      Pool2 = (ACL *)ExAllocatePool2(256LL, v14, 1665230163LL);
      v16 = Pool2;
      if ( Pool2 )
      {
        Acl = RtlCreateAcl(Pool2, v14, v5);
        if ( Acl >= 0 )
        {
          if ( !v2 || (Acl = RtlAddAce(v16, v5, 0, v2, HIDWORD(AclInformation) - 8), Acl >= 0) )
          {
            Acl = RtlAddProcessTrustLabelAce(v16, 2u, 0, v3, 0x14u, 0x2001Eu);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v16, 0);
                if ( Acl >= 0 )
                {
                  WORD1(SecurityDescriptor[0]) |= v7[1] & 0x2830;
                  Acl = ObSetSecurityObjectByPointer(Object, 504LL, SecurityDescriptor);
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v16, 0);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    else
    {
      Acl = 0;
    }
    goto LABEL_30;
  }
  v2 = v11 + 1;
  v12 = v11 + 1;
  v13 = 0;
  if ( v11->AceCount )
  {
    while ( v12->AclRevision != 20 )
    {
      ++v13;
      v12 = (ACL *)((char *)v12 + v12->AclSize);
      if ( v13 >= v11->AceCount )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v12 = 0LL;
  }
  if ( v3 )
  {
    if ( v12 && RtlEqualSid(&v12[1], v3) )
    {
      *(_DWORD *)&v12->AceCount &= 0x2001Eu;
      goto LABEL_35;
    }
  }
  else if ( !v12 )
  {
LABEL_35:
    Acl = 0;
    goto LABEL_30;
  }
  Acl = RtlQueryInformationAcl(v11, &AclInformation, 0xCu, AclSizeInformation);
  if ( Acl >= 0 )
  {
    v4 = HIDWORD(AclInformation);
    Acl = RtlQueryInformationAcl(v11, &AclRevision, 4u, AclRevisionInformation);
    if ( Acl >= 0 )
    {
      v5 = AclRevision;
      if ( (unsigned __int8)(v11->AclRevision - 2) > 2u )
        goto LABEL_42;
      if ( !v11->AceCount )
      {
        Acl = -1073741811;
        goto LABEL_30;
      }
      if ( v2 >= (ACL *)((char *)v11 + v11->AclSize) )
      {
LABEL_42:
        Acl = -1073741811;
        goto LABEL_30;
      }
      goto LABEL_20;
    }
  }
LABEL_30:
  if ( v7 )
    ObReleaseObjectSecurity(v7, v17[0]);
  return Acl;
}
