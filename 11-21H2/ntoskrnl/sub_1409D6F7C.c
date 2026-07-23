/*
 * XREFs of sub_1409D6F7C @ 0x1409D6F7C
 * Callers:
 *     sub_1409D69A8 @ 0x1409D69A8 (sub_1409D69A8.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409D6F7C(PSECURITY_DESCRIPTOR SecurityDescriptor, ACL **a2)
{
  void *v4; // r14
  void *Src; // rsi
  ACL *v6; // rdi
  PVOID PoolWithTag; // rax
  void *v8; // r15
  int Acl; // ebx
  PVOID v10; // rax
  PVOID v11; // rax
  ULONG v12; // ebx
  ULONG v13; // ebx
  ULONG v14; // ebx
  ACL *v15; // rax
  _SID_IDENTIFIER_AUTHORITY v17; // [rsp+80h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+88h] [rbp+58h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v17.Value = 0;
  *(_WORD *)&v17.Value[4] = 1280;
  v4 = 0LL;
  Src = 0LL;
  v6 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x53446D73u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  Acl = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u);
  if ( Acl >= 0 )
  {
    v10 = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x53446D73u);
    v4 = v10;
    if ( v10 )
    {
      Acl = RtlInitializeSid(v10, &v17, 1u);
      if ( Acl < 0 )
        goto LABEL_17;
      v11 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x53446D73u);
      Src = v11;
      if ( v11 )
      {
        Acl = RtlInitializeSid(v11, &v17, 2u);
        if ( Acl < 0 )
          goto LABEL_17;
        *RtlSubAuthoritySid(v8, 0) = 0;
        *RtlSubAuthoritySid(v4, 0) = 18;
        *RtlSubAuthoritySid(Src, 0) = 32;
        *RtlSubAuthoritySid(Src, 1u) = 544;
        v12 = RtlLengthSid(Src);
        v13 = RtlLengthSid(v4) + v12;
        v14 = RtlLengthSid(v8) + 32 + v13;
        v15 = (ACL *)ExAllocatePoolWithTag(PagedPool, v14, 0x61446D73u);
        v6 = v15;
        if ( v15 )
        {
          Acl = RtlCreateAcl(v15, v14, 2u);
          if ( Acl >= 0 )
          {
            Acl = sub_1407B4900(v6, 2u, 0, 2032127, (unsigned __int8 *)Src, 0);
            if ( Acl >= 0 )
            {
              Acl = sub_1407B4900(v6, 2u, 0, 2032127, (unsigned __int8 *)v4, 0);
              if ( Acl >= 0 )
              {
                Acl = sub_1407B4900(v6, 2u, 0, 0x10000, (unsigned __int8 *)v8, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
                    if ( Acl >= 0 )
                    {
                      *a2 = v6;
                      v6 = 0LL;
                      Acl = 0;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_17;
        }
      }
    }
    Acl = -1073741670;
  }
LABEL_17:
  ExFreePoolWithTag(v8, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)Acl;
}
