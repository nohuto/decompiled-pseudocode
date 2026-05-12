/*
 * XREFs of sub_1C003EDC4 @ 0x1C003EDC4
 * Callers:
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 *     sub_1C00AD678 @ 0x1C00AD678 (sub_1C00AD678.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C003EDC4(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_BYTE *)a1 == 77 && *(_BYTE *)(a1 + 1) == 70 && *(_BYTE *)(a1 + 2) == 78 && *(_BYTE *)(a1 + 3) == 68 )
    return *(_WORD *)(a1 + 8) != 0;
  return result;
}
