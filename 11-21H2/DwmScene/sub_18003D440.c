/*
 * XREFs of sub_18003D440 @ 0x18003D440
 * Callers:
 *     sub_18004EE74 @ 0x18004EE74 (sub_18004EE74.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D440(_QWORD **a1, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  return ((__int64 (__fastcall *)(_QWORD **, _QWORD, _QWORD))(*a1)[25])(a1, a2, 0LL);
}
