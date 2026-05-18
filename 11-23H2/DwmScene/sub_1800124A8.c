/*
 * XREFs of sub_1800124A8 @ 0x1800124A8
 * Callers:
 *     sub_1800E3D42 @ 0x1800E3D42 (sub_1800E3D42.c)
 *     sub_1800E45A1 @ 0x1800E45A1 (sub_1800E45A1.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_0 @ 0x1800E5B0B (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_1800E5B0B.c)
 *     sub_1800E5BD1 @ 0x1800E5BD1 (sub_1800E5BD1.c)
 *     sub_1800E6EF6 @ 0x1800E6EF6 (sub_1800E6EF6.c)
 *     sub_1800E6F95 @ 0x1800E6F95 (sub_1800E6F95.c)
 *     sub_1800E7046 @ 0x1800E7046 (sub_1800E7046.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_0 @ 0x1800E8702 (-dtor$0@-0--_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_0.c)
 *     sub_1800EA92E @ 0x1800EA92E (sub_1800EA92E.c)
 *     ?dtor$0@?0???1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_2 @ 0x1800EAA1C (-dtor$0@-0---1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_2.c)
 *     sub_1800EAACF @ 0x1800EAACF (sub_1800EAACF.c)
 *     sub_1800EAAE5 @ 0x1800EAAE5 (sub_1800EAAE5.c)
 *     sub_1800EAD31 @ 0x1800EAD31 (sub_1800EAD31.c)
 *     sub_1800EAD67 @ 0x1800EAD67 (sub_1800EAD67.c)
 *     sub_1800F228E @ 0x1800F228E (sub_1800F228E.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800124A8(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
