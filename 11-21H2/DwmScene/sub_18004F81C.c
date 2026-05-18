/*
 * XREFs of sub_18004F81C @ 0x18004F81C
 * Callers:
 *     sub_18004F104 @ 0x18004F104 (sub_18004F104.c)
 *     sub_18004F73C @ 0x18004F73C (sub_18004F73C.c)
 * Callees:
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18004DACC @ 0x18004DACC (sub_18004DACC.c)
 */

__int64 __fastcall sub_18004F81C(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rax

  *(_DWORD *)(a1 + 292) |= 0x400u;
  v8 = sub_18002B9E0(a1);
  sub_18004DACC((__int64 *)(a1 + 208), a2, a4, *(_DWORD *)(a1 + 124), 6, *(_DWORD *)(a1 + 304), v8);
  v9 = sub_18002B9E0(a1);
  return sub_18004DACC((__int64 *)(a1 + 224), a3, a4, *(_DWORD *)(a1 + 124), 7, *(_DWORD *)(a1 + 304), v9);
}
