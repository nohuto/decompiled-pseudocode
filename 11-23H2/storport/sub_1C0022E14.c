/*
 * XREFs of sub_1C0022E14 @ 0x1C0022E14
 * Callers:
 *     sub_1C00A2788 @ 0x1C00A2788 (sub_1C00A2788.c)
 *     sub_1C00AA8F4 @ 0x1C00AA8F4 (sub_1C00AA8F4.c)
 * Callees:
 *     sub_1C0018A38 @ 0x1C0018A38 (sub_1C0018A38.c)
 *     sub_1C0022670 @ 0x1C0022670 (sub_1C0022670.c)
 */

void __fastcall sub_1C0022E14(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 448) & 0x20) != 0 )
  {
    sub_1C0022670(*(_QWORD *)(a1 + 24), a1);
    sub_1C0018A38(*(_QWORD *)(a1 + 24), a1);
  }
}
