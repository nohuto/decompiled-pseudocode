/*
 * XREFs of SepInitializationPhase1 @ 0x140823D08
 * Callers:
 *     SeInitServerSilo @ 0x1409C8EA0 (SeInitServerSilo.c)
 *     SeInitSystem @ 0x140B53278 (SeInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     SddlBaseInitialize @ 0x140387A98 (SddlBaseInitialize.c)
 *     SepInitProcessAuditSd @ 0x140387AB0 (SepInitProcessAuditSd.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwCreateEvent @ 0x14041AFA0 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x14041BBE0 (ZwCreateDirectoryObject.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140735770 (RtlpAddKnownAce.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     RtlCreateSecurityDescriptor @ 0x140736A80 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736B20 (RtlCreateAcl.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 *     SepInitializeCodeIntegrity @ 0x140823FB0 (SepInitializeCodeIntegrity.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140B54A50 (SepInitializeAuthorizationCallbacks.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B5719C (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B5742C (SeMakeAnonymousLogonToken.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140B57C90 (SepInitializeSingletonAttributesStructures.c)
 */

char SepInitializationPhase1()
{
  bool IsCurrentThreadInServerSilo; // di
  ACL *Pool2; // rax
  ACL *v2; // rbx
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-31h] BYREF
  HANDLE EventHandle; // [rsp+60h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-19h] BYREF
  STRING DestinationString; // [rsp+98h] [rbp+17h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+A8h] [rbp+27h] BYREF

  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  EventHandle = 0LL;
  UnicodeString = 0LL;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  if ( !IsCurrentThreadInServerSilo )
  {
    ObInsertObjectEx(
      (char *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5] & 0xFFFFFFFFFFFFFFF0uLL),
      0LL,
      0,
      0,
      0,
      0LL,
      0LL);
    SeAnonymousLogonToken = (PVOID)SeMakeAnonymousLogonToken();
    SeAnonymousLogonTokenNoEveryone = (PVOID)SeMakeAnonymousLogonTokenNoEveryone();
  }
  RtlInitAnsiString(&DestinationString, "\\Security");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  Pool2 = (ACL *)ExAllocatePool2(64LL, 256LL, 538994003LL);
  v2 = Pool2;
  if ( !Pool2 )
    return 0;
  RtlCreateAcl(Pool2, 0x100u, 2u);
  RtlpAddKnownAce(v2, 2u, 0, 983055, (unsigned __int8 *)SeLocalSystemSid, 0);
  RtlpAddKnownAce(v2, 2u, 0, 131075, (unsigned __int8 *)SeAliasAdminsSid, 0);
  RtlpAddKnownAce(v2, 2u, 0, 2, (unsigned __int8 *)SeWorldSid, 0);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  RtlFreeUnicodeString(&UnicodeString);
  ExFreePoolWithTag(v2, 0);
  RtlInitAnsiString(&DestinationString, "LSA_AUTHENTICATION_INITIALIZED");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultSd;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ZwCreateEvent(&EventHandle, 0x40000000u, &ObjectAttributes, NotificationEvent, 0);
  RtlFreeUnicodeString(&UnicodeString);
  ZwClose(DirectoryHandle);
  ZwClose(EventHandle);
  if ( !IsCurrentThreadInServerSilo )
  {
    SepInitProcessAuditSd();
    SepInitializeCodeIntegrity();
    SepInitializeAuthorizationCallbacks();
    if ( (int)SepInitializeSingletonAttributesStructures() < 0 )
      return 0;
  }
  SddlBaseInitialize();
  return 1;
}
