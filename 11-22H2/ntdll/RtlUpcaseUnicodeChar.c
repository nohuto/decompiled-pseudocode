/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x180059CF0
 * Callers:
 *     towupper @ 0x1800948E0 (towupper.c)
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter > 0x7Au )
  {
    if ( qword_1801817B8 )
    {
      if ( SourceCharacter >= 0xC0u )
        SourceCharacter += *(_WORD *)(qword_1801817B8
                                    + 2LL
                                    * ((SourceCharacter & 0xF)
                                     + (unsigned int)*(unsigned __int16 *)(qword_1801817B8
                                                                         + 2LL
                                                                         * (((SourceCharacter >> 4) & 0xF)
                                                                          + (unsigned int)*(unsigned __int16 *)(qword_1801817B8 + 2 * ((unsigned __int64)SourceCharacter >> 8))))));
    }
    return SourceCharacter;
  }
  return SourceCharacter - 32;
}
