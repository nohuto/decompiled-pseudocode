/*
 * XREFs of _InputConfigContextProvider::Broadcast_::_1_::dtor$1 @ 0x18007FE9D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputConfigContextProvider::Broadcast_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>(a2 + 112);
}
