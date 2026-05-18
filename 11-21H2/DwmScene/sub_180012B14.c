/*
 * XREFs of sub_180012B14 @ 0x180012B14
 * Callers:
 *     sub_1800FF282 @ 0x1800FF282 (sub_1800FF282.c)
 *     sub_1800FFB82 @ 0x1800FFB82 (sub_1800FFB82.c)
 *     ?dtor$2@?0???R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA?AV?$task@_N@Concurrency@@_N@Z@4HA @ 0x1800FFD32 (-dtor$2@-0---R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA-AV-$task@_N@Concurrency@@_N@Z@4HA.c)
 *     sub_1800FFE2E @ 0x1800FFE2E (sub_1800FFE2E.c)
 *     sub_1801000FD @ 0x1801000FD (sub_1801000FD.c)
 *     sub_180100752 @ 0x180100752 (sub_180100752.c)
 *     unknown_libname_24 @ 0x180100764 (unknown_libname_24.c)
 *     sub_18010100A @ 0x18010100A (sub_18010100A.c)
 *     unknown_libname_31 @ 0x18010114E (unknown_libname_31.c)
 *     sub_180102D0E @ 0x180102D0E (sub_180102D0E.c)
 *     sub_180102D89 @ 0x180102D89 (sub_180102D89.c)
 *     sub_180102E28 @ 0x180102E28 (sub_180102E28.c)
 *     sub_1801038D9 @ 0x1801038D9 (sub_1801038D9.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA @ 0x1801048CE (-dtor$0@-0--_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_1 @ 0x180106C63 (-dtor$0@-0--_Getcat@-$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_1.c)
 *     sub_180106D63 @ 0x180106D63 (sub_180106D63.c)
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_4 @ 0x180106D79 (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_180106D79.c)
 *     sub_180106E16 @ 0x180106E16 (sub_180106E16.c)
 *     sub_180106E2C @ 0x180106E2C (sub_180106E2C.c)
 *     sub_180107114 @ 0x180107114 (sub_180107114.c)
 *     sub_18010716E @ 0x18010716E (sub_18010716E.c)
 *     sub_18010CEC5 @ 0x18010CEC5 (sub_18010CEC5.c)
 *     sub_18010D253 @ 0x18010D253 (sub_18010D253.c)
 *     sub_18010D426 @ 0x18010D426 (sub_18010D426.c)
 *     sub_18010D543 @ 0x18010D543 (sub_18010D543.c)
 *     sub_18010D821 @ 0x18010D821 (sub_18010D821.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180012B14(__int64 a1, __int64 a2)
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
