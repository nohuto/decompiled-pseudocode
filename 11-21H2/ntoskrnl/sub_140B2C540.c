/*
 * XREFs of sub_140B2C540 @ 0x140B2C540
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 *     sub_140B30CA4 @ 0x140B30CA4 (sub_140B30CA4.c)
 * Callees:
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 */

__int64 __fastcall sub_140B2C540(__int64 a1, char a2)
{
  int ValueKey; // ebx
  NTSTATUS v5; // eax
  unsigned int v7; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Data[2]; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v11; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength[4]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD KeyValueInformation[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v16[256]; // [rsp+130h] [rbp+30h] BYREF

  Data[0] = (PVOID)0x1000000;
  ResultLength[0] = 0;
  Disposition = 0;
  Data[1] = v16;
  KeyHandle = 0LL;
  v11 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  v7 = 0;
  ValueKey = sub_1402D17BC(Data, L"\\Registry\\Machine\\%ws", a1);
  if ( ValueKey >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)Data;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ValueKey = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( ValueKey >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A384E8;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&v11, 0x20019u, &ObjectAttributes);
      ValueKey = v5;
      if ( v5 == -1073741772 )
      {
        if ( !a2 )
          goto LABEL_10;
        ValueKey = ZwCreateKey(&v11, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( ValueKey < 0 )
          goto LABEL_10;
        v7 = 1;
        ValueKey = ZwSetValueKey(v11, (PUNICODE_STRING)&stru_140A37EE8, 0, 4u, &v7, 4u);
        if ( ValueKey < 0 )
          goto LABEL_10;
        Data[0] = (PVOID)0x1000000;
        Data[1] = v16;
        sub_1402D17BC(Data, L"ControlSet%03d", v7);
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)Data;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ValueKey = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( ValueKey < 0 )
          goto LABEL_10;
        ZwClose(Handle);
        Handle = 0LL;
      }
      else if ( v5 < 0 )
      {
        goto LABEL_10;
      }
      if ( !v7 )
      {
        ValueKey = ZwQueryValueKey(
                     v11,
                     (PUNICODE_STRING)&stru_140A37EE8,
                     KeyValueFullInformation,
                     KeyValueInformation,
                     0x80u,
                     ResultLength);
        if ( ValueKey < 0 )
          goto LABEL_10;
        v7 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
      }
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ValueKey = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
      if ( ValueKey >= 0 )
      {
        Data[0] = (PVOID)0x1000000;
        Data[1] = v16;
        sub_1402D17BC(Data, L"\\Registry\\Machine\\%ws\\ControlSet%03d", a1, v7);
        ValueKey = ZwSetValueKey(Handle, &stru_140D3CB80, 0, 6u, Data[1], LOWORD(Data[0]));
      }
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( v11 )
    ZwClose(v11);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)ValueKey;
}
