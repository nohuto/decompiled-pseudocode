/*
 * XREFs of sub_18003D4A0 @ 0x18003D4A0
 * Callers:
 *     sub_18004EE74 @ 0x18004EE74 (sub_18004EE74.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D4A0(_QWORD **a1, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, _QWORD, _QWORD, _QWORD))(*a1)[26])(a1, a2, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
