/*
 * XREFs of sub_140578704 @ 0x140578704
 * Callers:
 *     sub_140201DF4 @ 0x140201DF4 (sub_140201DF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140578704(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x40) != 0 )
    return *(_BYTE *)(a1 + 195) < 25;
  return v1;
}
