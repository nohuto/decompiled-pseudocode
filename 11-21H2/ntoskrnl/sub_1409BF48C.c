/*
 * XREFs of sub_1409BF48C @ 0x1409BF48C
 * Callers:
 *     sub_1409BF208 @ 0x1409BF208 (sub_1409BF208.c)
 *     sub_1409BF744 @ 0x1409BF744 (sub_1409BF744.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409BF48C(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax

  if ( *a1 <= *a2 )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    v2 = a1[1] & 0xF;
    if ( v2 >= a2[1] )
    {
      if ( v2 <= a2[1] )
        return 0LL;
      return 0xFFFFFFFFLL;
    }
  }
  return 1LL;
}
