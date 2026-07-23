/*
 * XREFs of sub_14025FF00 @ 0x14025FF00
 * Callers:
 *     sub_14025FE60 @ 0x14025FE60 (sub_14025FE60.c)
 *     sub_1405B7340 @ 0x1405B7340 (sub_1405B7340.c)
 *     sub_1406EC1C4 @ 0x1406EC1C4 (sub_1406EC1C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14025FF00(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // edx
  __int64 i; // r8

  v1 = *(_DWORD *)(a1 + 16728);
  v2 = 0;
  if ( !v1 )
    return 16LL;
  for ( i = a1 + 16736; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x10) == 0; i += 8LL )
  {
    if ( ++v2 >= v1 )
      return 16LL;
  }
  return v2;
}
