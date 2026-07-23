/*
 * XREFs of sub_140A0AC10 @ 0x140A0AC10
 * Callers:
 *     sub_140A0A644 @ 0x140A0A644 (sub_140A0A644.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_140A0AC10(HANDLE *a1)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.RootDirectory = 0LL;
  v2[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\ApiSetSchemaExtensions";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v2;
  v2[0] = 11796658LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a1, 8u, &ObjectAttributes);
}
