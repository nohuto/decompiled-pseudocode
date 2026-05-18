/*
 * XREFs of sub_1800494AC @ 0x1800494AC
 * Callers:
 *     sub_180048EE8 @ 0x180048EE8 (sub_180048EE8.c)
 *     sub_180049360 @ 0x180049360 (sub_180049360.c)
 * Callees:
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_18004783C @ 0x18004783C (sub_18004783C.c)
 */

__int64 __fastcall sub_1800494AC(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x10000040u;
  *(_DWORD *)(a1 + 288) = 1;
  v6 = sub_180029630(a1);
  return sub_18004783C((__int64 *)(a1 + 272), a2, a3, *(_DWORD *)(a1 + 116), *(_DWORD *)(a1 + 304), v6);
}
