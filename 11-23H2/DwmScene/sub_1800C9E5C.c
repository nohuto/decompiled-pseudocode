/*
 * XREFs of sub_1800C9E5C @ 0x1800C9E5C
 * Callers:
 *     sub_1800C95E0 @ 0x1800C95E0 (sub_1800C95E0.c)
 *     sub_1800CAB90 @ 0x1800CAB90 (sub_1800CAB90.c)
 *     sub_1800CAFD0 @ 0x1800CAFD0 (sub_1800CAFD0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C9E5C(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // al

  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 264LL))(a1, 2LL);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  return sub_1800C9EC8(v2, v3 != 0);
}
