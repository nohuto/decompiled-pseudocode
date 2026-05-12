/*
 * XREFs of sub_1C0060D8C @ 0x1C0060D8C
 * Callers:
 *     sub_1C002095C @ 0x1C002095C (sub_1C002095C.c)
 *     sub_1C0074AF0 @ 0x1C0074AF0 (sub_1C0074AF0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C0060D8C(unsigned __int16 a1, char *a2, unsigned int a3)
{
  char result; // al

  if ( a3 >= 4 )
  {
    a2[3] = a0123456789abcd[a1 & 0xF];
    a2[2] = a0123456789abcd[((unsigned __int64)a1 >> 4) & 0xF];
    a2[1] = a0123456789abcd[((unsigned __int64)a1 >> 8) & 0xF];
    result = a0123456789abcd[(unsigned __int64)a1 >> 12];
    *a2 = result;
  }
  return result;
}
