/*
 * XREFs of sub_180021170 @ 0x180021170
 * Callers:
 *     sub_180020FC0 @ 0x180020FC0 (sub_180020FC0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021170(_QWORD *a1)
{
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
  sub_180010910((__int64)(a1 + 4));
  sub_180010910((__int64)(a1 + 2));
  return sub_180010910((__int64)a1);
}
