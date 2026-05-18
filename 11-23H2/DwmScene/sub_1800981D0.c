/*
 * XREFs of sub_1800981D0 @ 0x1800981D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180098258 @ 0x180098258 (sub_180098258.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800981D0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  sub_180098258(a1, a2, a3, a4, a5, a6);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 32LL))(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
