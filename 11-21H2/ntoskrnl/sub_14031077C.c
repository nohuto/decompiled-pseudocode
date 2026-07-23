/*
 * XREFs of sub_14031077C @ 0x14031077C
 * Callers:
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_140753B20 @ 0x140753B20 (sub_140753B20.c)
 *     sub_1407BC750 @ 0x1407BC750 (sub_1407BC750.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14031077C(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) != 0 )
  {
    if ( (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000 )
      return 0LL;
  }
  else if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
