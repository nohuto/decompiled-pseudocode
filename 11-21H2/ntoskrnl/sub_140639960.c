/*
 * XREFs of sub_140639960 @ 0x140639960
 * Callers:
 *     sub_140AAA178 @ 0x140AAA178 (sub_140AAA178.c)
 *     sub_140AAA2B0 @ 0x140AAA2B0 (sub_140AAA2B0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140639960(unsigned __int16 a1, _BYTE *a2)
{
  char result; // al
  __int16 v3; // ax

  result = 0x80;
  if ( (a1 & 0xFF80) != 0 )
  {
    a2[2] = a1 & 0x3F | 0x80;
    v3 = a1 >> 6;
    if ( (a1 & 0xF800) != 0 )
    {
      result = v3 & 0x3F | 0x80;
      *a2 = (a1 >> 12) | 0xE0;
    }
    else
    {
      result = v3 & 0x1F | 0xC0;
    }
    a2[1] = result;
  }
  else
  {
    a2[2] = a1;
  }
  return result;
}
