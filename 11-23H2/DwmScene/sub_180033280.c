/*
 * XREFs of sub_180033280 @ 0x180033280
 * Callers:
 *     sub_18001085C @ 0x18001085C (sub_18001085C.c)
 *     sub_180016024 @ 0x180016024 (sub_180016024.c)
 *     sub_1800160F8 @ 0x1800160F8 (sub_1800160F8.c)
 *     sub_1800161CC @ 0x1800161CC (sub_1800161CC.c)
 *     sub_180024890 @ 0x180024890 (sub_180024890.c)
 *     sub_1800434F4 @ 0x1800434F4 (sub_1800434F4.c)
 *     sub_180047214 @ 0x180047214 (sub_180047214.c)
 *     sub_18004730C @ 0x18004730C (sub_18004730C.c)
 *     sub_18004D0E8 @ 0x18004D0E8 (sub_18004D0E8.c)
 *     sub_18004D1BC @ 0x18004D1BC (sub_18004D1BC.c)
 *     sub_18004D290 @ 0x18004D290 (sub_18004D290.c)
 *     sub_18004D364 @ 0x18004D364 (sub_18004D364.c)
 *     sub_18004D438 @ 0x18004D438 (sub_18004D438.c)
 *     sub_18005EC34 @ 0x18005EC34 (sub_18005EC34.c)
 *     sub_180083C1C @ 0x180083C1C (sub_180083C1C.c)
 *     sub_1800860C4 @ 0x1800860C4 (sub_1800860C4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x1800297A4 (-SetScheduler@-$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEA.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_1800342AC @ 0x1800342AC (sub_1800342AC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180033280(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char result; // al
  int v6; // edx
  int v7; // r8d
  __int64 (__fastcall *v8)(__int64, __int64); // rbx
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(a2, a1);
  result = sub_180029664(v4, 1);
  if ( result )
  {
    if ( v7 == v6 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
      v9 = sub_1800342AC(a1, v10, 0LL);
      result = v8(a2, v9);
      if ( v11 )
        result = sub_180010530(v11);
    }
    if ( !*(_DWORD *)(a1 + 552) )
      return sub_180029870(a2, 8, 1);
  }
  return result;
}
