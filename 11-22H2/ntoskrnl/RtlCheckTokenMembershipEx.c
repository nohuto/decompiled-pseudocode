/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x14031D010
 * Callers:
 *     RtlCheckTokenMembership @ 0x14036FA40 (RtlCheckTokenMembership.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140687240 (NtQuerySystemEnvironmentValueEx.c)
 *     RtlCapabilityCheck @ 0x1407ED2D0 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407EF4A0 (RtlpCapabilityCheckSystemCapability.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC894 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     SeAccessCheckWithHint @ 0x1402316A0 (SeAccessCheckWithHint.c)
 *     RtlInitializeSidEx @ 0x140368200 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwDuplicateToken @ 0x14041AEE0 (ZwDuplicateToken.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     RtlCreateSecurityDescriptor @ 0x140736A80 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736B20 (RtlCreateAcl.c)
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140782500 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1407EF640 (RtlSetGroupSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF9B0 (RtlAddAccessAllowedAce.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  int v4; // ebx
  char v9; // si
  TOKEN_TYPE TokenType[2]; // [rsp+20h] [rbp-E0h]
  NTSTATUS v12; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v13; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  char *v16; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-10h]
  __int64 v21; // [rsp+F8h] [rbp-8h] BYREF
  int v22; // [rsp+100h] [rbp+0h]
  _BYTE Sid[80]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl[30]; // [rsp+160h] [rbp+60h] BYREF
  char v25; // [rsp+250h] [rbp+150h] BYREF

  v4 = 0;
  v13 = 0;
  v12 = 0;
  memset(Sid, 0, 0x44uLL);
  memset(Acl, 0, 0xECuLL);
  Handle = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v21 = 0LL;
  v22 = 0;
  v20 = 0LL;
  *IsMember = 0;
  memset(&ObjectAttributes, 0, 32);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (Flags & 0xFFFFFFFC) == 0 )
  {
    v9 = 0;
    if ( TokenHandle )
    {
      ObjectAttributes.SecurityQualityOfService = &v21;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v21 = 0x20000000CLL;
      LOWORD(v22) = 1;
      v4 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
      if ( v4 < 0 )
        return v4;
      v4 = 0;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v9 = 1;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlCreateAcl(Acl, 0xECu, 2u);
    RtlAddAccessAllowedAce(Acl, 2u, 1u, SidToCheck);
    if ( (Flags & 3) != 0 )
    {
      TokenType[0] = TokenPrimary;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, *(_QWORD *)TokenType);
      RtlAddAccessAllowedAce(Acl, 2u, 1u, Sid);
    }
    if ( (Flags & 2) != 0 )
    {
      TokenType[0] = TokenImpersonation;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, *(_QWORD *)TokenType);
      RtlAddAccessAllowedAce(Acl, 2u, 1u, Sid);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    v16 = &v25;
    if ( !v9 )
    {
      Object = 0LL;
      SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v4 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
      SubjectContext.PrimaryToken = Object;
      if ( v4 < 0 )
      {
LABEL_16:
        if ( Handle )
          ZwClose(Handle);
        return v4;
      }
      v4 = 0;
    }
    SeAccessCheckWithHint(
      (__int64)SecurityDescriptor,
      0,
      &SubjectContext,
      0,
      1u,
      0,
      &v16,
      (__int64)RtlpCheckTokenMembershipGenericMapping,
      KeGetCurrentThread()->PreviousMode,
      &v13,
      &v12);
    if ( !v9 )
      ObfDereferenceObject(SubjectContext.PrimaryToken);
    if ( v12 )
    {
      if ( v12 == -1073741790 )
        goto LABEL_14;
    }
    else if ( v13 == 1 )
    {
      *IsMember = 1;
      goto LABEL_14;
    }
    v4 = v12;
LABEL_14:
    if ( v9 )
      SeReleaseSubjectContext(&SubjectContext);
    goto LABEL_16;
  }
  return -1073741811;
}
