/*
 * XREFs of sub_14033E1B0 @ 0x14033E1B0
 * Callers:
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 * Callees:
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 */

__int64 __fastcall sub_14033E1B0(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 v3; // dl
  _BYTE *v4; // r11
  unsigned int v6; // r10d
  unsigned __int8 *v7; // r8

  if ( !a1[17] )
    return 0LL;
  v3 = a1[19];
  v4 = a1 + 19;
  if ( (v3 & 6) == 6 )
    return 0LL;
  v6 = 0;
  v7 = &a1[-96 * a1[16]];
  if ( (v3 & 2) == 0 && ((int)sub_14033D760((__int64)(v7 - 1696)) >= 2 || *((_DWORD *)v7 - 64) != v6) )
  {
    ++*(_BYTE *)(a2 + 92);
    *v4 |= 2u;
    if ( *(_BYTE *)(a2 + 92) == 1 )
      v6 = 1;
  }
  if ( (*v4 & 4) == 0 && (!*((_DWORD *)v7 - 62) || *((_DWORD *)v7 - 63)) )
  {
    *(_DWORD *)(a2 + 92) ^= ((unsigned __int16)*(_DWORD *)(a2 + 92) ^ (unsigned __int16)(*(_DWORD *)(a2 + 92) + 256)) & 0x7F00;
    *v4 |= 4u;
    if ( (*(_DWORD *)(a2 + 92) & 0x7F00) == 0x100 )
      v6 |= 2u;
  }
  return v6;
}
