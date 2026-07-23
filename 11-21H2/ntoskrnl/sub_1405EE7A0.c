/*
 * XREFs of sub_1405EE7A0 @ 0x1405EE7A0
 * Callers:
 *     sub_1409BF370 @ 0x1409BF370 (sub_1409BF370.c)
 *     sub_1409BF948 @ 0x1409BF948 (sub_1409BF948.c)
 *     sub_1409BFC00 @ 0x1409BFC00 (sub_1409BFC00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EE7A0(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // eax
  unsigned int v4; // eax

  if ( *(_DWORD *)a1 > *(_DWORD *)a2 )
    return 1LL;
  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    return 0xFFFFFFFFLL;
  v2 = *(_WORD *)(a1 + 4);
  if ( v2 > *(_WORD *)(a2 + 4) )
    return 1LL;
  if ( v2 < *(_WORD *)(a2 + 4) )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 > *(_DWORD *)(a2 + 8) )
    return 1LL;
  if ( v3 < *(_DWORD *)(a2 + 8) )
    return 0xFFFFFFFFLL;
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 <= *(_DWORD *)(a2 + 12) )
  {
    if ( v4 >= *(_DWORD *)(a2 + 12) )
      return 0LL;
    return 0xFFFFFFFFLL;
  }
  return 1LL;
}
