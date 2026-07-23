/*
 * XREFs of sub_140AA4120 @ 0x140AA4120
 * Callers:
 *     <none>
 * Callees:
 *     sub_14056DBFC @ 0x14056DBFC (sub_14056DBFC.c)
 *     sub_140AA59E0 @ 0x140AA59E0 (sub_140AA59E0.c)
 */

int __fastcall sub_140AA4120(__int64 a1)
{
  int result; // eax

  result = sub_140AA59E0(*(_QWORD *)(a1 + 16));
  if ( (qword_140D01450 & 0x400000) == 0 )
    return sub_14056DBFC(*(_QWORD *)(a1 + 16), 64LL);
  return result;
}
