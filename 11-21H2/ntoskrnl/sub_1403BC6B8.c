/*
 * XREFs of sub_1403BC6B8 @ 0x1403BC6B8
 * Callers:
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 * Callees:
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 */

ULONG_PTR *__fastcall sub_1403BC6B8(char a1)
{
  ULONG_PTR *result; // rax

  if ( a1 )
  {
    result = sub_1403ACEFC(0, 32770, 24576, 0, 0);
    if ( !result )
      return sub_1403ACEFC(0, 32770, 28416, 0, 1);
  }
  else
  {
    result = sub_1403ACEFC(0, 32800, 24576, 3840, 0);
    if ( !result )
    {
      result = sub_1403ACEFC(0, 32832, 24576, 3840, 0);
      if ( !result )
        return sub_1403ACEFC(0, 32784, 24576, 3840, 0);
    }
  }
  return result;
}
