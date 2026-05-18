/*
 * XREFs of sub_180063CDC @ 0x180063CDC
 * Callers:
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180063CDC(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0

  *(_BYTE *)(a2 + 16) = 0;
  if ( *(_BYTE *)(a1 + 388) )
  {
    v2 = *(_OWORD *)(a1 + 372);
    *(_BYTE *)(a2 + 16) = 1;
    *(_OWORD *)a2 = v2;
  }
  return a2;
}
