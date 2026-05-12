/*
 * XREFs of sub_1C0074AC0 @ 0x1C0074AC0
 * Callers:
 *     sub_1C0074C00 @ 0x1C0074C00 (sub_1C0074C00.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C0074AC0(unsigned __int8 a1, _BYTE *a2, unsigned int a3)
{
  char result; // al

  if ( a3 >= 2 )
  {
    *a2 = a0123456789abcd[(unsigned __int64)a1 >> 4];
    result = a0123456789abcd[a1 & 0xF];
    a2[1] = result;
  }
  return result;
}
