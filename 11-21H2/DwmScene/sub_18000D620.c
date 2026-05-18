/*
 * XREFs of sub_18000D620 @ 0x18000D620
 * Callers:
 *     sub_1800FF0A5 @ 0x1800FF0A5 (sub_1800FF0A5.c)
 *     unknown_libname_10 @ 0x1800FF168 (unknown_libname_10.c)
 *     sub_1800FF1B0 @ 0x1800FF1B0 (sub_1800FF1B0.c)
 *     sub_1800FF1C2 @ 0x1800FF1C2 (sub_1800FF1C2.c)
 *     sub_1800FFB94 @ 0x1800FFB94 (sub_1800FFB94.c)
 *     sub_1800FFBB8 @ 0x1800FFBB8 (sub_1800FFBB8.c)
 *     sub_1800FFBEE @ 0x1800FFBEE (sub_1800FFBEE.c)
 *     unknown_libname_15 @ 0x1800FFC24 (unknown_libname_15.c)
 *     sub_1800FFC36 @ 0x1800FFC36 (sub_1800FFC36.c)
 *     sub_180101D07 @ 0x180101D07 (sub_180101D07.c)
 *     sub_180101EDC @ 0x180101EDC (sub_180101EDC.c)
 *     sub_18010C997 @ 0x18010C997 (sub_18010C997.c)
 *     sub_18010C9B0 @ 0x18010C9B0 (sub_18010C9B0.c)
 *     sub_18010C9C9 @ 0x18010C9C9 (sub_18010C9C9.c)
 *     sub_18010C9E2 @ 0x18010C9E2 (sub_18010C9E2.c)
 *     sub_18010CA14 @ 0x18010CA14 (sub_18010CA14.c)
 *     sub_18010CA2D @ 0x18010CA2D (sub_18010CA2D.c)
 *     sub_18010CA63 @ 0x18010CA63 (sub_18010CA63.c)
 *     unknown_libname_78 @ 0x18010CA75 (unknown_libname_78.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_4 @ 0x18010CA99 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_18010CA99.c)
 *     sub_18010CAAB @ 0x18010CAAB (sub_18010CAAB.c)
 *     sub_18010CB83 @ 0x18010CB83 (sub_18010CB83.c)
 *     sub_18010CBE0 @ 0x18010CBE0 (sub_18010CBE0.c)
 *     sub_18010CC04 @ 0x18010CC04 (sub_18010CC04.c)
 *     sub_18010CC16 @ 0x18010CC16 (sub_18010CC16.c)
 *     sub_18010CC55 @ 0x18010CC55 (sub_18010CC55.c)
 *     sub_18010CC67 @ 0x18010CC67 (sub_18010CC67.c)
 *     sub_18010CC79 @ 0x18010CC79 (sub_18010CC79.c)
 *     sub_18010CCBB @ 0x18010CCBB (sub_18010CCBB.c)
 *     sub_18010CCCD @ 0x18010CCCD (sub_18010CCCD.c)
 *     unknown_libname_80 @ 0x18010CCDF (unknown_libname_80.c)
 *     sub_18010CD03 @ 0x18010CD03 (sub_18010CD03.c)
 *     sub_18010CD15 @ 0x18010CD15 (sub_18010CD15.c)
 *     sub_18010CDDB @ 0x18010CDDB (sub_18010CDDB.c)
 *     sub_18010CDED @ 0x18010CDED (sub_18010CDED.c)
 *     sub_18010CE11 @ 0x18010CE11 (sub_18010CE11.c)
 *     sub_18010CE23 @ 0x18010CE23 (sub_18010CE23.c)
 *     ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA_2 @ 0x18010CE7D (-dtor$0@-0--VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurren_ea_18010CE7D.c)
 *     unknown_libname_82 @ 0x18010CE8F (unknown_libname_82.c)
 *     sub_18010CF16 @ 0x18010CF16 (sub_18010CF16.c)
 *     sub_18010CF4C @ 0x18010CF4C (sub_18010CF4C.c)
 *     sub_18010CF5E @ 0x18010CF5E (sub_18010CF5E.c)
 *     sub_18010CF8B @ 0x18010CF8B (sub_18010CF8B.c)
 *     sub_18010CF9D @ 0x18010CF9D (sub_18010CF9D.c)
 *     sub_18010CFB6 @ 0x18010CFB6 (sub_18010CFB6.c)
 *     sub_18010CFCF @ 0x18010CFCF (sub_18010CFCF.c)
 *     sub_18010D064 @ 0x18010D064 (sub_18010D064.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18000D620(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
