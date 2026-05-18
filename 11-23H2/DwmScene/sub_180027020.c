/*
 * XREFs of sub_180027020 @ 0x180027020
 * Callers:
 *     sub_1800C6B20 @ 0x1800C6B20 (sub_1800C6B20.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180027020(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  return sub_1800A1520(*v2);
}
