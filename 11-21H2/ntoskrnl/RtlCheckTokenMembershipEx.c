/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x1402E0CA0
 * Callers:
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     sub_140660EF4 @ 0x140660EF4 (sub_140660EF4.c)
 *     sub_1406DC9F0 @ 0x1406DC9F0 (sub_1406DC9F0.c)
 *     sub_1409FC784 @ 0x1409FC784 (sub_1409FC784.c)
 * Callees:
 *     RtlInitializeSidEx @ 0x14025D3B0 (RtlInitializeSidEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDuplicateToken @ 0x14041BFA0 (ZwDuplicateToken.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  NTSTATUS v4; // edi
  char v9; // si
  TOKEN_TYPE TokenType[2]; // [rsp+20h] [rbp-E0h]
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE NewTokenHandle; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-10h]
  __int64 v20; // [rsp+F8h] [rbp-8h] BYREF
  int v21; // [rsp+100h] [rbp+0h]
  _BYTE Sid[80]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl[30]; // [rsp+160h] [rbp+60h] BYREF
  char v24; // [rsp+250h] [rbp+150h] BYREF

  v4 = 0;
  v12 = 0LL;
  memset(Sid, 0, 0x44uLL);
  memset(Acl, 0, 0xECuLL);
  NewTokenHandle = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v20 = 0LL;
  v21 = 0;
  v19 = 0LL;
  *IsMember = 0;
  memset(&ObjectAttributes, 0, 32);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (Flags & 0xFFFFFFFC) == 0 )
  {
    v9 = 0;
    if ( TokenHandle )
    {
      ObjectAttributes.SecurityQualityOfService = &v20;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v20 = 0x20000000CLL;
      LOWORD(v21) = 1;
      v4 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
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
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 2u, 2LL, *(_QWORD *)TokenType);
      RtlAddAccessAllowedAce(Acl, 2u, 1u, Sid);
    }
    if ( (Flags & 2) != 0 )
    {
      TokenType[0] = TokenImpersonation;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 2u, 2LL, *(_QWORD *)TokenType);
      RtlAddAccessAllowedAce(Acl, 2u, 1u, Sid);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    v15 = (__int64)&v24;
    if ( !v9 )
    {
      Object = 0LL;
      SubjectContext.ProcessAuditId = *(PVOID *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
      v4 = ObReferenceObjectByHandle(NewTokenHandle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
      SubjectContext.PrimaryToken = Object;
      if ( v4 < 0 )
      {
LABEL_16:
        if ( NewTokenHandle )
          ZwClose(NewTokenHandle);
        return v4;
      }
      v4 = 0;
    }
    SeAccessCheckWithHint(
      (__int64)SecurityDescriptor,
      1,
      0,
      (__int64)&v15,
      (__int64)&qword_140010D30,
      *((_BYTE *)KeGetCurrentThread() + 562),
      (__int64)&v12 + 4,
      (__int64)&v12);
    if ( !v9 )
      ObfDereferenceObject(SubjectContext.PrimaryToken);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == -1073741790 )
        goto LABEL_14;
    }
    else if ( HIDWORD(v12) == 1 )
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
