/*
 * XREFs of sub_14076556C @ 0x14076556C
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     sub_140765B84 @ 0x140765B84 (sub_140765B84.c)
 *     sub_140950530 @ 0x140950530 (sub_140950530.c)
 */

__int64 __fastcall sub_14076556C(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // r11d
  __int64 result; // rax
  __int64 v7; // rdx

  v3 = sub_140765B84(a2);
  result = 0LL;
  if ( (v5 & 0xFFFFFFFB) == 0 )
  {
    if ( (*(_DWORD *)(v3 + 396) & 0x1000) != 0 )
    {
      v7 = 1LL;
    }
    else
    {
      if ( v5 || *(_DWORD *)(v4 + 16) != 22 || !*(_DWORD *)(v3 + 600) )
        return result;
      v7 = 10LL;
    }
    sub_140950530(v2, v7, v3 + 40);
    return 2147483688LL;
  }
  return result;
}
