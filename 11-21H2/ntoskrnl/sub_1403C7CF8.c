/*
 * XREFs of sub_1403C7CF8 @ 0x1403C7CF8
 * Callers:
 *     sub_140B16F3C @ 0x140B16F3C (sub_140B16F3C.c)
 * Callees:
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140837640 (RtlCreateUnicodeStringFromAsciiz.c)
 */

__int64 __fastcall sub_1403C7CF8(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCSTR SourceString)
{
  wchar_t *Buffer; // rdi
  BOOLEAN v6; // al
  unsigned int v7; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( SourceString )
  {
    v6 = RtlCreateUnicodeStringFromAsciiz(&UnicodeString, SourceString);
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
