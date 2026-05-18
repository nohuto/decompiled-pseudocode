/*
 * XREFs of sub_180020828 @ 0x180020828
 * Callers:
 *     sub_1801037F9 @ 0x1801037F9 (sub_1801037F9.c)
 *     sub_180103F89 @ 0x180103F89 (sub_180103F89.c)
 *     ?dtor$0@?0??do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z@4HA_0 @ 0x18010D277 (-dtor$0@-0--do_transform@-$collate@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@__ea_18010D277.c)
 *     sub_18010D2A4 @ 0x18010D2A4 (sub_18010D2A4.c)
 *     sub_18010D39F @ 0x18010D39F (sub_18010D39F.c)
 *     sub_18010D4B8 @ 0x18010D4B8 (sub_18010D4B8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001FF34 @ 0x18001FF34 (sub_18001FF34.c)
 */

__int64 __fastcall sub_180020828(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    sub_18001FF34((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
