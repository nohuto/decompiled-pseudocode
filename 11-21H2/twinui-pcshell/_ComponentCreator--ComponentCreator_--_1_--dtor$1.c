/*
 * XREFs of _ComponentCreator::ComponentCreator_::_1_::dtor$1 @ 0x180221B6C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ComponentCreator::ComponentCreator_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 8LL));
}
