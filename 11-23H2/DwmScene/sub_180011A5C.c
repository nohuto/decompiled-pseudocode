/*
 * XREFs of sub_180011A5C @ 0x180011A5C
 * Callers:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 *     sub_180011AF4 @ 0x180011AF4 (sub_180011AF4.c)
 *     sub_180027780 @ 0x180027780 (sub_180027780.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_180011A5C(const struct stdext::exception *a1)
{
  if ( std::_Raise_handler )
    std::_Raise_handler(a1);
  (*(void (__fastcall **)(const struct stdext::exception *))(*(_QWORD *)a1 + 16LL))(a1);
  invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
