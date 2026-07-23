/*
 * XREFs of RtlxAnsiStringToUnicodeSize @ 0x14075A820
 * Callers:
 *     sub_1406509F8 @ 0x1406509F8 (sub_1406509F8.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     sub_1407F0ED0 @ 0x1407F0ED0 (sub_1407F0ED0.c)
 *     sub_140A14988 @ 0x140A14988 (sub_140A14988.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x14075A850 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxAnsiStringToUnicodeSize(PCANSI_STRING AnsiString)
{
  ULONG Length; // r8d
  char *Buffer; // rdx
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  Length = AnsiString->Length;
  Buffer = AnsiString->Buffer;
  BytesInUnicodeString = 0;
  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, Buffer, Length);
  return BytesInUnicodeString + 2;
}
