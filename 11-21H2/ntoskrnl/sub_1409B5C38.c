/*
 * XREFs of sub_1409B5C38 @ 0x1409B5C38
 * Callers:
 *     sub_1405E3B04 @ 0x1405E3B04 (sub_1405E3B04.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_1409B5C38(__int64 a1, HANDLE *a2)
{
  char v2; // cl
  ULONG v3; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v2 = *((_BYTE *)KeGetCurrentThread() + 562);
  v3 = 1600;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  if ( v2 != 1 )
    v3 = 576;
  ObjectAttributes.Attributes = v3;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_14000A7B0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a2, 9u, &ObjectAttributes);
}
