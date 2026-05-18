/*
 * XREFs of sub_18004F65C @ 0x18004F65C
 * Callers:
 *     sub_18004F104 @ 0x18004F104 (sub_18004F104.c)
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 * Callees:
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18004DA18 @ 0x18004DA18 (sub_18004DA18.c)
 */

__int64 __fastcall sub_18004F65C(__int64 a1, int a2, int a3)
{
  __int64 *v6; // rax

  *(_DWORD *)(a1 + 292) &= ~0x10000000u;
  *(_DWORD *)(a1 + 292) |= 0x40u;
  *(_DWORD *)(a1 + 288) = 0;
  v6 = (__int64 *)sub_18002B9E0(a1);
  return sub_18004DA18((__int64 *)(a1 + 272), a2, a3, *(_DWORD *)(a1 + 116), *(_DWORD *)(a1 + 304), v6);
}
