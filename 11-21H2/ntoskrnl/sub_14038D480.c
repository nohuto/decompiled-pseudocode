/*
 * XREFs of sub_14038D480 @ 0x14038D480
 * Callers:
 *     sub_140A4EB20 @ 0x140A4EB20 (sub_140A4EB20.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void __fastcall sub_14038D480(__int64 a1)
{
  if ( !a1 )
  {
    if ( Address )
      PoSetHiberRange(0LL, 0x10000u, Address, 0x1000uLL, 0x636C6168u);
  }
}
