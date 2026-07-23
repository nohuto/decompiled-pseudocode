/*
 * XREFs of RtlpIsUtf8Process @ 0x180018DC4
 * Callers:
 *     RtlUnicodeToMultiByteN @ 0x180018840 (RtlUnicodeToMultiByteN.c)
 *     RtlMultiByteToUnicodeSize @ 0x180018B40 (RtlMultiByteToUnicodeSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018B90 (RtlUnicodeStringToAnsiString.c)
 *     RtlpGetCodePageData @ 0x180059054 (RtlpGetCodePageData.c)
 *     RtlIsTextUnicode @ 0x1800604E0 (RtlIsTextUnicode.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18007EC70 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpperChar @ 0x180083610 (RtlUpperChar.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18008A5E0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x18008A640 (RtlpDidUnicodeToOemWork.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800F12E0 (RtlConsoleMultiByteToUnicodeN.c)
 *     CompareNamesCaseSensitive @ 0x1800F1C44 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1800F1DE4 (ComputeNameLength.c)
 *     RtlGenerate8dot3Name @ 0x18010A2F0 (RtlGenerate8dot3Name.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x18010A780 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlIsValidOemCharacter @ 0x18010A954 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsUtf8Process()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9;
}
