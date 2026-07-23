/*
 * XREFs of towlower @ 0x1403DB980
 * Callers:
 *     ExpTranslateBootEntryNameToId @ 0x14083E328 (ExpTranslateBootEntryNameToId.c)
 *     EtwpCovSampCheckForSegments @ 0x1408A8BFC (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x1409FCFB8 (ExpParseArcPathName.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1409FE328 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1409FE424 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1409FE5A8 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1409FE648 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1403DC524 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
