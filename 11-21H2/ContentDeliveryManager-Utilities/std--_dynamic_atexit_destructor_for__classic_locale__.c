/*
 * XREFs of std::_dynamic_atexit_destructor_for__classic_locale__ @ 0x1800F7780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void std::_dynamic_atexit_destructor_for__classic_locale__()
{
  void (__fastcall ***v0)(_QWORD, __int64); // rax

  if ( qword_1801AE490 )
  {
    v0 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1801AE490 + 16LL))(qword_1801AE490);
    if ( v0 )
      (**v0)(v0, 1LL);
  }
}
