/*
 * XREFs of sub_14094CAB8 @ 0x14094CAB8
 * Callers:
 *     sub_14094C9C4 @ 0x14094C9C4 (sub_14094C9C4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 */

__int64 __fastcall sub_14094CAB8(PCWSTR SourceString, __int64 a2, HANDLE *a3)
{
  int v5; // ebx
  HANDLE v6; // rax
  void *v8; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  v8 = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v5 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 4, (__int64)&v8);
  if ( v5 >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    DestinationString.Buffer = L"Control\\DeviceMigration\\Devices";
    ObjectAttributes.RootDirectory = v8;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_DWORD *)&DestinationString.Length = 4194366;
    ObjectAttributes.Attributes = 576;
    v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v5 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v6 = KeyHandle;
      *(&ObjectAttributes.Attributes + 1) = 0;
      *a3 = 0LL;
      ObjectAttributes.RootDirectory = v6;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
