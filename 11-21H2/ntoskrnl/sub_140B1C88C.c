/*
 * XREFs of sub_140B1C88C @ 0x140B1C88C
 * Callers:
 *     sub_140B1C3C8 @ 0x140B1C3C8 (sub_140B1C3C8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 */

int __fastcall sub_140B1C88C(PVOID Data, int a2)
{
  int result; // eax
  NTSTATUS v4; // eax
  HANDLE v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+90h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF

  Disposition = 0;
  result = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( Data )
  {
    if ( a2 == 4 )
    {
      KeyHandle = 0LL;
      Handle = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
      if ( result >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"BitlockerStatus");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v4 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
        v5 = KeyHandle;
        if ( v4 >= 0 )
        {
          ZwClose(KeyHandle);
          RtlInitUnicodeString(&DestinationString, L"BootStatus");
          ZwSetValueKey(Handle, &DestinationString, 0, 4u, Data, 4u);
          v5 = Handle;
        }
        return ZwClose(v5);
      }
    }
  }
  return result;
}
