/*
 * XREFs of sub_18004FAF0 @ 0x18004FAF0
 * Callers:
 *     sub_18004F104 @ 0x18004F104 (sub_18004F104.c)
 *     sub_18004FA18 @ 0x18004FA18 (sub_18004FA18.c)
 * Callees:
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18004DA58 @ 0x18004DA58 (sub_18004DA58.c)
 */

__int64 __fastcall sub_18004FAF0(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x100u;
  v6 = sub_18002B9E0(a1);
  return sub_18004DA58((__int64 *)(a1 + 144), a2, a3, *(_DWORD *)(a1 + 124), 0, *(_DWORD *)(a1 + 304), v6);
}
