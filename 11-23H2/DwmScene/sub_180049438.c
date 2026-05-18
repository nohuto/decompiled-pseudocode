/*
 * XREFs of sub_180049438 @ 0x180049438
 * Callers:
 *     sub_180048EE8 @ 0x180048EE8 (sub_180048EE8.c)
 *     sub_180049288 @ 0x180049288 (sub_180049288.c)
 * Callees:
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_180047848 @ 0x180047848 (sub_180047848.c)
 */

__int64 __fastcall sub_180049438(__int64 a1, int a2, int a3)
{
  int v3; // eax
  __int64 v7; // rax

  v3 = *(_DWORD *)(a1 + 292);
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = v3 & 0xEFFFFFBF | 0x40;
  v7 = sub_180029630(a1);
  return sub_180047848((__int64 *)(a1 + 272), a2, a3, *(_DWORD *)(a1 + 116), *(_DWORD *)(a1 + 304), v7);
}
