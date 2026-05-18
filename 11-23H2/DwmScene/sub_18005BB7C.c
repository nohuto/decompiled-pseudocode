/*
 * XREFs of sub_18005BB7C @ 0x18005BB7C
 * Callers:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005BB7C(__int64 a1, __int64 a2)
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
