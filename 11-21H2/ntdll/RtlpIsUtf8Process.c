/*
 * XREFs of RtlpIsUtf8Process @ 0x18000E12C
 * Callers:
 *     RtlUpperChar @ 0x18000C350 (RtlUpperChar.c)
 *     RtlpDidUnicodeToOemWork @ 0x18000C458 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18000C510 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18000DBB0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlpGetCodePageData @ 0x18000DD08 (RtlpGetCodePageData.c)
 *     RtlMultiByteToUnicodeN @ 0x18000DD40 (RtlMultiByteToUnicodeN.c)
 *     RtlUnicodeToMultiByteN @ 0x18000DD90 (RtlUnicodeToMultiByteN.c)
 *     RtlMultiByteToUnicodeSize @ 0x18000DEF0 (RtlMultiByteToUnicodeSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x18000DF80 (RtlUnicodeStringToAnsiString.c)
 *     RtlIsTextUnicode @ 0x180069270 (RtlIsTextUnicode.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800F0180 (RtlConsoleMultiByteToUnicodeN.c)
 *     CompareNamesCaseSensitive @ 0x1800F0C38 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1800F0DD0 (ComputeNameLength.c)
 *     RtlGenerate8dot3Name @ 0x180108E60 (RtlGenerate8dot3Name.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x180109350 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlIsValidOemCharacter @ 0x180109520 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

bool RtlpIsUtf8Process()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9;
}
