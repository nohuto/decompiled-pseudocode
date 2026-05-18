/*
 * XREFs of sub_180044DD0 @ 0x180044DD0
 * Callers:
 *     sub_18010212F @ 0x18010212F (sub_18010212F.c)
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_1 @ 0x1801046ED (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_1801046ED.c)
 *     sub_1801063DA @ 0x1801063DA (sub_1801063DA.c)
 *     sub_1801069E3 @ 0x1801069E3 (sub_1801069E3.c)
 *     sub_180106F54 @ 0x180106F54 (sub_180106F54.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180044DD0(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    result = sub_180010884(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
