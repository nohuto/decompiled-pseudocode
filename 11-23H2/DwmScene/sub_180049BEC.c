/*
 * XREFs of sub_180049BEC @ 0x180049BEC
 * Callers:
 *     sub_180048EE8 @ 0x180048EE8 (sub_180048EE8.c)
 *     sub_180049B14 @ 0x180049B14 (sub_180049B14.c)
 * Callees:
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_180047854 @ 0x180047854 (sub_180047854.c)
 */

__int64 __fastcall sub_180049BEC(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax

  *(_DWORD *)(a1 + 292) |= 1u;
  v6 = sub_180029630(a1);
  return sub_180047854((__int64 *)(a1 + 240), a2, a3, *(_DWORD *)(a1 + 124), 4, *(_DWORD *)(a1 + 304), v6);
}
