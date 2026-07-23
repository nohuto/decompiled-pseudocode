/*
 * XREFs of sub_140944554 @ 0x140944554
 * Callers:
 *     sub_14094017C @ 0x14094017C (sub_14094017C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_1406DF520 @ 0x1406DF520 (sub_1406DF520.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall sub_140944554(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  NTSTATUS v4; // eax
  HANDLE v5; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a2 )
  {
    v3 = sub_1406DF520(L"DriverStatePath", 0LL, LocationTypeRegistry, &DestinationString);
    if ( v3 >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      v3 = v4;
      if ( v4 == -1073741772 )
      {
        v3 = -1073741275;
      }
      else if ( v4 >= 0 )
      {
        v5 = KeyHandle;
        KeyHandle = 0LL;
        *a2 = v5;
      }
    }
  }
  else
  {
    v3 = -1073741811;
  }
  RtlFreeUnicodeString(&DestinationString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
