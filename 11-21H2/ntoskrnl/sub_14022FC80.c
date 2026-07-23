/*
 * XREFs of sub_14022FC80 @ 0x14022FC80
 * Callers:
 *     sub_14022FB98 @ 0x14022FB98 (sub_14022FB98.c)
 *     sub_14027A9D0 @ 0x14027A9D0 (sub_14027A9D0.c)
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 * Callees:
 *     sub_1403234A0 @ 0x1403234A0 (sub_1403234A0.c)
 */

__int64 __fastcall sub_14022FC80(__int64 *a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[2] << 25 >> 16 << 25;
  v4 = *((unsigned __int16 *)a1 + 4);
  v5 = (*((unsigned __int8 *)a1 + 13) >> 3) & 2;
  v6 = (v4 << 12) + (v3 >> 16);
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = v5 | 5;
  }
  else
  {
    v7 = v5 | 4;
    if ( (*(_BYTE *)(v2 + 184) & 7) != 0 )
      v7 = v5;
  }
  sub_1403234A0(v2, v6, *((unsigned __int16 *)a1 + 5), v7);
  result = 0LL;
  *((_WORD *)a1 + 5) = 0;
  return result;
}
