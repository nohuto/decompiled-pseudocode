/*
 * XREFs of sub_1402426B4 @ 0x1402426B4
 * Callers:
 *     sub_1406BDC58 @ 0x1406BDC58 (sub_1406BDC58.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_140A255C0 @ 0x140A255C0 (sub_140A255C0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402426B4(int a1)
{
  if ( a1 > 19 )
    return a1 > 23 && (a1 == 24 || a1 > 25 && a1 <= 28);
  return a1 >= 18 || a1 >= 8 && (a1 == 8 || a1 == 13);
}
