/*
 * XREFs of sub_140949D40 @ 0x140949D40
 * Callers:
 *     sub_140944390 @ 0x140944390 (sub_140944390.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140744160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140949D40(char a1, _QWORD *a2)
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
  v6 = RtlLengthSid(SidToCheck) + v5;
  v7 = RtlLengthSid(Group) + 2 * (v6 + 28);
  v8 = RtlLengthSid(Group) + v7;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v8, 538996816LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v8, 2u);
    if ( Acl >= 0 )
    {
      Acl = sub_1407B4900(v10, 2u, 3, 1245599, (unsigned __int8 *)Group, 0);
      if ( Acl >= 0 )
      {
        Acl = sub_1407B4900(v10, 2u, 2, 32, (unsigned __int8 *)Group, 0);
        if ( Acl >= 0 )
        {
          Acl = sub_1407B4900(v10, 2u, 3, a1 != 0 ? 1245599 : 1179785, (unsigned __int8 *)SidToCheck, 0);
          if ( Acl >= 0 )
          {
            Acl = sub_1407B4900(v10, 2u, 2, 32, (unsigned __int8 *)SidToCheck, 0);
            if ( Acl >= 0 )
            {
              Acl = sub_1407B4900(v10, 2u, 3, 1179785, (unsigned __int8 *)SeExports->SeUserModeDriversSid, 0);
              if ( Acl >= 0 )
              {
                Acl = sub_1407B4900(v10, 2u, 2, 32, (unsigned __int8 *)SeExports->SeUserModeDriversSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0);
                    if ( Acl >= 0 )
                    {
                      v12 = Group;
                      Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Group, 0);
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
