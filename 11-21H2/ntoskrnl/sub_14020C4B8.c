/*
 * XREFs of sub_14020C4B8 @ 0x14020C4B8
 * Callers:
 *     sub_14020B830 @ 0x14020B830 (sub_14020B830.c)
 *     sub_14020BA48 @ 0x14020BA48 (sub_14020BA48.c)
 *     sub_140556050 @ 0x140556050 (sub_140556050.c)
 *     sub_1405562E8 @ 0x1405562E8 (sub_1405562E8.c)
 *     sub_140A7FE00 @ 0x140A7FE00 (sub_140A7FE00.c)
 * Callees:
 *     <none>
 */

char sub_14020C4B8()
{
  char v0; // cl

  if ( (dword_140D0110C & 4) == 0 )
    return 0;
  v0 = 1;
  if ( (dword_140D01110 & 1) == 0 )
    return 0;
  return v0;
}
