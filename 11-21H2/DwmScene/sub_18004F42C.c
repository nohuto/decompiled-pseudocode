/*
 * XREFs of sub_18004F42C @ 0x18004F42C
 * Callers:
 *     sub_18004F104 @ 0x18004F104 (sub_18004F104.c)
 *     sub_18004F354 @ 0x18004F354 (sub_18004F354.c)
 * Callees:
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18004DACC @ 0x18004DACC (sub_18004DACC.c)
 */

__int64 __fastcall sub_18004F42C(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x80u;
  v6 = sub_18002B9E0(a1);
  return sub_18004DACC((__int64 *)(a1 + 176), a2, a3, *(_DWORD *)(a1 + 124), 3, *(_DWORD *)(a1 + 304), v6);
}
