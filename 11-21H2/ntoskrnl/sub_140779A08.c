/*
 * XREFs of sub_140779A08 @ 0x140779A08
 * Callers:
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 * Callees:
 *     sub_1406C7D58 @ 0x1406C7D58 (sub_1406C7D58.c)
 *     sub_1406C7E48 @ 0x1406C7E48 (sub_1406C7E48.c)
 *     sub_14076D7D4 @ 0x14076D7D4 (sub_14076D7D4.c)
 */

void __fastcall sub_140779A08(__int64 a1)
{
  struct _ERESOURCE *v2; // rax

  if ( (*(_DWORD *)(a1 + 4) & 0xB) != 0 || *(_DWORD *)(a1 + 76) )
  {
    sub_14076D7D4(a1);
    v2 = sub_1406C7E48(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL));
    if ( v2 )
      sub_1406C7D58((__int64)v2, a1);
  }
}
