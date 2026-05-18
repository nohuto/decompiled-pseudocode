/*
 * XREFs of sub_1800495FC @ 0x1800495FC
 * Callers:
 *     sub_180048EE8 @ 0x180048EE8 (sub_180048EE8.c)
 *     sub_18004951C @ 0x18004951C (sub_18004951C.c)
 * Callees:
 *     sub_180029630 @ 0x180029630 (sub_180029630.c)
 *     sub_1800478FC @ 0x1800478FC (sub_1800478FC.c)
 */

__int64 __fastcall sub_1800495FC(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rax

  *(_DWORD *)(a1 + 292) |= 0x400u;
  v8 = sub_180029630(a1);
  sub_1800478FC((__int64 *)(a1 + 208), a2, a4, *(_DWORD *)(a1 + 124), 6, *(_DWORD *)(a1 + 304), v8);
  v9 = sub_180029630(a1);
  return sub_1800478FC((__int64 *)(a1 + 224), a3, a4, *(_DWORD *)(a1 + 124), 7, *(_DWORD *)(a1 + 304), v9);
}
