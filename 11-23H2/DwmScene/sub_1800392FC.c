/*
 * XREFs of sub_1800392FC @ 0x1800392FC
 * Callers:
 *     sub_180048C84 @ 0x180048C84 (sub_180048C84.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800392FC(_QWORD **a1, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  return ((__int64 (__fastcall *)(_QWORD **, _QWORD, _QWORD))(*a1)[25])(a1, a2, 0LL);
}
