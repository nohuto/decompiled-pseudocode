/*
 * XREFs of sub_180049A14 @ 0x180049A14
 * Callers:
 *     sub_180048EE8 @ 0x180048EE8 (sub_180048EE8.c)
 *     sub_180049938 @ 0x180049938 (sub_180049938.c)
 * Callees:
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_1800478BC @ 0x1800478BC (sub_1800478BC.c)
 */

__int64 __fastcall sub_180049A14(__int64 a1, int a2, int a3, char a4)
{
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-28h]

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x20u;
  *(_DWORD *)(a1 + 292) |= 0x20u;
  v7 = sub_180029630(a1);
  return sub_1800478BC((__int64 *)(a1 + 192), a2, a3, *(_DWORD *)(a1 + 124), v9, *(_DWORD *)(a1 + 304), v7);
}
