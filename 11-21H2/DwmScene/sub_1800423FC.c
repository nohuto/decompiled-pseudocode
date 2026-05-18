/*
 * XREFs of sub_1800423FC @ 0x1800423FC
 * Callers:
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 * Callees:
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800423FC(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx

  sub_1800436D4(a1);
  v4 = a2[1];
  v5 = 0LL;
  v6 = 0LL;
  if ( v4 )
  {
    v5 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    v6 = v4;
  }
  *(_QWORD *)(a1 + 88) = v5;
  v7 = *(volatile signed __int32 **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v6;
  if ( v7 && _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  return sub_180010910((__int64)a2);
}
