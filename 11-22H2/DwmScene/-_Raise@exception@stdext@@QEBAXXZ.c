/*
 * XREFs of ?_Raise@exception@stdext@@QEBAXXZ @ 0x180011A5C
 * Callers:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180011AC4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x180011AF4 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 *     ?_Throw_system_error@std@@YAXW4errc@1@@Z @ 0x180027700 (-_Throw_system_error@std@@YAXW4errc@1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn stdext::exception::_Raise(stdext::exception *this)
{
  if ( std::_Raise_handler )
    std::_Raise_handler(this);
  (*(void (__fastcall **)(stdext::exception *))(*(_QWORD *)this + 16LL))(this);
  _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
