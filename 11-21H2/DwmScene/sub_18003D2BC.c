/*
 * XREFs of sub_18003D2BC @ 0x18003D2BC
 * Callers:
 *     sub_18007F724 @ 0x18007F724 (sub_18007F724.c)
 *     sub_1800EF5F0 @ 0x1800EF5F0 (sub_1800EF5F0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D2BC(_QWORD **a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[31])(a1, a2, a3);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
