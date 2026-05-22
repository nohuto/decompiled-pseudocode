/*
 * XREFs of _PenInterface::UpdateTransducerProperties_::_1_::dtor$0 @ 0x1801A752F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenInterface::UpdateTransducerProperties_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
