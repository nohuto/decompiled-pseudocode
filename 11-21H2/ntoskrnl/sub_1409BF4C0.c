/*
 * XREFs of sub_1409BF4C0 @ 0x1409BF4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409BF4C0(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax

  if ( *a1 <= *a2 )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    v2 = a1[1];
    if ( v2 >= a2[1] )
    {
      if ( v2 <= a2[1] )
        return 0LL;
      return 0xFFFFFFFFLL;
    }
  }
  return 1LL;
}
