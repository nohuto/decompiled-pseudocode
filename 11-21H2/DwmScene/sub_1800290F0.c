/*
 * XREFs of sub_1800290F0 @ 0x1800290F0
 * Callers:
 *     sub_1800DC200 @ 0x1800DC200 (sub_1800DC200.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800290F0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  return sub_1800B3460(*v2);
}
