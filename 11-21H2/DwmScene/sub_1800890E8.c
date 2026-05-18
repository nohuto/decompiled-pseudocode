/*
 * XREFs of sub_1800890E8 @ 0x1800890E8
 * Callers:
 *     sub_18010685C @ 0x18010685C (sub_18010685C.c)
 *     sub_180106985 @ 0x180106985 (sub_180106985.c)
 *     sub_18010699B @ 0x18010699B (sub_18010699B.c)
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_3 @ 0x1801069AD (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_1801069AD.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 */

__int64 __fastcall sub_1800890E8(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1[2];
  if ( v2 )
  {
    sub_180088D1C(v2, a1[3]);
    result = sub_180010884((char *)a1[2], 16 * ((a1[4] - a1[2]) >> 4));
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1[4] = 0LL;
  }
  return result;
}
