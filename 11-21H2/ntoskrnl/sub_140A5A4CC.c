/*
 * XREFs of sub_140A5A4CC @ 0x140A5A4CC
 * Callers:
 *     sub_140A6C4B0 @ 0x140A6C4B0 (sub_140A6C4B0.c)
 *     sub_140B1C49C @ 0x140B1C49C (sub_140B1C49C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 */

__int64 __fastcall sub_140A5A4CC(PHANDLE KeyHandle)
{
  NTSTATUS v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandlea; // [rsp+98h] [rbp+18h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandlea = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IntegrityServices");
    ObjectAttributes.RootDirectory = KeyHandlea;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateKey(KeyHandle, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    ZwClose(KeyHandlea);
  }
  return (unsigned int)v2;
}
