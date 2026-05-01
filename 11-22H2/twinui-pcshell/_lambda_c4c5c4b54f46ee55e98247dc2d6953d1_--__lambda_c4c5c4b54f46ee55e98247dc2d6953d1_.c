/*
 * XREFs of _lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::__lambda_c4c5c4b54f46ee55e98247dc2d6953d1_ @ 0x180786454
 * Callers:
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1____::_1_::dtor$0 @ 0x1802C3714 (_WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animat.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::__lambda_c4c5c4b54f46ee55e98247dc2d6953d1_(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[1];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
