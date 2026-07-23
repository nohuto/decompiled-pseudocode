/*
 * XREFs of sub_140418CB0 @ 0x140418CB0
 * Callers:
 *     sub_1403BFE70 @ 0x1403BFE70 (sub_1403BFE70.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140418CB0(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 2 && !_bittest64((const signed __int64 *)&qword_140D06958, 0x23u);
}
