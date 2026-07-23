/*
 * XREFs of sub_1409B0770 @ 0x1409B0770
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409B0030 @ 0x1409B0030 (sub_1409B0030.c)
 */

__int64 __fastcall sub_1409B0770(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 1124) & 0x4000000) == 0 || (*(_DWORD *)(a1 + 1120) & 1) != 0 )
    return 0LL;
  else
    return sub_1409B0030(a2, a1);
}
