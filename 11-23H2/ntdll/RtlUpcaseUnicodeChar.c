/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x180059BD0
 * Callers:
 *     towupper @ 0x1800950E0 (towupper.c)
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter > 0x7Au )
  {
    if ( qword_180184808 )
    {
      if ( SourceCharacter >= 0xC0u )
        SourceCharacter += *(_WORD *)(qword_180184808
                                    + 2LL
                                    * ((SourceCharacter & 0xF)
                                     + (unsigned int)*(unsigned __int16 *)(qword_180184808
                                                                         + 2LL
                                                                         * (((SourceCharacter >> 4) & 0xF)
                                                                          + (unsigned int)*(unsigned __int16 *)(qword_180184808 + 2 * ((unsigned __int64)SourceCharacter >> 8))))));
    }
    return SourceCharacter;
  }
  return SourceCharacter - 32;
}
