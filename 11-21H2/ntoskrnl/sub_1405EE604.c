/*
 * XREFs of sub_1405EE604 @ 0x1405EE604
 * Callers:
 *     sub_1409BFB48 @ 0x1409BFB48 (sub_1409BFB48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EE604(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx

  if ( *a1 <= *a2 )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    v2 = a1[1] & 0xF;
    v3 = a2[1] & 0xF;
    if ( v2 >= v3 )
    {
      if ( v2 <= v3 )
        return 0LL;
      return 0xFFFFFFFFLL;
    }
  }
  return 1LL;
}
