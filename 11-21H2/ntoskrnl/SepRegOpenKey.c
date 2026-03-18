/*
 * XREFs of SepRegOpenKey @ 0x1406959BC
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403DA7FC (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x140695854 (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14084CBB8 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x14085464C (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x14085D7FC (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409CF26C (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall SepRegOpenKey(PCWSTR SourceString, ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
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
