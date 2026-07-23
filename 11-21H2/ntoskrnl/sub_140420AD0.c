/*
 * XREFs of sub_140420AD0 @ 0x140420AD0
 * Callers:
 *     sub_14021C750 @ 0x14021C750 (sub_14021C750.c)
 *     sub_140222E70 @ 0x140222E70 (sub_140222E70.c)
 *     sub_14023B310 @ 0x14023B310 (sub_14023B310.c)
 *     sub_140246390 @ 0x140246390 (sub_140246390.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1403A22F0 @ 0x1403A22F0 (sub_1403A22F0.c)
 *     sub_1403A35B8 @ 0x1403A35B8 (sub_1403A35B8.c)
 *     sub_1403AD304 @ 0x1403AD304 (sub_1403AD304.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 *     KeWriteProtectPAT @ 0x140A69D80 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void sub_140420AD0()
{
  __writegsdword(0xA018u, __readgsdword(0xA018u) | 1);
}
