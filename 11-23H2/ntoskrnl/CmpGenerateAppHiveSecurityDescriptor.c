/*
 * XREFs of CmpGenerateAppHiveSecurityDescriptor @ 0x1408851B8
 * Callers:
 *     CmpCreateHiveRootCell @ 0x14087448C (CmpCreateHiveRootCell.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x14069BD60 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x1407196A0 (SeQueryInformationToken.c)
 *     RtlpAddKnownAce @ 0x140735270 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140736580 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1407365B0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736620 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140781FF0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1407EF0C0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1407F2E70 (RtlAddMandatoryAce.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void *__fastcall CmpGenerateAppHiveSecurityDescriptor(__int64 a1)
{
  void *v1; // rbx
  void *v2; // rdi
  void *v3; // rbx
  void *v4; // rdi
  void *Pool2; // rax
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+68h] [rbp-98h]
  ACL v12[12]; // [rsp+70h] [rbp-90h] BYREF
  ACL Acl[30]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = *(void **)(a1 + 16);
  memset(Acl, 0, 0xECuLL);
  v11 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v12, 0, 0x54uLL);
  P = 0LL;
  v2 = 0LL;
  TokenInformation = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( SeQueryInformationToken(v1, TokenOwner, &TokenInformation) >= 0
    && SeQueryInformationToken(v1, TokenPrimaryGroup, &P) >= 0 )
  {
    v3 = *(void **)TokenInformation;
    v4 = *(void **)P;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v3, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, v4, 0);
    RtlCreateAcl(Acl, 0xECu, 2u);
    RtlpAddKnownAce((__int64)Acl, 2u, 2, 983103, (unsigned __int8 *)SeWorldSid, 0);
    RtlpAddKnownAce((__int64)Acl, 2u, 2, 983103, (unsigned __int8 *)SeAllAppPackagesSid, 0);
    RtlpAddKnownAce((__int64)Acl, 2u, 2, 983103, (unsigned __int8 *)SeRestrictedSid, 0);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    RtlCreateAcl(v12, 0x54u, 2u);
    RtlAddMandatoryAce((__int64)v12, 2u, 0, (__int64)SeLowMandatorySid, 17, 1);
    RtlSetSaclSecurityDescriptor((__int64)SecurityDescriptor, 1, (__int64)v12, 0);
    BufferLength = 0;
    RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
    Pool2 = (void *)ExAllocatePool2(256LL, BufferLength, 1699966275LL);
    v2 = Pool2;
    if ( Pool2 )
      RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Pool2, &BufferLength);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v2;
}
