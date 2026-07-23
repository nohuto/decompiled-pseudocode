/*
 * XREFs of ObpVerifyAccessToBoundaryEntry @ 0x1407F2EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x14022A880 (RtlEqualSid.c)
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140735460 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1407367A0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     RtlIsPackageSid @ 0x1407F30F4 (RtlIsPackageSid.c)
 *     RtlAddMandatoryAce @ 0x1407F3140 (RtlAddMandatoryAce.c)
 */

_BOOL8 __fastcall ObpVerifyAccessToBoundaryEntry(int *a1, __int64 a2)
{
  void *v4; // rsi
  int v5; // eax
  unsigned __int8 **v6; // rax
  PSID *v8; // rdx
  int v9; // eax
  unsigned int v10; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v12; // [rsp+88h] [rbp-78h]
  ACL Sacl[12]; // [rsp+90h] [rbp-70h] BYREF
  ACL Acl[20]; // [rsp+F0h] [rbp-10h] BYREF

  memset(Acl, 0, sizeof(Acl));
  v10 = 0;
  memset(Sacl, 0, 0x54uLL);
  v4 = a1 + 2;
  v12 = 0LL;
  v5 = *a1;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( v5 != 2 )
  {
    if ( v5 != 3 )
    {
      if ( v5 != 1 )
      {
        *(_DWORD *)(a2 + 48) = -1073741595;
        return 0LL;
      }
      return 1LL;
    }
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
             (__int64)&ObpDirectoryObjectType->TypeInfo.GenericMapping,
             KeGetCurrentThread()->PreviousMode,
             &v10,
             (NTSTATUS *)(a2 + 48));
  }
  if ( !RtlIsPackageSid(v4) )
  {
    RtlCreateAcl(Acl, 0xA0u, 2u);
    RtlpAddKnownAce(Acl, 2u, 0, 983055, (unsigned __int8 *)v4, 0);
    v6 = *(unsigned __int8 ***)(a2 + 32);
    if ( v6 )
      RtlpAddKnownAce(Acl, 2u, 0, 983055, *v6, 0);
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
             (__int64)&ObpDirectoryObjectType->TypeInfo.GenericMapping,
             KeGetCurrentThread()->PreviousMode,
             &v10,
             (NTSTATUS *)(a2 + 48));
  }
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
