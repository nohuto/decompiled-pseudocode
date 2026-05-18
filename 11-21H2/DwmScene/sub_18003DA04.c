/*
 * XREFs of sub_18003DA04 @ 0x18003DA04
 * Callers:
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 *     sub_18007F0F0 @ 0x18007F0F0 (sub_18007F0F0.c)
 * Callees:
 *     sub_1800B127C @ 0x1800B127C (sub_1800B127C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003DA04(__int64 a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  sub_1800B127C(*(_QWORD *)(a1 + 96) + 9256LL, a2);
  return sub_1800B1224(*(_QWORD *)(a1 + 96) + 9256LL, a3);
}
