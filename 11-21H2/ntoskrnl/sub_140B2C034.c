/*
 * XREFs of sub_140B2C034 @ 0x140B2C034
 * Callers:
 *     sub_140B2BF58 @ 0x140B2BF58 (sub_140B2BF58.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlStringFromGUID @ 0x140745490 (RtlStringFromGUID.c)
 */

__int64 __fastcall sub_140B2C034(__int64 a1)
{
  NTSTATUS v2; // ebx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  Data = 0;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  UnicodeString = 0LL;
  if ( (dword_140C5AFDC & 8) == 0 && !a1 )
  {
    v2 = 0;
    goto LABEL_4;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v2 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_14000A910;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    if ( v2 >= 0 )
    {
      if ( (dword_140C5AFDC & 8) != 0 )
      {
        Data = dword_140C5AFDC & 1;
        v2 = ZwSetValueKey(Handle, (PUNICODE_STRING)&stru_14000A920, 0, 4u, &Data, 4u);
        if ( v2 < 0 )
          goto LABEL_4;
        if ( Data )
          _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 7u);
      }
      if ( a1 )
      {
        v2 = RtlStringFromGUID((const GUID *const)(a1 + 4), &UnicodeString);
        if ( v2 >= 0 )
        {
          v2 = ZwSetValueKey(
                 Handle,
                 (PUNICODE_STRING)&stru_14000A930,
                 0,
                 1u,
                 UnicodeString.Buffer,
                 UnicodeString.Length + 2);
          if ( v2 >= 0 )
            v2 = ZwSetValueKey(Handle, (PUNICODE_STRING)&stru_14000A940, 0, 4u, (PVOID)(a1 + 20), 4u);
        }
      }
    }
  }
LABEL_4:
  RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
