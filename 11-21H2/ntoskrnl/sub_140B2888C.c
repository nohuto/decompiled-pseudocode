/*
 * XREFs of sub_140B2888C @ 0x140B2888C
 * Callers:
 *     sub_140B286CC @ 0x140B286CC (sub_140B286CC.c)
 * Callees:
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140744160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x140811740 (RtlAddAccessAllowedAceEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B2888C(_QWORD *a1)
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
     * (*((unsigned __int8 *)Group + 1)
      + *((unsigned __int8 *)SidToCheck + 1)
      + *((unsigned __int8 *)SeExports->SeUserModeDriversSid + 1))
     + 56;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v3, 0x20207050u);
  v5 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v3, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, Group);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SidToCheck);
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
                v7 = Group;
                Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Group, 0);
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
