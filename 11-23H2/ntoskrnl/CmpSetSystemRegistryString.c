/*
 * XREFs of CmpSetSystemRegistryString @ 0x1403745D4
 * Callers:
 *     CmpSetSystemValues @ 0x140B377DC (CmpSetSystemValues.c)
 * Callees:
 *     ZwSetValueKey @ 0x14041B960 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041C900 (ZwDeleteValueKey.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14080DB70 (RtlCreateUnicodeStringFromAsciiz.c)
 */

__int64 __fastcall CmpSetSystemRegistryString(HANDLE KeyHandle, PUNICODE_STRING ValueName, __int64 a3)
{
  wchar_t *Buffer; // rdi
  char v6; // al
  unsigned int v7; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( a3 )
  {
    v6 = RtlCreateUnicodeStringFromAsciiz(&UnicodeString);
    Buffer = UnicodeString.Buffer;
    if ( v6 )
      v7 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
    else
      v7 = -1073741823;
  }
  else
  {
    v7 = ZwDeleteValueKey(KeyHandle, ValueName);
    if ( v7 != -1073741772 )
      return v7;
    v7 = 0;
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return v7;
}
