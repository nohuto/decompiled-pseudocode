/*
 * XREFs of sub_1800355F8 @ 0x1800355F8
 * Callers:
 *     sub_180026808 @ 0x180026808 (sub_180026808.c)
 * Callees:
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x18002BBB4 (-SetScheduler@-$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEA.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800355F8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8

  Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(a2, a1);
  if ( sub_18002BA14(v6, 1) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL))(v7, v8);
    if ( !*(_DWORD *)(a1 + 552) )
      sub_18002BCC0(a2, 8, 1);
  }
  return sub_180010910(a3);
}
