/*
 * XREFs of sub_180012B58 @ 0x180012B58
 * Callers:
 *     sub_1800FF255 @ 0x1800FF255 (sub_1800FF255.c)
 *     sub_1801001FE @ 0x1801001FE (sub_1801001FE.c)
 *     sub_18010043C @ 0x18010043C (sub_18010043C.c)
 *     sub_1801008D8 @ 0x1801008D8 (sub_1801008D8.c)
 *     sub_180100A17 @ 0x180100A17 (sub_180100A17.c)
 *     sub_180100BF0 @ 0x180100BF0 (sub_180100BF0.c)
 *     sub_180100D2F @ 0x180100D2F (sub_180100D2F.c)
 *     sub_1801011BA @ 0x1801011BA (sub_1801011BA.c)
 *     sub_180101590 @ 0x180101590 (sub_180101590.c)
 *     unknown_libname_47 @ 0x180101B54 (unknown_libname_47.c)
 *     sub_180101BF4 @ 0x180101BF4 (sub_180101BF4.c)
 *     sub_180101D20 @ 0x180101D20 (sub_180101D20.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_3 @ 0x1801034CB (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1801034CB.c)
 *     sub_18010350A @ 0x18010350A (sub_18010350A.c)
 *     sub_1801035C6 @ 0x1801035C6 (sub_1801035C6.c)
 *     sub_180103921 @ 0x180103921 (sub_180103921.c)
 *     sub_180103CA9 @ 0x180103CA9 (sub_180103CA9.c)
 *     sub_180104341 @ 0x180104341 (sub_180104341.c)
 *     unknown_libname_55 @ 0x180104353 (unknown_libname_55.c)
 *     sub_180104365 @ 0x180104365 (sub_180104365.c)
 *     sub_180104377 @ 0x180104377 (sub_180104377.c)
 *     sub_18010471A @ 0x18010471A (sub_18010471A.c)
 *     ?dtor$0@?0???1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA @ 0x18010476B (-dtor$0@-0---1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA.c)
 *     sub_180104820 @ 0x180104820 (sub_180104820.c)
 *     sub_1801061A0 @ 0x1801061A0 (sub_1801061A0.c)
 *     sub_180106930 @ 0x180106930 (sub_180106930.c)
 *     sub_180106F96 @ 0x180106F96 (sub_180106F96.c)
 *     sub_180106FD4 @ 0x180106FD4 (sub_180106FD4.c)
 *     sub_18010D013 @ 0x18010D013 (sub_18010D013.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 */

__int64 __fastcall sub_180012B58(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    sub_1800126E8((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
