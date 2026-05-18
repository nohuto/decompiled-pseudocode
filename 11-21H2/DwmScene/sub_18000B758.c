/*
 * XREFs of sub_18000B758 @ 0x18000B758
 * Callers:
 *     sub_18000AF98 @ 0x18000AF98 (sub_18000AF98.c)
 * Callees:
 *     sub_18000BCFC @ 0x18000BCFC (sub_18000BCFC.c)
 *     sub_18000CA94 @ 0x18000CA94 (sub_18000CA94.c)
 *     sub_18000CAA0 @ 0x18000CAA0 (sub_18000CAA0.c)
 */

char __fastcall sub_18000B758(int a1)
{
  char v1; // al

  v1 = byte_1801F72D1;
  if ( !a1 )
    v1 = 1;
  byte_1801F72D1 = v1;
  sub_18000BCFC();
  if ( !(unsigned __int8)sub_18000CA94() )
    return 0;
  if ( !(unsigned __int8)sub_18000CA94() )
  {
    sub_18000CAA0(0LL);
    return 0;
  }
  return 1;
}
