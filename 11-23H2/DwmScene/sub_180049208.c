/*
 * XREFs of sub_180049208 @ 0x180049208
 * Callers:
 *     sub_180048EE8 @ 0x180048EE8 (sub_180048EE8.c)
 *     sub_180049130 @ 0x180049130 (sub_180049130.c)
 * Callees:
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_1800478FC @ 0x1800478FC (sub_1800478FC.c)
 */

__int64 __fastcall sub_180049208(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x80u;
  v6 = sub_180029630(a1);
  return sub_1800478FC((__int64 *)(a1 + 176), a2, a3, *(_DWORD *)(a1 + 124), 3, *(_DWORD *)(a1 + 304), v6);
}
