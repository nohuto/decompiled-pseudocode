/*
 * XREFs of sub_180058B24 @ 0x180058B24
 * Callers:
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_2 @ 0x18010345B (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_18010345B.c)
 *     sub_18010346D @ 0x18010346D (sub_18010346D.c)
 *     sub_18010347F @ 0x18010347F (sub_18010347F.c)
 *     sub_1801034DD @ 0x1801034DD (sub_1801034DD.c)
 *     sub_18010CE35 @ 0x18010CE35 (sub_18010CE35.c)
 *     sub_18010CE47 @ 0x18010CE47 (sub_18010CE47.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180058B24(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    result = sub_180010884(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
