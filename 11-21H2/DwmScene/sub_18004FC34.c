/*
 * XREFs of sub_18004FC34 @ 0x18004FC34
 * Callers:
 *     sub_18004F104 @ 0x18004F104 (sub_18004F104.c)
 *     sub_18004FB58 @ 0x18004FB58 (sub_18004FB58.c)
 * Callees:
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18004DA8C @ 0x18004DA8C (sub_18004DA8C.c)
 */

__int64 __fastcall sub_18004FC34(__int64 a1, int a2, int a3, char a4)
{
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-28h]

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x20u;
  *(_DWORD *)(a1 + 292) |= 0x20u;
  v7 = sub_18002B9E0(a1);
  return sub_18004DA8C((__int64 *)(a1 + 192), a2, a3, *(_DWORD *)(a1 + 124), v9, *(_DWORD *)(a1 + 304), v7);
}
