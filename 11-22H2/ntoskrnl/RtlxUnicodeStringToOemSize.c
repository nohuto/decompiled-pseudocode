/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x1407561F0
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14020AA14 (DbgUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140756020 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758B90 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1407D11A0 (RtlUnicodeStringToCountedOemString.c)
 *     ObCreateObjectTypeEx @ 0x140821770 (ObCreateObjectTypeEx.c)
 *     RtlUnicodeStringToOemString @ 0x1408612C0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1408745A0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B8BE0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF6C0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140A00030 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB210 (ExpSystemErrorHandler2.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x140758C80 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG Length; // r8d
  wchar_t *Buffer; // rdx
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  Length = UnicodeString->Length;
  Buffer = UnicodeString->Buffer;
  BytesInMultiByteString = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, Buffer, Length);
  return BytesInMultiByteString + 1;
}
