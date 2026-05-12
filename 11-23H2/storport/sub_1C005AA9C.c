/*
 * XREFs of sub_1C005AA9C @ 0x1C005AA9C
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 *     sub_1C0062414 @ 0x1C0062414 (sub_1C0062414.c)
 *     sub_1C0063710 @ 0x1C0063710 (sub_1C0063710.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C005AA9C(int a1)
{
  char result; // al

  switch ( a1 )
  {
    case -2147483643:
      return 18;
    case -2147483631:
      return 5;
    case -1073741808:
      return 34;
    case -1073741670:
      return 48;
    case -1073741667:
      return 10;
    case -1073741643:
      return 9;
    case -1073741632:
      return 8;
  }
  result = 4;
  if ( a1 >= 0 )
    return 1;
  return result;
}
