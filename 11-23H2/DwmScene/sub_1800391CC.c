/*
 * XREFs of sub_1800391CC @ 0x1800391CC
 * Callers:
 *     sub_180073A4C @ 0x180073A4C (sub_180073A4C.c)
 *     sub_1800D6F90 @ 0x1800D6F90 (sub_1800D6F90.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800391CC(_QWORD **a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[31])(a1, a2, a3);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
