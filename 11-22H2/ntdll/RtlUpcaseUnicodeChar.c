/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x180059CF0
 * Callers:
 *     towupper @ 0x1800948E0 (towupper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpcaseUnicodeChar(int a1)
{
  if ( (unsigned __int16)a1 < 0x61u )
    return (unsigned __int16)a1;
  if ( (unsigned __int16)a1 > 0x7Au )
  {
    if ( qword_1801817B8 )
    {
      if ( (unsigned __int16)a1 >= 0xC0u )
        LOWORD(a1) = *(_WORD *)(qword_1801817B8
                              + 2LL
                              * ((a1 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(qword_1801817B8
                                                                   + 2LL
                                                                   * ((((unsigned __int16)a1 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(qword_1801817B8 + 2 * ((unsigned __int64)(unsigned __int16)a1 >> 8))))))
                   + a1;
    }
    return (unsigned __int16)a1;
  }
  return (unsigned int)(a1 - 32);
}
