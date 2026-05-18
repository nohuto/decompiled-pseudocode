/*
 * XREFs of sub_18004F9A4 @ 0x18004F9A4
 * Callers:
 *     sub_18004F104 @ 0x18004F104 (sub_18004F104.c)
 *     sub_18004F8C8 @ 0x18004F8C8 (sub_18004F8C8.c)
 * Callees:
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18004DA58 @ 0x18004DA58 (sub_18004DA58.c)
 */

__int64 __fastcall sub_18004F9A4(__int64 a1, int a2, int a3, char a4)
{
  __int64 v7; // rax

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x10u;
  *(_DWORD *)(a1 + 292) |= 0x10u;
  v7 = sub_18002B9E0(a1);
  return sub_18004DA58((__int64 *)(a1 + 160), a2, a3, *(_DWORD *)(a1 + 124), 1, *(_DWORD *)(a1 + 304), v7);
}
