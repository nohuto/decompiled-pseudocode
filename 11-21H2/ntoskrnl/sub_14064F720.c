/*
 * XREFs of sub_14064F720 @ 0x14064F720
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_140A255C0 @ 0x140A255C0 (sub_140A255C0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14064F720(int a1)
{
  if ( a1 > 19 )
  {
    if ( a1 <= 23 || a1 != 24 && (a1 <= 25 || a1 > 28) )
      return 0;
  }
  else if ( a1 < 18 && (a1 < 8 || a1 != 8 && a1 != 13) )
  {
    return 0;
  }
  return 1;
}
