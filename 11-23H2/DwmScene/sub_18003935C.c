/*
 * XREFs of sub_18003935C @ 0x18003935C
 * Callers:
 *     sub_180048C84 @ 0x180048C84 (sub_180048C84.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003935C(_QWORD **a1, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, _QWORD, _QWORD, _QWORD))(*a1)[26])(a1, a2, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
