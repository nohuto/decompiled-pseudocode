/*
 * XREFs of sub_1406F2350 @ 0x1406F2350
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x140263710 (KeQueryHighestNodeNumber.c)
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall sub_1406F2350(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  USHORT v6; // bx
  USHORT HighestNodeNumber; // ax
  unsigned int v8; // esi
  unsigned int i; // edi

  v6 = 0;
  if ( a2 < 4 )
  {
    if ( a3 )
      *a3 = 4;
    return 3221225476LL;
  }
  else
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    *a1 = HighestNodeNumber;
    v8 = HighestNodeNumber + 1;
    if ( (a2 - 8) >> 4 <= v8 )
      v8 = (a2 - 8) >> 4;
    if ( a2 >= 8 && v8 )
    {
      *a3 = 16 * v8 + 8;
      for ( i = 0; i < v8; v6 = i )
        KeQueryNodeActiveAffinity(v6, (PGROUP_AFFINITY)&a1[4 * i++ + 2], 0LL);
      return 0LL;
    }
    else
    {
      *a3 = 4;
      return 0LL;
    }
  }
}
