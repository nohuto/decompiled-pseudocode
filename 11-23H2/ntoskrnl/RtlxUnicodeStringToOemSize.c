/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x140755CE0
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14020A9F4 (DbgUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140755B10 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758680 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1407D0C20 (RtlUnicodeStringToCountedOemString.c)
 *     ObCreateObjectTypeEx @ 0x14081F1F0 (ObCreateObjectTypeEx.c)
 *     RtlUnicodeStringToOemString @ 0x1408611F0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1408740D0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B8B30 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF610 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1409FFF80 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB150 (ExpSystemErrorHandler2.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x140758770 (RtlUnicodeToMultiByteSize.c)
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
