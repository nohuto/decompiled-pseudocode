/*
 * XREFs of RtlpIsUtf8Process @ 0x180018FD4
 * Callers:
 *     RtlUnicodeToMultiByteN @ 0x180018A50 (RtlUnicodeToMultiByteN.c)
 *     RtlMultiByteToUnicodeSize @ 0x180018D50 (RtlMultiByteToUnicodeSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018DA0 (RtlUnicodeStringToAnsiString.c)
 *     RtlpGetCodePageData @ 0x180059188 (RtlpGetCodePageData.c)
 *     RtlIsTextUnicode @ 0x18005AD10 (RtlIsTextUnicode.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18007E600 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpperChar @ 0x180082FA0 (RtlUpperChar.c)
 *     RtlUpcaseUnicodeToOemN @ 0x180089DE0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x180089E40 (RtlpDidUnicodeToOemWork.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800EFED0 (RtlConsoleMultiByteToUnicodeN.c)
 *     CompareNamesCaseSensitive @ 0x1800F0834 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x1800F09D4 (ComputeNameLength.c)
 *     RtlGenerate8dot3Name @ 0x180108E80 (RtlGenerate8dot3Name.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x180109310 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlIsValidOemCharacter @ 0x1801094E4 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsUtf8Process()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9;
}
