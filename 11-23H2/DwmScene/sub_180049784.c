/*
 * XREFs of sub_180049784 @ 0x180049784
 * Callers:
 *     sub_180048EE8 @ 0x180048EE8 (sub_180048EE8.c)
 *     sub_1800496A8 @ 0x1800496A8 (sub_1800496A8.c)
 * Callees:
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_180047888 @ 0x180047888 (sub_180047888.c)
 */

__int64 __fastcall sub_180049784(__int64 a1, int a2, int a3, char a4)
{
  __int64 v7; // rax

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x10u;
  *(_DWORD *)(a1 + 292) |= 0x10u;
  v7 = sub_180029630(a1);
  return sub_180047888((__int64 *)(a1 + 160), a2, a3, *(_DWORD *)(a1 + 124), 1, *(_DWORD *)(a1 + 304), v7);
}
