/*
 * XREFs of sub_1405E00B8 @ 0x1405E00B8
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 */

bool __fastcall sub_1405E00B8(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1512) & 0x40000000) != 0 )
    return !sub_14020A400(a1);
  return v1;
}
