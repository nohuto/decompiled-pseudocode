/*
 * XREFs of sub_1406677EC @ 0x1406677EC
 * Callers:
 *     sub_1406675AC @ 0x1406675AC (sub_1406675AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406677EC(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) >= 2u )
    return 3221225485LL;
  else
    return *(_DWORD *)(a1 + 4) > 3u ? 0xC00000A5 : 0;
}
