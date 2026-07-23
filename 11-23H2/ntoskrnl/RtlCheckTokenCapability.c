/*
 * XREFs of RtlCheckTokenCapability @ 0x1403707D0
 * Callers:
 *     RtlCapabilityCheck @ 0x1407ED020 (RtlCapabilityCheck.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x14041B510 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x14041B930 (ZwDuplicateToken.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1407821E0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1407EF390 (RtlSetGroupSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF700 (RtlAddAccessAllowedAce.c)
 *     RtlIsCapabilitySid @ 0x1407F2E78 (RtlIsCapabilitySid.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  char v6; // si
  int v7; // ebx
  bool v8; // al
  NTSTATUS v9; // ecx
  PACCESS_TOKEN PrimaryToken; // rcx
  NTSTATUS v12; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v14; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TokenHandlea; // [rsp+70h] [rbp-90h] BYREF
  PVOID v16; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  char *v18; // [rsp+88h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v22; // [rsp+100h] [rbp+0h]
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v24; // [rsp+170h] [rbp+70h] BYREF
  int v25; // [rsp+178h] [rbp+78h]
  ACL Acl[20]; // [rsp+180h] [rbp+80h] BYREF
  char v27; // [rsp+220h] [rbp+120h] BYREF
  char v28; // [rsp+260h] [rbp+160h] BYREF

  v14 = 0;
  v12 = 0;
  memset(Acl, 0, sizeof(Acl));
  TokenHandlea = 0LL;
  v24 = 0LL;
  v25 = 0;
  memset(&ObjectAttributes, 0, 44);
  v22 = 0LL;
  v18 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(TokenInformation, 0, 0x58uLL);
  ReturnLength = 0;
  *HasCapability = 0;
  v16 = &v28;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v6 = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v7 = -1073741811;
LABEL_24:
    if ( TokenHandle )
      return v7;
    goto LABEL_17;
  }
  if ( TokenHandle )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityQualityOfService = &v24;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    v24 = 0x20000000CLL;
    LOWORD(v25) = 1;
    v7 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
    if ( v7 < 0 )
      return v7;
    ReturnLength = 88;
    TokenHandle = 0LL;
    ZwQueryInformationToken(TokenHandlea, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    v6 = 1;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenUser, &v16);
    *(_OWORD *)TokenInformation = *(_OWORD *)v16;
  }
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
  RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
  RtlCreateAcl(Acl, 0xA0u, 2u);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, TokenInformation[0]);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, CapabilitySidToCheck);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
  v18 = &v27;
  if ( v6
    || (Object = 0LL,
        SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v7 = ObReferenceObjectByHandle(TokenHandlea, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL),
        SubjectContext.PrimaryToken = Object,
        v7 >= 0) )
  {
    v8 = SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           0,
           &SubjectContext,
           0,
           0x10001u,
           0,
           &v18,
           (__int64)RtlpCheckTokenCapabilityGenericMapping,
           KeGetCurrentThread()->PreviousMode,
           &v14,
           &v12);
    v9 = v12;
    v7 = v12;
    if ( !v8 )
      v7 = -1073741790;
    if ( !v6 )
    {
      ObfDereferenceObject(SubjectContext.PrimaryToken);
      v9 = v12;
    }
    if ( v7 >= 0 )
    {
      if ( !v9 && v14 == 65537 )
        *HasCapability = 1;
      v7 = 0;
    }
    if ( v6 )
    {
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_24;
    }
  }
LABEL_17:
  if ( TokenHandlea )
    ZwClose(TokenHandlea);
  return v7;
}
