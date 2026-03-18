/*
 * XREFs of towlower @ 0x1403DB7A0
 * Callers:
 *     ExpTranslateBootEntryNameToId @ 0x14083E028 (ExpTranslateBootEntryNameToId.c)
 *     EtwpCovSampCheckForSegments @ 0x1408A89AC (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x1409FCD28 (ExpParseArcPathName.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1409FE098 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1409FE194 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1409FE318 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1409FE3B8 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1403DC344 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
