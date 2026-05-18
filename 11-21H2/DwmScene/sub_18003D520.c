/*
 * XREFs of sub_18003D520 @ 0x18003D520
 * Callers:
 *     sub_180011B90 @ 0x180011B90 (sub_180011B90.c)
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 *     sub_1800DD370 @ 0x1800DD370 (sub_1800DD370.c)
 *     sub_1800DD530 @ 0x1800DD530 (sub_1800DD530.c)
 *     sub_1800E7878 @ 0x1800E7878 (sub_1800E7878.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D520(_QWORD **a1)
{
  ((void (__fastcall *)(_QWORD **, _QWORD))(*a1)[29])(a1, 0LL);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1[12] + 16LL))(a1[12]);
}
