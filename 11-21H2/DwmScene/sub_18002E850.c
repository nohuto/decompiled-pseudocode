/*
 * XREFs of sub_18002E850 @ 0x18002E850
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E7C0 @ 0x18002E7C0 (sub_18002E7C0.c)
 */

bool __fastcall sub_18002E850(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 160) )
    return sub_18002E7C0(a1);
  return v1;
}
