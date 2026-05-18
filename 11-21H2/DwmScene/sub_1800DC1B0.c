/*
 * XREFs of sub_1800DC1B0 @ 0x1800DC1B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800DC1B0(__int64 a1)
{
  sub_18002C7C4(a1 + 24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return sub_180028F80(a1);
}
