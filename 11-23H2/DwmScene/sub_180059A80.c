/*
 * XREFs of sub_180059A80 @ 0x180059A80
 * Callers:
 *     sub_1800E79A1 @ 0x1800E79A1 (sub_1800E79A1.c)
 *     ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA_2 @ 0x1800E79D7 (-dtor$0@-0--GetBitSet@SchedulerBase@details@Concurrency@@QEAA-AVQuickBitSet@23@PEBV_ea_1800E79D7.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180059A80(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return sub_180010530(v1);
  return result;
}
