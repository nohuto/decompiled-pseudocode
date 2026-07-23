/*
 * XREFs of sub_140743C8C @ 0x140743C8C
 * Callers:
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140744160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void *sub_140743C8C()
{
  void *v0; // rbx
  ULONG v1; // edi
  ACL *Pool2; // rax
  ACL *v3; // rsi
  ULONG v4; // eax
  void *v5; // rax
  void *v6; // rdi
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp-50h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v10; // [rsp+58h] [rbp-28h]
  _BYTE Sid[16]; // [rsp+60h] [rbp-20h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = 0LL;
  v10 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 18;
    if ( RtlValidSid(Sid) )
    {
      v1 = RtlLengthSid(Sid) + 16;
      Pool2 = (ACL *)ExAllocatePool2(256LL, v1, 1380994640LL);
      v3 = Pool2;
      if ( Pool2 )
      {
        if ( RtlCreateAcl(Pool2, v1, 2u) >= 0
          && (int)sub_1407B4900((int)v3, 2, 2, 983103, Sid, 0) >= 0
          && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
          && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0) >= 0
          && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Sid, 1u) >= 0
          && RtlSetGroupSecurityDescriptor(SecurityDescriptor, Sid, 1u) >= 0 )
        {
          WORD1(SecurityDescriptor[0]) |= 0x1400u;
          if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
          {
            v4 = RtlLengthSecurityDescriptor(SecurityDescriptor);
            *(_DWORD *)IdentifierAuthority.Value = v4;
            if ( v4 >= 0x28 )
            {
              v5 = (void *)ExAllocatePool2(256LL, v4, 1380994640LL);
              v6 = v5;
              if ( v5 )
              {
                if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v5, (PULONG)IdentifierAuthority.Value) < 0 )
                  ExFreePoolWithTag(v6, 0);
                else
                  v0 = v6;
              }
            }
          }
        }
        ExFreePoolWithTag(v3, 0);
      }
    }
  }
  return v0;
}
