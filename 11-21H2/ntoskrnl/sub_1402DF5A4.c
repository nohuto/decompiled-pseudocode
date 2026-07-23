/*
 * XREFs of sub_1402DF5A4 @ 0x1402DF5A4
 * Callers:
 *     sub_14076FF88 @ 0x14076FF88 (sub_14076FF88.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14077CF10 @ 0x14077CF10 (sub_14077CF10.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402DF5A4(__int64 a1, int a2)
{
  if ( a2 <= 7 )
    return a2 < 6 && a2 > 0 && (a2 <= 3 || a2 == 5);
  return a2 <= 24 || a2 > 25 && a2 <= 37;
}
