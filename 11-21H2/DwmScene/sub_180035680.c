/*
 * XREFs of sub_180035680 @ 0x180035680
 * Callers:
 *     sub_180010EC0 @ 0x180010EC0 (sub_180010EC0.c)
 *     sub_180017078 @ 0x180017078 (sub_180017078.c)
 *     sub_180017260 @ 0x180017260 (sub_180017260.c)
 *     sub_180017448 @ 0x180017448 (sub_180017448.c)
 *     sub_180026478 @ 0x180026478 (sub_180026478.c)
 *     sub_1800488B8 @ 0x1800488B8 (sub_1800488B8.c)
 *     sub_18004D06C @ 0x18004D06C (sub_18004D06C.c)
 *     sub_18004D278 @ 0x18004D278 (sub_18004D278.c)
 *     sub_180053AF8 @ 0x180053AF8 (sub_180053AF8.c)
 *     sub_180053CE0 @ 0x180053CE0 (sub_180053CE0.c)
 *     sub_180053EC8 @ 0x180053EC8 (sub_180053EC8.c)
 *     sub_1800540B0 @ 0x1800540B0 (sub_1800540B0.c)
 *     sub_180054298 @ 0x180054298 (sub_180054298.c)
 *     sub_180066C28 @ 0x180066C28 (sub_180066C28.c)
 *     sub_1800911D0 @ 0x1800911D0 (sub_1800911D0.c)
 *     sub_180093CE8 @ 0x180093CE8 (sub_180093CE8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x18002BBB4 (-SetScheduler@-$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEA.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_180036A48 @ 0x180036A48 (sub_180036A48.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_180035680(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char result; // al
  int v6; // edx
  int v7; // r8d
  void (__fastcall *v8)(__int64, __int64); // rbx
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(a2, a1);
  result = sub_18002BA14(v4, 1);
  if ( result )
  {
    if ( v7 == v6 )
    {
      v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
      v9 = sub_180036A48(a1, v10, 0LL);
      v8(a2, v9);
      result = sub_180010910((__int64)v10);
    }
    if ( !*(_DWORD *)(a1 + 552) )
      return sub_18002BCC0(a2, 8, 1);
  }
  return result;
}
