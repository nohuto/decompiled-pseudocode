/*
 * XREFs of sub_140B4D540 @ 0x140B4D540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140B4D540(_WORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // ax

  v2 = a1[5];
  if ( v2 >= a2[5] )
  {
    if ( v2 > a2[5] )
      return 1LL;
    v3 = a1[4];
    if ( v3 >= a2[4] )
      return v3 > a2[4];
  }
  return 0xFFFFFFFFLL;
}
