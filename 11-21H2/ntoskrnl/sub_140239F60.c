/*
 * XREFs of sub_140239F60 @ 0x140239F60
 * Callers:
 *     RtlDowncaseUnicodeString @ 0x1406B4AE0 (RtlDowncaseUnicodeString.c)
 *     RtlDowncaseUnicodeChar @ 0x140882870 (RtlDowncaseUnicodeChar.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall sub_140239F60(__int64 a1, unsigned __int16 a2)
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
