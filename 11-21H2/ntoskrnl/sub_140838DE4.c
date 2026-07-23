/*
 * XREFs of sub_140838DE4 @ 0x140838DE4
 * Callers:
 *     sub_140837E20 @ 0x140837E20 (sub_140837E20.c)
 *     sub_140837F88 @ 0x140837F88 (sub_140837F88.c)
 *     sub_14091E6AC @ 0x14091E6AC (sub_14091E6AC.c)
 *     sub_140B183B4 @ 0x140B183B4 (sub_140B183B4.c)
 * Callees:
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

__int64 __fastcall sub_140838DE4(__int64 a1, HANDLE *a2, UNICODE_STRING *a3)
{
  const UNICODE_STRING *v3; // rdi
  int v6; // ebx
  HANDLE v7; // rcx
  HANDLE KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE *v11; // [rsp+30h] [rbp-D0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[256]; // [rsp+70h] [rbp-90h] BYREF

  v3 = &stru_140A384F8;
  KeyHandle = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  if ( !dword_140D011A8 )
    v3 = &stru_140A37E58;
  v10 = 0x1000000LL;
  v11 = v13;
  memset(&ObjectAttributes, 0, 32);
  v6 = sub_1402D17BC(&v10, L"\\Registry\\Machine\\%wZ\\CurrentControlSet", v3);
  if ( v6 < 0 )
    goto LABEL_11;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 == -1073741772 )
  {
    if ( !dword_140D011A8 )
      goto LABEL_11;
    v10 = 0x1000000LL;
    v3 = &stru_140A37E58;
    v11 = v13;
    v6 = sub_1402D17BC(&v10, L"\\Registry\\Machine\\%wZ\\CurrentControlSet", &stru_140A37E58);
    if ( v6 < 0 )
      goto LABEL_11;
    v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  if ( v6 < 0 )
  {
LABEL_11:
    v7 = KeyHandle;
    goto LABEL_8;
  }
  v7 = 0LL;
  *a2 = KeyHandle;
  KeyHandle = 0LL;
  if ( !a3 )
    return (unsigned int)v6;
  *a3 = *v3;
LABEL_8:
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)v6;
}
