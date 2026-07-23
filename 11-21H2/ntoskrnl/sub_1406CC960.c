/*
 * XREFs of sub_1406CC960 @ 0x1406CC960
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_14078ECD8 @ 0x14078ECD8 (sub_14078ECD8.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 */

_BOOL8 __fastcall sub_1406CC960(int *a1, __int64 a2)
{
  void *v4; // rsi
  int v5; // eax
  void **v6; // rax
  PSID *v8; // rdx
  int v9; // eax
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v12; // [rsp+88h] [rbp-78h]
  ACL Sacl[12]; // [rsp+90h] [rbp-70h] BYREF
  ACL Acl[20]; // [rsp+F0h] [rbp-10h] BYREF

  memset(Acl, 0, sizeof(Acl));
  LODWORD(v10) = 0;
  memset(Sacl, 0, 0x54uLL);
  v4 = a1 + 2;
  v12 = 0LL;
  v5 = *a1;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( v5 != 2 )
  {
    if ( v5 == 3 )
    {
      RtlCreateAcl(Sacl, 0x54u, 2u);
      RtlAddMandatoryAce(Sacl, 2u, 0, v4, 0x11u, 7u);
      RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, Sacl, 0);
      return SeAccessCheckWithHint(
               (__int64)SecurityDescriptor,
               1,
               (struct _SECURITY_SUBJECT_CONTEXT *)a2,
               1,
               0xF000Fu,
               0,
               0LL,
               (__int64)qword_140C24FB8 + 76,
               *((_BYTE *)KeGetCurrentThread() + 562),
               (unsigned int *)&v10,
               (int *)(a2 + 48));
    }
    if ( v5 != 1 )
    {
      *(_DWORD *)(a2 + 48) = -1073741595;
      return 0LL;
    }
    return 1LL;
  }
  if ( (unsigned __int8)sub_14078ECD8(v4) )
  {
    v8 = *(PSID **)(a2 + 32);
    if ( v8 && !RtlEqualSid(v4, *v8) )
    {
      *(_DWORD *)(a2 + 48) = -1073741790;
      return 0LL;
    }
    v9 = *(_DWORD *)(a2 + 52);
    if ( (v9 & 1) != 0 )
    {
      *(_DWORD *)(a2 + 48) = -1073741811;
      return 0LL;
    }
    *(_DWORD *)(a2 + 52) = v9 | 1;
    return 1LL;
  }
  RtlCreateAcl(Acl, 0xA0u, 2u);
  sub_1407B4900((int)Acl, 2, 0, 983055, v4, 0);
  v6 = *(void ***)(a2 + 32);
  if ( v6 )
    sub_1407B4900((int)Acl, 2, 0, 983055, *v6, 0);
  RtlCreateAcl(Sacl, 0x54u, 2u);
  RtlAddMandatoryAce(Sacl, 2u, 0, *(PSID *)(a2 + 40), 0x11u, 7u);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
  RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, Sacl, 0);
  return SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           1,
           (struct _SECURITY_SUBJECT_CONTEXT *)a2,
           1,
           0xF000Fu,
           0,
           0LL,
           (__int64)qword_140C24FB8 + 76,
           *((_BYTE *)KeGetCurrentThread() + 562),
           (unsigned int *)&v10,
           (int *)(a2 + 48));
}
