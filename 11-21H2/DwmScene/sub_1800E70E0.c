/*
 * XREFs of sub_1800E70E0 @ 0x1800E70E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_1800E2DA0 @ 0x1800E2DA0 (sub_1800E2DA0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800E70E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(sub_180029E58((__int64 *)(*(_QWORD *)a2 + 120LL), *(_DWORD *)(a1 + 88)) + 8);
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  sub_180018704((__int64)v9);
  sub_1800E2DA0(v9[0], &v10);
  v6 = a3;
  v7 = v10;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 400LL))(*(_QWORD *)(a1 + 144), v10, v6);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return sub_180010910((__int64)v9);
}
