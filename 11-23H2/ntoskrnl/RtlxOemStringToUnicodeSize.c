/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x140773EC0
 * Callers:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140675698 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x1407A87B8 (PopAnsiStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1407DAF30 (RtlOemStringToCountedUnicodeString.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B790 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x14086B8D0 (RtlOemStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x140A54054 (AslStringAnsiToUnicode.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x140773EF0 (RtlMultiByteToUnicodeSize.c)
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
