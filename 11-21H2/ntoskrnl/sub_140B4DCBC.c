/*
 * XREFs of sub_140B4DCBC @ 0x140B4DCBC
 * Callers:
 *     sub_140B30CA4 @ 0x140B30CA4 (sub_140B30CA4.c)
 * Callees:
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 */

__int64 __fastcall sub_140B4DCBC(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  int v3; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v8[2]; // [rsp+80h] [rbp-80h] BYREF
  char v9; // [rsp+90h] [rbp-70h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v8[0] = 0x1000000LL;
  v8[1] = &v9;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  Handle = 0LL;
  v3 = sub_1402D17BC(v8, L"\\REGISTRY\\%ws\\%ws", v2, v1);
  if ( v3 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
    if ( v3 >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v3 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( v3 >= 0 )
        v3 = 0;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
