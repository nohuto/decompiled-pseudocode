/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1407741E0
 * Callers:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1406751B8 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x1407A8B78 (PopAnsiStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1407DB1E0 (RtlOemStringToCountedUnicodeString.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084C6F0 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x14086BB60 (RtlOemStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x140A53E14 (AslStringAnsiToUnicode.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x140774210 (RtlMultiByteToUnicodeSize.c)
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
