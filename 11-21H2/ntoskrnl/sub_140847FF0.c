/*
 * XREFs of sub_140847FF0 @ 0x140847FF0
 * Callers:
 *     sub_1409C5A90 @ 0x1409C5A90 (sub_1409C5A90.c)
 *     sub_140B1E13C @ 0x140B1E13C (sub_140B1E13C.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitString @ 0x14036B950 (RtlInitString.c)
 *     sub_1403CE42C @ 0x1403CE42C (sub_1403CE42C.c)
 *     sub_1403CE4A4 @ 0x1403CE4A4 (sub_1403CE4A4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateEvent @ 0x14041C060 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x14041CC80 (ZwCreateDirectoryObject.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     sub_140848850 @ 0x140848850 (sub_140848850.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B1E24C @ 0x140B1E24C (sub_140B1E24C.c)
 *     sub_140B1E6B0 @ 0x140B1E6B0 (sub_140B1E6B0.c)
 *     sub_140B1ED10 @ 0x140B1ED10 (sub_140B1ED10.c)
 *     sub_140B1EFA0 @ 0x140B1EFA0 (sub_140B1EFA0.c)
 */

char sub_140847FF0()
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
    sub_140729C30(
      (char *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1208LL) & 0xFFFFFFFFFFFFFFF0uLL),
      0LL,
      0,
      0,
      0,
      0LL,
      0LL);
    Token = (PVOID)sub_140B1EFA0();
    qword_140D3CCB8 = (PVOID)sub_140B1ED10();
  }
  RtlInitString(&DestinationString, "\\Security");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  Pool2 = (ACL *)ExAllocatePool2(64LL, 256LL, 538994003LL);
  v2 = Pool2;
  if ( !Pool2 )
    return 0;
  RtlCreateAcl(Pool2, 0x100u, 2u);
  sub_1407B4900(v2, 2u, 0, 983055, (unsigned __int8 *)Group, 0);
  sub_1407B4900(v2, 2u, 0, 131075, (unsigned __int8 *)SidToCheck, 0);
  sub_1407B4900(v2, 2u, 0, 2, (unsigned __int8 *)qword_140C5AFA8, 0);
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
  RtlInitString(&DestinationString, "LSA_AUTHENTICATION_INITIALIZED");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.SecurityDescriptor = (PVOID)qword_140D3CCB0;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ZwCreateEvent(&EventHandle, 0x40000000u, &ObjectAttributes, NotificationEvent, 0);
  RtlFreeUnicodeString(&UnicodeString);
  ZwClose(DirectoryHandle);
  ZwClose(EventHandle);
  if ( !IsCurrentThreadInServerSilo )
  {
    sub_1403CE4A4();
    sub_140848850();
    sub_140B1E6B0();
    if ( (int)sub_140B1E24C() < 0 )
      return 0;
  }
  sub_1403CE42C();
  return 1;
}
