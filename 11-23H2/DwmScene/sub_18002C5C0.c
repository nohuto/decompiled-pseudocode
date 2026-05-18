/*
 * XREFs of sub_18002C5C0 @ 0x18002C5C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002C554 @ 0x18002C554 (sub_18002C554.c)
 */

bool __fastcall sub_18002C5C0(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 160) )
    return sub_18002C554(a1);
  return v1;
}
