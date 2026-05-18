/*
 * XREFs of sub_1800C6AD0 @ 0x1800C6AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800C6AD0(_BYTE *a1)
{
  sub_18002A404((__int64)(a1 + 24));
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 8LL))(a1);
  return sub_180026F00(a1);
}
