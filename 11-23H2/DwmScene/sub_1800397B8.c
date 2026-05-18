/*
 * XREFs of sub_1800397B8 @ 0x1800397B8
 * Callers:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 *     sub_180073624 @ 0x180073624 (sub_180073624.c)
 * Callees:
 *     sub_18009F2D8 @ 0x18009F2D8 (sub_18009F2D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800397B8(__int64 a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  sub_18009F2D8(*(_QWORD *)(a1 + 96) + 9256LL, a2);
  return sub_18009F2C4(*(_QWORD *)(a1 + 96) + 9256LL, a3);
}
