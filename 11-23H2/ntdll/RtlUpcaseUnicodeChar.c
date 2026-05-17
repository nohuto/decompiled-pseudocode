/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x180059BD0
 * Callers:
 *     towupper @ 0x1800950E0 (towupper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpcaseUnicodeChar(int a1)
{
  if ( (unsigned __int16)a1 < 0x61u )
    return (unsigned __int16)a1;
  if ( (unsigned __int16)a1 > 0x7Au )
  {
    if ( qword_180184808 )
    {
      if ( (unsigned __int16)a1 >= 0xC0u )
        LOWORD(a1) = *(_WORD *)(qword_180184808
                              + 2LL
                              * ((a1 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(qword_180184808
                                                                   + 2LL
                                                                   * ((((unsigned __int16)a1 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(qword_180184808 + 2 * ((unsigned __int64)(unsigned __int16)a1 >> 8))))))
                   + a1;
    }
    return (unsigned __int16)a1;
  }
  return (unsigned int)(a1 - 32);
}
