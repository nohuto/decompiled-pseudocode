/*
 * XREFs of PiAuGetDriverDataDirectorySecurityObject @ 0x140B6C088
 * Callers:
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6BEC8 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlAbsoluteToSelfRelativeSD @ 0x14069BD60 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x140711150 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1407821E0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1407B4FF0 (RtlValidSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1407EF390 (RtlSetGroupSecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x140874EA0 (RtlAddAccessAllowedAceEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiAuGetDriverDataDirectorySecurityObject(_QWORD *a1)
{
  void *v2; // rdi
  ULONG v3; // ebx
  ACL *Pool2; // rax
  ACL *v5; // rsi
  NTSTATUS Acl; // ebx
  PSID v7; // r14
  ULONG v8; // eax
  void *v9; // rax
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]
  ULONG BufferLength; // [rsp+88h] [rbp+28h] BYREF

  v12 = 0LL;
  v2 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v3 = 4
     * (*((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeExports->SeUserModeDriversSid + 1))
     + 56;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v3, 0x20207050u);
  v5 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v3, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SeAliasAdminsSid);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SeExports->SeUserModeDriversSid);
          if ( Acl >= 0 )
          {
            Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
              if ( Acl >= 0 )
              {
                v7 = SeLocalSystemSid;
                Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v7, 0);
                  if ( Acl >= 0 )
                  {
                    if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                      && (v8 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v8, v8 >= 0x28) )
                    {
                      v9 = (void *)ExAllocatePool2(256LL, v8, 0x20207050u);
                      v2 = v9;
                      if ( v9 )
                      {
                        Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v9, &BufferLength);
                        if ( Acl >= 0 )
                        {
                          *a1 = v2;
                          v2 = 0LL;
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
    ExFreePoolWithTag(v5, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
