/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x140773CD0
 * Callers:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140675148 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773C00 (RtlAnsiStringToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x1407A85C8 (PopAnsiStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1407DAC60 (RtlOemStringToCountedUnicodeString.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B490 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x14086B690 (RtlOemStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x140A53DA4 (AslStringAnsiToUnicode.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x140773D00 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxOemStringToUnicodeSize(PCOEM_STRING OemString)
{
  ULONG Length; // r8d
  char *Buffer; // rdx
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  Length = OemString->Length;
  Buffer = OemString->Buffer;
  BytesInUnicodeString = 0;
  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, Buffer, Length);
  return BytesInUnicodeString + 2;
}
