/*
 * XREFs of sub_1406E91A0 @ 0x1406E91A0
 * Callers:
 *     sub_140670488 @ 0x140670488 (sub_140670488.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1406E91A0(unsigned __int8 a1)
{
  if ( a1 <= 0x41u )
  {
    if ( a1 == 65 || !a1 || a1 == 49 || a1 == 8 || a1 == 18 || a1 == 33 )
      return 1;
  }
  else if ( a1 >= 0x51u && (a1 <= 0x52u || a1 > 0x60u && (a1 <= 0x62u || a1 == 114 || a1 == 0x81)) )
  {
    return 1;
  }
  return 0;
}
