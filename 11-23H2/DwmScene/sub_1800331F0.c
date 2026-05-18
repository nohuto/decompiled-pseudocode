/*
 * XREFs of sub_1800331F0 @ 0x1800331F0
 * Callers:
 *     sub_180024AA4 @ 0x180024AA4 (sub_180024AA4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x1800297A4 (-SetScheduler@-$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEA.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800331F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  char result; // al
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx

  Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(a2, a1);
  result = sub_180029664(v6, 1);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL))(v8, v9);
    if ( !*(_DWORD *)(a1 + 552) )
      result = sub_180029870(a2, 8, 1);
  }
  v10 = *(_QWORD *)(a3 + 8);
  if ( v10 )
    return sub_180010530(v10);
  return result;
}
