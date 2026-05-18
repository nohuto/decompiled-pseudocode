/*
 * XREFs of sub_18004FE0C @ 0x18004FE0C
 * Callers:
 *     sub_18004F104 @ 0x18004F104 (sub_18004F104.c)
 *     sub_18004FD34 @ 0x18004FD34 (sub_18004FD34.c)
 * Callees:
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18004DA24 @ 0x18004DA24 (sub_18004DA24.c)
 */

__int64 __fastcall sub_18004FE0C(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax

  *(_DWORD *)(a1 + 292) |= 1u;
  v6 = sub_18002B9E0(a1);
  return sub_18004DA24((__int64 *)(a1 + 240), a2, a3, *(_DWORD *)(a1 + 124), 4, *(_DWORD *)(a1 + 304), v6);
}
