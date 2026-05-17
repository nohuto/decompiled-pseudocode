/*
 * XREFs of NLS_DOWNCASE @ 0x18000E3E4
 * Callers:
 *     RtlDowncaseUnicodeString @ 0x18000E340 (RtlDowncaseUnicodeString.c)
 *     RtlFindCharInUnicodeString @ 0x180047A60 (RtlFindCharInUnicodeString.c)
 *     RtlDowncaseUnicodeChar @ 0x1800F5EC0 (RtlDowncaseUnicodeChar.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_DOWNCASE(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 result; // ax

  result = a2;
  if ( a2 >= 0x41u )
  {
    if ( a2 <= 0x5Au )
    {
      return a2 + 32;
    }
    else if ( a1 )
    {
      if ( a2 >= 0xC0u )
        return a2
             + *(_WORD *)(a1
                        + 2LL
                        * ((a2 & 0xF)
                         + (unsigned int)*(unsigned __int16 *)(a1
                                                             + 2LL
                                                             * (((unsigned __int8)a2 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(a1
                                                                                                  + 2 * ((unsigned __int64)a2 >> 8))))));
    }
  }
  return result;
}
