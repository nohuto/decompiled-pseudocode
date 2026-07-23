/*
 * XREFs of sub_140B4DA1C @ 0x140B4DA1C
 * Callers:
 *     sub_140B183B4 @ 0x140B183B4 (sub_140B183B4.c)
 * Callees:
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_140B18840 @ 0x140B18840 (sub_140B18840.c)
 */

__int64 __fastcall sub_140B4DA1C(void *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-B8h] BYREF
  int Data; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  char v15; // [rsp+A0h] [rbp-60h] BYREF

  ObjectAttributes.RootDirectory = a1;
  KeyHandle = 0LL;
  Handle = 0LL;
  Data = 0;
  Disposition = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140B57CF0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v13 = 0LL;
  v5 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v6 == -1073741772 )
    v6 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      *(_QWORD *)&v13 = 0x1000000LL;
      ++v5;
      *((_QWORD *)&v13 + 1) = &v15;
      sub_1402D17BC(&v13, L"%04d", v5);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      v6 = v7;
      if ( v7 < 0 )
        break;
      ZwClose(Handle);
      if ( v5 >= 0xC8 )
        goto LABEL_9;
    }
    if ( v7 != -1073741772 )
      goto LABEL_11;
LABEL_9:
    v6 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( v6 >= 0 )
    {
      sub_140B18840((__int64)Handle, a2);
      Data = a3;
      v6 = ZwSetValueKey(Handle, (PUNICODE_STRING)&stru_140B57D20, 0, 4u, &Data, 4u);
      goto LABEL_12;
    }
LABEL_11:
    Handle = 0LL;
LABEL_12:
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    KeyHandle = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
