/*
 * XREFs of ??_G_Fac_node@std@@QEAAPEAXI@Z @ 0x180005410
 * Callers:
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg___0 @ 0x1800DD9E0 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg___0.c)
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
std::_Fac_node *__fastcall std::_Fac_node::`scalar deleting destructor'(std::_Fac_node *this, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rax

  v4 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
