/*
 * XREFs of sub_14085FFF0 @ 0x14085FFF0
 * Callers:
 *     sub_1406C2E68 @ 0x1406C2E68 (sub_1406C2E68.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_14085FFF0(HANDLE *a1)
{
  char v2; // dl
  ULONG v3; // eax
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v2 = *((_BYTE *)KeGetCurrentThread() + 562);
  v3 = 1600;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  if ( v2 != 1 )
    v3 = 576;
  ObjectAttributes.Attributes = v3;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140006600;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    *a1 = KeyHandle;
    return 0;
  }
  return result;
}
