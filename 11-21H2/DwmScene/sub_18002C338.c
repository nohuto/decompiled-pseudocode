/*
 * XREFs of sub_18002C338 @ 0x18002C338
 * Callers:
 *     ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA @ 0x1801004B1 (-dtor$0@-0--GetBitSet@SchedulerBase@details@Concurrency@@QEAA-AVQuickBitSet@23@PEBVlocation@3@@Z.c)
 *     sub_1801010AC @ 0x1801010AC (sub_1801010AC.c)
 *     sub_1801011A8 @ 0x1801011A8 (sub_1801011A8.c)
 *     sub_1801011DE @ 0x1801011DE (sub_1801011DE.c)
 *     sub_18010172E @ 0x18010172E (sub_18010172E.c)
 *     sub_1801017AA @ 0x1801017AA (sub_1801017AA.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_2 @ 0x180103737 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_180103737.c)
 * Callees:
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 */

__int64 __fastcall sub_18002C338(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return sub_18002C8E4(*(_QWORD *)a1);
  return result;
}
