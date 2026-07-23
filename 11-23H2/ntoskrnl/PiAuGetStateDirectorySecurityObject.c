/*
 * XREFs of PiAuGetStateDirectorySecurityObject @ 0x14095BD9C
 * Callers:
 *     PiOpenDirectoryWithRoot @ 0x1409563A4 (PiOpenDirectoryWithRoot.c)
 * Callees:
 *     RtlLengthSid @ 0x140227B50 (RtlLengthSid.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x14069BD60 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x140711150 (RtlLengthSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140735460 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1407821E0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1407B4FF0 (RtlValidSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1407EF390 (RtlSetGroupSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiAuGetStateDirectorySecurityObject(char a1, _QWORD *a2)
{
  void *v4; // rsi
  ULONG v5; // edi
  ULONG v6; // edi
  ULONG v7; // r14d
  ULONG v8; // r14d
  ACL *Pool2; // rax
  ACL *v10; // rdi
  int Acl; // ebx
  PSID v12; // r14
  ULONG v13; // eax
  void *v14; // rax
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  ULONG BufferLength; // [rsp+A0h] [rbp+40h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v17 = 0LL;
  v4 = 0LL;
  v5 = RtlLengthSid(SeExports->SeUserModeDriversSid);
  v6 = RtlLengthSid(SeAliasAdminsSid) + v5;
  v7 = RtlLengthSid(SeLocalSystemSid) + 2 * (v6 + 28);
  v8 = RtlLengthSid(SeLocalSystemSid) + v7;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v8, 538996816LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v8, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce(v10, 2u, 3, 1245599, (unsigned __int8 *)SeLocalSystemSid, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v10, 2u, 2, 32, (unsigned __int8 *)SeLocalSystemSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v10, 2u, 3, a1 != 0 ? 1245599 : 1179785, (unsigned __int8 *)SeAliasAdminsSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v10, 2u, 2, 32, (unsigned __int8 *)SeAliasAdminsSid, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v10, 2u, 3, 1179785, (unsigned __int8 *)SeExports->SeUserModeDriversSid, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce(v10, 2u, 2, 32, (unsigned __int8 *)SeExports->SeUserModeDriversSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0);
                    if ( Acl >= 0 )
                    {
                      v12 = SeLocalSystemSid;
                      Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 0);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v12, 0);
                        if ( Acl >= 0 )
                        {
                          if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                            && (v13 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v13, v13 >= 0x28) )
                          {
                            v14 = (void *)ExAllocatePool2(256LL, v13, 538996816LL);
                            v4 = v14;
                            if ( v14 )
                            {
                              Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v14, &BufferLength);
                              if ( Acl >= 0 )
                              {
                                *a2 = v4;
                                v4 = 0LL;
                              }
                            }
                            else
                            {
                              Acl = -1073741670;
                            }
                          }
                          else
                          {
                            Acl = -1073741595;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v10, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
