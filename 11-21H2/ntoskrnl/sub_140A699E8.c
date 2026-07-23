/*
 * XREFs of sub_140A699E8 @ 0x140A699E8
 * Callers:
 *     sub_140A69A2C @ 0x140A69A2C (sub_140A69A2C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140A699E8(char a1)
{
  char result; // al

  switch ( a1 )
  {
    case 0:
      return 0;
    case 2:
      return 2;
    case 4:
      return 4;
    case 6:
      return 8;
    case 8:
      return 16;
  }
  result = -1;
  if ( a1 != 15 )
    return 1;
  return result;
}
