/*
 * XREFs of sub_1800498D0 @ 0x1800498D0
 * Callers:
 *     sub_180048EE8 @ 0x180048EE8 (sub_180048EE8.c)
 *     sub_1800497F8 @ 0x1800497F8 (sub_1800497F8.c)
 * Callees:
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_180047888 @ 0x180047888 (sub_180047888.c)
 */

__int64 __fastcall sub_1800498D0(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x100u;
  v6 = sub_180029630(a1);
  return sub_180047888((__int64 *)(a1 + 144), a2, a3, *(_DWORD *)(a1 + 124), 0, *(_DWORD *)(a1 + 304), v6);
}
