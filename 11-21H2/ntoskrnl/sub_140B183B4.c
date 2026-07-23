/*
 * XREFs of sub_140B183B4 @ 0x140B183B4
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140837F88 @ 0x140837F88 (sub_140837F88.c)
 *     sub_140838DE4 @ 0x140838DE4 (sub_140838DE4.c)
 *     sub_14091D7D0 @ 0x14091D7D0 (sub_14091D7D0.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 *     sub_140B18840 @ 0x140B18840 (sub_140B18840.c)
 *     sub_140B4DA1C @ 0x140B4DA1C (sub_140B4DA1C.c)
 */

__int64 __fastcall sub_140B183B4(__int64 a1)
{
  char v2; // r12
  int v3; // eax
  HANDLE v4; // rdi
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // r14
  unsigned __int16 v8; // dx
  _WORD *v9; // r15
  __int64 v10; // r9
  __int64 v11; // r8
  ULONG Length; // [rsp+28h] [rbp-E0h]
  ULONG Disposition; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int Data; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle_8[2]; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp-68h] BYREF
  HANDLE v21; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE v22; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE v23; // [rsp+B8h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp-48h] BYREF
  HANDLE v25; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+D0h] [rbp-38h] BYREF
  HANDLE v27; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD KeyValueInformation[32]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v29[256]; // [rsp+168h] [rbp+60h] BYREF
  int v30[64]; // [rsp+268h] [rbp+160h] BYREF

  v22 = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes_8, 0, 44);
  Disposition = 0;
  v27 = 0LL;
  String1 = 0LL;
  KeyHandle = 0LL;
  *(_OWORD *)Handle_8 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  Handle = 0LL;
  Data = 0;
  v2 = 0;
  v3 = sub_140838DE4(a1, &v27, &String1);
  v4 = v27;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_25;
  ObjectAttributes_8.RootDirectory = v27;
  ObjectAttributes_8.Attributes = 576;
  ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"$&";
  ObjectAttributes_8.Length = 48;
  *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes_8);
  v5 = v6;
  if ( v6 == -1073741772 )
  {
    if ( !dword_140D011A8 )
      goto LABEL_25;
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)&qword_140B57838;
    ObjectAttributes_8.RootDirectory = v4;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v22, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_25;
    ZwClose(v22);
    v22 = 0LL;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.RootDirectory = v4;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_25;
    ObjectAttributes_8.RootDirectory = KeyHandle;
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"\"$";
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v22, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_25;
    WORD1(Handle_8[0]) = 256;
    Handle_8[1] = v29;
    sub_1402D17BC(Handle_8, L"%04d", 0LL);
    ObjectAttributes_8.RootDirectory = v22;
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)Handle_8;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v21, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
    ZwClose(v22);
    v22 = 0LL;
    if ( v5 < 0 )
      goto LABEL_25;
    ZwClose(v21);
    v21 = 0LL;
    v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A37ED8, 0, 4u, &Data, 4u);
    if ( v5 < 0 )
      goto LABEL_25;
  }
  else
  {
    if ( v6 < 0 )
      goto LABEL_25;
    v5 = ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_140A37ED8,
           KeyValueFullInformation,
           KeyValueInformation,
           0x80u,
           &ResultLength);
    if ( v5 < 0 || KeyValueInformation[1] != 4 )
      goto LABEL_25;
    Data = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
  }
  ObjectAttributes_8.Length = 48;
  ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"\"$";
  ObjectAttributes_8.RootDirectory = v4;
  ObjectAttributes_8.Attributes = 576;
  *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&v23, 0x20019u, &ObjectAttributes_8);
  if ( v5 == -1073741772 )
  {
    if ( !dword_140D011A8 )
      goto LABEL_25;
    v5 = ZwCreateKey(&v23, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
  }
  if ( v5 < 0 )
    goto LABEL_25;
  Handle_8[0] = (HANDLE)0x1000000;
  Handle_8[1] = v29;
  sub_1402D17BC(Handle_8, L"%04d", Data);
  ObjectAttributes_8.RootDirectory = v23;
  ObjectAttributes_8.Length = 48;
  ObjectAttributes_8.ObjectName = (PUNICODE_STRING)Handle_8;
  ObjectAttributes_8.Attributes = 576;
  *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&v21, 0x2001Fu, &ObjectAttributes_8);
  if ( v5 == -1073741772 )
  {
    if ( !dword_140D011A8 )
      goto LABEL_25;
    v5 = ZwCreateKey(&v21, 0x2001Fu, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
  }
  if ( v5 < 0 )
    goto LABEL_25;
  v7 = *(_QWORD *)(a1 + 240);
  v8 = *(_WORD *)(v7 + 8);
  v9 = (_WORD *)(v7 + 4);
  if ( v8 == 3 )
  {
    v8 = 1;
    *(_WORD *)(v7 + 8) = 1;
  }
  if ( *v9 == 1 )
    goto LABEL_51;
  if ( *v9 == 2 )
  {
LABEL_15:
    ObjectAttributes_8.RootDirectory = KeyHandle;
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)&qword_140B57D10;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes_8, 0, 0LL, 1u, &Disposition) >= 0 )
    {
      sub_140B18840((int)Handle);
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( *(_WORD *)(v7 + 8) == 1 )
      v2 = 1;
    goto LABEL_19;
  }
  if ( *v9 != 3 )
  {
LABEL_19:
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.RootDirectory = v4;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"24";
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes_8) >= 0 )
    {
      sub_14091D7D0(Handle, 0LL, (__int64)v30, v10, Length);
      ZwClose(Handle);
      Handle = 0LL;
    }
    v5 = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes_8, 0, 0LL, 3u, &Disposition);
    if ( v5 >= 0 )
    {
      Handle_8[0] = (HANDLE)0x1000000;
      Handle_8[1] = v29;
      sub_1402D17BC(Handle_8, L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d", &String1, Data);
      v5 = ZwSetValueKey(Handle, &stru_140D3CB80, 0, 6u, Handle_8[1], LOWORD(Handle_8[0]));
      if ( !RtlEqualUnicodeString(&String1, &stru_140A37E58, 1u) )
      {
        ZwClose(Handle);
        Handle = 0LL;
        Handle_8[0] = (HANDLE)0x1000000;
        Handle_8[1] = v29;
        sub_1402D17BC(Handle_8, L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ", &stru_140A37E58, L"24");
        ObjectAttributes_8.Length = 48;
        ObjectAttributes_8.ObjectName = (PUNICODE_STRING)Handle_8;
        ObjectAttributes_8.RootDirectory = 0LL;
        ObjectAttributes_8.Attributes = 576;
        *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
        v5 = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes_8, 0, 0LL, 3u, &Disposition);
        if ( v5 >= 0 )
        {
          Handle_8[0] = (HANDLE)0x1000000;
          Handle_8[1] = v29;
          sub_1402D17BC(Handle_8, L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ", &String1, L"24");
          v5 = ZwSetValueKey(Handle, &stru_140D3CB80, 0, 6u, Handle_8[1], LOWORD(Handle_8[0]));
        }
      }
    }
    if ( v2 )
    {
      v25 = 0LL;
      LOBYTE(v16) = 0;
      LODWORD(v27) = 131073;
      WORD2(v27) = 0;
      v5 = sub_140837F88((unsigned __int16 *)&v27, (__int64)sub_140AF3290, v11, &v25, &v16);
      ZwClose(v25);
    }
    goto LABEL_25;
  }
  v5 = sub_14091DBC4(KeyHandle, v23, v21, Data, v8, &v21, &Data);
  if ( v5 < 0 )
  {
    v21 = 0LL;
    goto LABEL_25;
  }
  v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A37ED8, 0, 4u, &Data, 4u);
  if ( v5 >= 0 )
  {
LABEL_51:
    sub_140B4DA1C(KeyHandle, v7 + 4, Data);
    goto LABEL_15;
  }
LABEL_25:
  if ( v4 )
    ZwClose(v4);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v21 )
    ZwClose(v21);
  if ( v23 )
    ZwClose(v23);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
