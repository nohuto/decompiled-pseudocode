/*
 * XREFs of sub_18004F6CC @ 0x18004F6CC
 * Callers:
 *     sub_18004F104 @ 0x18004F104 (sub_18004F104.c)
 *     sub_18004F584 @ 0x18004F584 (sub_18004F584.c)
 * Callees:
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18004DA0C @ 0x18004DA0C (sub_18004DA0C.c)
 */

__int64 __fastcall sub_18004F6CC(__int64 a1, int a2, int a3)
{
  __int64 *v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x10000040u;
  *(_DWORD *)(a1 + 288) = 1;
  v6 = (__int64 *)sub_18002B9E0(a1);
  return sub_18004DA0C((__int64 *)(a1 + 272), a2, a3, *(_DWORD *)(a1 + 116), *(_DWORD *)(a1 + 304), v6);
}
