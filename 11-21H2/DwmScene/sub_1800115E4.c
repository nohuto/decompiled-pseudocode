/*
 * XREFs of sub_1800115E4 @ 0x1800115E4
 * Callers:
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_1800FF10B @ 0x1800FF10B (sub_1800FF10B.c)
 *     sub_1800FFA7D @ 0x1800FFA7D (sub_1800FFA7D.c)
 *     ?dtor$0@?0???0UMSSchedulerProxy@details@Concurrency@@QEAA@PEAUIScheduler@2@PEAVResourceManager@12@AEBVSchedulerPolicy@2@@Z@4HA @ 0x18010015B (-dtor$0@-0---0UMSSchedulerProxy@details@Concurrency@@QEAA@PEAUIScheduler@2@PEAVResourceManager@1.c)
 *     sub_1801003BA @ 0x1801003BA (sub_1801003BA.c)
 *     sub_18010054A @ 0x18010054A (sub_18010054A.c)
 *     sub_180100860 @ 0x180100860 (sub_180100860.c)
 *     sub_180100EB1 @ 0x180100EB1 (sub_180100EB1.c)
 *     sub_180100EC3 @ 0x180100EC3 (sub_180100EC3.c)
 *     sub_180100FE6 @ 0x180100FE6 (sub_180100FE6.c)
 *     unknown_libname_29 @ 0x1801010E2 (unknown_libname_29.c)
 *     unknown_libname_36 @ 0x180101470 (unknown_libname_36.c)
 *     sub_1801015D8 @ 0x1801015D8 (sub_1801015D8.c)
 *     sub_180101620 @ 0x180101620 (sub_180101620.c)
 *     unknown_libname_40 @ 0x18010167A (unknown_libname_40.c)
 *     sub_1801016D4 @ 0x1801016D4 (sub_1801016D4.c)
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_1 @ 0x1801018B6 (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_1801018B6.c)
 *     sub_1801019D6 @ 0x1801019D6 (sub_1801019D6.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_1 @ 0x180101A1E (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_180101A1E.c)
 *     sub_180101B2C @ 0x180101B2C (sub_180101B2C.c)
 *     sub_180101B6A @ 0x180101B6A (sub_180101B6A.c)
 *     sub_180101B80 @ 0x180101B80 (sub_180101B80.c)
 *     unknown_libname_48 @ 0x180101B96 (unknown_libname_48.c)
 *     sub_180101BAC @ 0x180101BAC (sub_180101BAC.c)
 *     sub_180101BC2 @ 0x180101BC2 (sub_180101BC2.c)
 *     sub_180101EB4 @ 0x180101EB4 (sub_180101EB4.c)
 *     sub_18010221C @ 0x18010221C (sub_18010221C.c)
 *     sub_180102ED5 @ 0x180102ED5 (sub_180102ED5.c)
 *     sub_180102EEE @ 0x180102EEE (sub_180102EEE.c)
 *     sub_18010306F @ 0x18010306F (sub_18010306F.c)
 *     sub_180103701 @ 0x180103701 (sub_180103701.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_3 @ 0x1801038FD (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_1801038FD.c)
 *     sub_180103969 @ 0x180103969 (sub_180103969.c)
 *     sub_180103AD4 @ 0x180103AD4 (sub_180103AD4.c)
 *     sub_180103AEA @ 0x180103AEA (sub_180103AEA.c)
 *     sub_180103CE8 @ 0x180103CE8 (sub_180103CE8.c)
 *     sub_18010453F @ 0x18010453F (sub_18010453F.c)
 *     sub_180104862 @ 0x180104862 (sub_180104862.c)
 *     sub_1801065BA @ 0x1801065BA (sub_1801065BA.c)
 *     sub_18010696F @ 0x18010696F (sub_18010696F.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_1 @ 0x18010C8B3 (-dtor$0@-0--_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800115E4(__int64 a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return result;
}
