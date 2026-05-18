/*
 * XREFs of ??1TaskStack@details@Concurrency@@QEAA@XZ_0 @ 0x180010F74
 * Callers:
 *     sub_1800E3BF5 @ 0x1800E3BF5 (sub_1800E3BF5.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA @ 0x1800E4550 (-dtor$0@-0--_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA.c)
 *     sub_1800E4C25 @ 0x1800E4C25 (sub_1800E4C25.c)
 *     sub_1800E4E84 @ 0x1800E4E84 (sub_1800E4E84.c)
 *     sub_1800E50A4 @ 0x1800E50A4 (sub_1800E50A4.c)
 *     sub_1800E54CF @ 0x1800E54CF (sub_1800E54CF.c)
 *     sub_1800E5AD5 @ 0x1800E5AD5 (sub_1800E5AD5.c)
 *     sub_1800E5AF9 @ 0x1800E5AF9 (sub_1800E5AF9.c)
 *     sub_1800E5C19 @ 0x1800E5C19 (sub_1800E5C19.c)
 *     sub_1800E5EBF @ 0x1800E5EBF (sub_1800E5EBF.c)
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_0 @ 0x1800E60DA (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_1800E60DA.c)
 *     sub_1800E61D6 @ 0x1800E61D6 (sub_1800E61D6.c)
 *     sub_1800E6278 @ 0x1800E6278 (sub_1800E6278.c)
 *     sub_1800E62B6 @ 0x1800E62B6 (sub_1800E62B6.c)
 *     sub_1800E62CC @ 0x1800E62CC (sub_1800E62CC.c)
 *     sub_1800E62E2 @ 0x1800E62E2 (sub_1800E62E2.c)
 *     sub_1800E62F8 @ 0x1800E62F8 (sub_1800E62F8.c)
 *     sub_1800E630E @ 0x1800E630E (sub_1800E630E.c)
 *     sub_1800E6666 @ 0x1800E6666 (sub_1800E6666.c)
 *     sub_1800E681B @ 0x1800E681B (sub_1800E681B.c)
 *     sub_1800E6929 @ 0x1800E6929 (sub_1800E6929.c)
 *     sub_1800E70BA @ 0x1800E70BA (sub_1800E70BA.c)
 *     sub_1800E70D3 @ 0x1800E70D3 (sub_1800E70D3.c)
 *     sub_1800E71C1 @ 0x1800E71C1 (sub_1800E71C1.c)
 *     sub_1800E7706 @ 0x1800E7706 (sub_1800E7706.c)
 *     sub_1800E7853 @ 0x1800E7853 (sub_1800E7853.c)
 *     sub_1800E7A28 @ 0x1800E7A28 (sub_1800E7A28.c)
 *     unknown_libname_49 @ 0x1800E7A82 (unknown_libname_49.c)
 *     sub_1800E7B12 @ 0x1800E7B12 (sub_1800E7B12.c)
 *     sub_1800E7C0E @ 0x1800E7C0E (sub_1800E7C0E.c)
 *     sub_1800E7C24 @ 0x1800E7C24 (sub_1800E7C24.c)
 *     sub_1800E8358 @ 0x1800E8358 (sub_1800E8358.c)
 *     sub_1800E8696 @ 0x1800E8696 (sub_1800E8696.c)
 *     sub_1800EA67C @ 0x1800EA67C (sub_1800EA67C.c)
 *     sub_1800EB392 @ 0x1800EB392 (sub_1800EB392.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_0 @ 0x1800F1576 (-dtor$0@-0--_Getcat@-$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_0.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

void __fastcall Concurrency::details::TaskStack::~TaskStack(Concurrency::details::TaskStack *this)
{
  volatile signed __int32 *v1; // rcx

  v1 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( v1 )
    sub_180010574(v1);
}
