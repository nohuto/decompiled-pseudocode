/*
 * XREFs of sub_1407DFBA4 @ 0x1407DFBA4
 * Callers:
 *     sub_1407DF794 @ 0x1407DF794 (sub_1407DF794.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1407DFBA4(__int64 a1, int a2, unsigned int a3)
{
  int v3; // r9d
  unsigned int v5; // ecx
  unsigned int v6; // eax

  v3 = *(_DWORD *)(a1 + 20) >> 8;
  if ( a2 != 1 )
    LOBYTE(v3) = *(_DWORD *)(a1 + 20) >> 1;
  if ( !_BitScanReverse(&v5, v3 & 0x7F) )
    return 0;
  _BitScanReverse(&v6, a3);
  return v5 > v6;
}
