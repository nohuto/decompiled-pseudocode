/*
 * XREFs of ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x1800297A4
 * Callers:
 *     sub_1800331F0 @ 0x1800331F0 (sub_1800331F0.c)
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a1 + 72) = a2;
}
