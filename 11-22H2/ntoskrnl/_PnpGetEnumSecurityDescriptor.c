/*
 * XREFs of _PnpGetEnumSecurityDescriptor @ 0x14085A568
 * Callers:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1406CEFEC (_PnpCtxGetCachedNodeBaseKey.c)
 * Callees:
 *     RtlLengthSid @ 0x140227A60 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x1402979B0 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x14069BD60 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x140710FF0 (RtlLengthSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140735770 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140736A80 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736B20 (RtlCreateAcl.c)
 *     RtlValidSid @ 0x1407378A0 (RtlValidSid.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140782500 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x140782560 (RtlInitializeSid.c)
 *     RtlValidSecurityDescriptor @ 0x1407B52C0 (RtlValidSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1407EF640 (RtlSetGroupSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void *PnpGetEnumSecurityDescriptor()
{
  void *v0; // rdi
  ULONG v1; // ebx
  ULONG v2; // ebx
  ULONG v3; // ebx
  ACL *Pool2; // rax
  ACL *v5; // rsi
  ULONG v6; // eax
  void *v7; // rax
  void *v8; // rbx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-29h] BYREF
  _SID_IDENTIFIER_AUTHORITY v11; // [rsp+40h] [rbp-21h] BYREF
  _SID_IDENTIFIER_AUTHORITY v12; // [rsp+48h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v14; // [rsp+70h] [rbp+Fh]
  unsigned __int8 Sid[12]; // [rsp+78h] [rbp+17h] BYREF
  unsigned __int8 Src[12]; // [rsp+84h] [rbp+23h] BYREF
  unsigned __int8 v17[12]; // [rsp+90h] [rbp+2Fh] BYREF
  _BYTE Owner[20]; // [rsp+9Ch] [rbp+3Bh] BYREF

  v0 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v11.Value = 0;
  *(_DWORD *)v12.Value = 0;
  v14 = 0LL;
  *(_WORD *)&v11.Value[4] = 768;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_WORD *)&v12.Value[4] = 256;
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 18;
    if ( RtlValidSid(Sid) )
    {
      if ( RtlInitializeSid(Src, &v11, 1u) >= 0 )
      {
        *RtlSubAuthoritySid(Src, 0) = 4;
        if ( RtlValidSid(Src) )
        {
          if ( RtlInitializeSid(v17, &v12, 1u) >= 0 )
          {
            *RtlSubAuthoritySid(v17, 0) = 0;
            if ( RtlValidSid(v17) )
            {
              if ( RtlInitializeSid(Owner, &IdentifierAuthority, 2u) >= 0 )
              {
                *RtlSubAuthoritySid(Owner, 0) = 32;
                *RtlSubAuthoritySid(Owner, 1u) = 544;
                if ( RtlValidSid(Owner) )
                {
                  v1 = RtlLengthSid(v17);
                  v2 = RtlLengthSid(Src) + v1;
                  v3 = RtlLengthSid(Sid) + 32 + v2;
                  Pool2 = (ACL *)ExAllocatePool2(256LL, v3, 1380994640LL);
                  v5 = Pool2;
                  if ( Pool2 )
                  {
                    if ( RtlCreateAcl(Pool2, v3, 2u) >= 0
                      && (int)RtlpAddKnownAce(v5, 2u, 2, 983103, Sid, 0) >= 0
                      && (int)RtlpAddKnownAce(v5, 2u, 2, 0x20000, Src, 0) >= 0
                      && (int)RtlpAddKnownAce(v5, 2u, 2, 131097, v17, 0) >= 0
                      && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
                      && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0) >= 0
                      && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u) >= 0
                      && RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 1u) >= 0 )
                    {
                      WORD1(SecurityDescriptor[0]) |= 0x1400u;
                      if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                      {
                        v6 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                        *(_DWORD *)IdentifierAuthority.Value = v6;
                        if ( v6 >= 0x28 )
                        {
                          v7 = (void *)ExAllocatePool2(256LL, v6, 1380994640LL);
                          v8 = v7;
                          if ( v7 )
                          {
                            if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v7, (PULONG)IdentifierAuthority.Value) < 0 )
                              ExFreePoolWithTag(v8, 0);
                            else
                              v0 = v8;
                          }
                        }
                      }
                    }
                    ExFreePoolWithTag(v5, 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v0;
}
