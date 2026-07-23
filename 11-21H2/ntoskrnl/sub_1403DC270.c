/*
 * XREFs of sub_1403DC270 @ 0x1403DC270
 * Callers:
 *     sub_140A5B770 @ 0x140A5B770 (sub_140A5B770.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DC270(__int64 a1, _DWORD *a2)
{
  if ( *(_DWORD *)(a1 + 24) < 3u )
    *(_DWORD *)(a1 + 24) = 3;
  *a2 = 192;
  *a2 = *(_DWORD *)(a1 + 16) + 192;
  return 0LL;
}
