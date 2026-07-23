/*
 * XREFs of sub_14032E680 @ 0x14032E680
 * Callers:
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14032E970 @ 0x14032E970 (sub_14032E970.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_1405A6A34 @ 0x1405A6A34 (sub_1405A6A34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14032E680(__int64 a1, int a2, unsigned int a3)
{
  int v3; // edx
  int v4; // eax
  unsigned int v6; // edx
  int v7; // edx

  if ( a3 == 24 )
    return 24LL;
  if ( a2 == 24
    && ((v6 = *(_DWORD *)(a1 + 48), (v6 & 0x200000) == 0)
      ? (v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 32LL) >> 1)
      : (v7 = v6 >> 7),
        a2 = v7 & 0x1F,
        a2 == 24)
    || (v3 = a2 & 0x18) == 0 )
  {
    v4 = a3 & 0x18;
    if ( v4 == 24 )
    {
      a3 &= 0xFFFFFFE7;
      return a3;
    }
    if ( v4 != 8 )
      return a3;
LABEL_17:
    a3 &= ~8u;
    return a3;
  }
  if ( v3 == 16 )
    goto LABEL_17;
  if ( v3 == 8 )
    return a3 & 0xFFFFFFE7 | 8;
  if ( v3 != 24 )
    return a3;
  return a3 | 0x18;
}
