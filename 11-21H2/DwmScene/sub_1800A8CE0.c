/*
 * XREFs of sub_1800A8CE0 @ 0x1800A8CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A8D68 @ 0x1800A8D68 (sub_1800A8D68.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A8CE0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  sub_1800A8D68(a1, a2, a3, a4, a5, a6);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 32LL))(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
