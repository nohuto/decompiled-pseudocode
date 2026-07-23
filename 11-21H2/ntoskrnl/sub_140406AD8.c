/*
 * XREFs of sub_140406AD8 @ 0x140406AD8
 * Callers:
 *     sub_140406130 @ 0x140406130 (sub_140406130.c)
 *     sub_140408B40 @ 0x140408B40 (sub_140408B40.c)
 * Callees:
 *     sub_14040D3B0 @ 0x14040D3B0 (sub_14040D3B0.c)
 */

__int64 __fastcall sub_140406AD8(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  *a3 &= *a2;
  return sub_14040D3B0(a2 + 32, a3 + 32, *(_DWORD *)(a1 + 16) * (*(_DWORD *)(a1 + 8) & 0xFu));
}
