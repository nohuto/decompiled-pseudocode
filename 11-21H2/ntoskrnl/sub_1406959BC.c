/*
 * XREFs of sub_1406959BC @ 0x1406959BC
 * Callers:
 *     sub_1403DA7FC @ 0x1403DA7FC (sub_1403DA7FC.c)
 *     sub_140695854 @ 0x140695854 (sub_140695854.c)
 *     sub_14084CBB8 @ 0x14084CBB8 (sub_14084CBB8.c)
 *     sub_14085464C @ 0x14085464C (sub_14085464C.c)
 *     sub_14085D7FC @ 0x14085D7FC (sub_14085D7FC.c)
 *     sub_1409CF26C @ 0x1409CF26C (sub_1409CF26C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_1406959BC(PCWSTR SourceString, ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  UNICODE_STRING v6; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0LL;
  RtlInitUnicodeString(&v6, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  *KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
