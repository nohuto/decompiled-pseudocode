/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x18005BDE0
 * Callers:
 *     towupper @ 0x180099820 (towupper.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall RtlUpcaseUnicodeChar(unsigned __int16 a1)
{
  if ( a1 < 0x61u )
    return a1;
  if ( a1 <= 0x7Au )
    return a1 - 32;
  if ( !qword_1801776F8 || a1 < 0xC0u )
    return a1;
  return a1
       + *(_WORD *)(qword_1801776F8
                  + 2LL
                  * ((a1 & 0xF)
                   + (unsigned int)*(unsigned __int16 *)(qword_1801776F8
                                                       + 2LL
                                                       * (((a1 >> 4) & 0xF)
                                                        + (unsigned int)*(unsigned __int16 *)(qword_1801776F8
                                                                                            + 2
                                                                                            * ((unsigned __int64)a1 >> 8))))));
}
