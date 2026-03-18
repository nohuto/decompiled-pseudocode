/*
 * XREFs of towlower @ 0x1403DB140
 * Callers:
 *     ExpTranslateBootEntryNameToId @ 0x14083FDB8 (ExpTranslateBootEntryNameToId.c)
 *     EtwpCovSampCheckForSegments @ 0x1408A8E8C (EtwpCovSampCheckForSegments.c)
 *     ExpParseArcPathName @ 0x1409FCDD8 (ExpParseArcPathName.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1409FE148 (ExpTranslateDriverEntryNameToId.c)
 *     ExpTranslateHexStringToGUID @ 0x1409FE244 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1409FE3C8 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1409FE468 (ExpTranslateHexStringToULONGLONG.c)
 * Callees:
 *     iswctype @ 0x1403DBCE4 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
