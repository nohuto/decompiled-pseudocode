/*
 * XREFs of sub_1C0022D90 @ 0x1C0022D90
 * Callers:
 *     sub_1C0016800 @ 0x1C0016800 (sub_1C0016800.c)
 *     sub_1C0075248 @ 0x1C0075248 (sub_1C0075248.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C0022D90(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 448);
  if ( (v1 & 4) != 0 )
  {
    v1 &= ~4u;
    *(_BYTE *)(a1 + 448) = v1;
  }
  return (v1 & 2) != 0;
}
