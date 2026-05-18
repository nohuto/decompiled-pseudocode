/*
 * XREFs of sub_1800E7560 @ 0x1800E7560
 * Callers:
 *     sub_1800E6CDC @ 0x1800E6CDC (sub_1800E6CDC.c)
 * Callees:
 *     sub_1800E7878 @ 0x1800E7878 (sub_1800E7878.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E7560(__int64 a1, char a2)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 880LL))(*(_QWORD *)(a1 + 144));
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 888LL))(*(_QWORD *)(a1 + 144));
  if ( a2 )
    return sub_1800E7878(a1);
  return result;
}
