/*
 * XREFs of sub_18001206C @ 0x18001206C
 * Callers:
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180029794 @ 0x180029794 (sub_180029794.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_18001206C(const struct stdext::exception *a1)
{
  if ( std::_Raise_handler )
    std::_Raise_handler(a1);
  (*(void (__fastcall **)(const struct stdext::exception *))(*(_QWORD *)a1 + 16LL))(a1);
  invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
