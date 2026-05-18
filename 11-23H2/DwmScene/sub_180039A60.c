/*
 * XREFs of sub_180039A60 @ 0x180039A60
 * Callers:
 *     sub_180088F6C @ 0x180088F6C (sub_180088F6C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180039A60(_QWORD **a1, __int64 a2, __int64 a3, unsigned int a4)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64, _QWORD))(*a1)[35])(a1, a2, a3, a4);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
