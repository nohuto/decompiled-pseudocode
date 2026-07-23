/*
 * XREFs of SepRegOpenKey @ 0x1407F55D8
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403AE74C (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x1407F555C (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140841FF4 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x14084DBEC (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x14085D25C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409D1F0C (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
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
